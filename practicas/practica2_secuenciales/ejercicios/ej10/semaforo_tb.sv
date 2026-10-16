module semaforo_tb;

    logic clk;
    logic rst;
    logic [3:0] estado;

    int errores = 0;

    semaforo dut (
        .clk(clk),
        .rst(rst),
        .estado(estado)
    );

    // clock de 100 Hz -> periodo de 10 ms
    // para la simulacion uso 10 unidades de tiempo por ciclo
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // compara el estado actual con el esperado
    task automatic chequear(input logic [3:0] esperado, input string caso);
        if (estado !== esperado) begin
            $error("%s: estado = %b, esperado = %b", caso, estado, esperado);
            errores++;
        end
        else begin
            $display("OK  %s: estado = %b", caso, estado);
        end
    endtask

    initial begin
        // reset durante un flanco
        rst = 1;
        @(posedge clk);
        #1;
        rst = 0;
        chequear(4'b0001, "despues del reset (0 s)");

        // a mitad del segundo todavia no tiene que haber rotado
        repeat (50) @(posedge clk);
        #1;
        chequear(4'b0001, "a mitad del primer segundo");

        // un flanco antes del segundo: sigue igual
        repeat (49) @(posedge clk);
        #1;
        chequear(4'b0001, "flanco 99, todavia no rota");

        // flanco 100: rota
        @(posedge clk);
        #1;
        chequear(4'b0010, "1 s");

        repeat (100) @(posedge clk);
        #1;
        chequear(4'b0100, "2 s");

        repeat (100) @(posedge clk);
        #1;
        chequear(4'b1000, "3 s");

        repeat (100) @(posedge clk);
        #1;
        chequear(4'b0001, "4 s (vuelve a s0)");

        repeat (100) @(posedge clk);
        #1;
        chequear(4'b0010, "5 s");

        if (errores == 0) $display("Todos los tests pasaron");
        else              $display("%0d tests fallaron", errores);
        $finish;
    end

endmodule
