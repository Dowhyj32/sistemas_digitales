module registro8b_tb;

    logic clk;
    logic reset;
    logic load;
    logic shift;
    logic serial_in;
    logic [7:0] data_in;
    logic [7:0] data_out;

    int errores = 0;

    registro8b dut (
        .clk(clk),
        .reset(reset),
        .load(load),
        .shift(shift),
        .serial_in(serial_in),
        .data_in(data_in),
        .data_out(data_out)
    );

    // clock de 10 ns
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // pone las entradas, espera el flanco y compara la salida
    task automatic paso(input logic rst, input logic ld, input logic sh, input logic sin,
                        input logic [7:0] din, input logic [7:0] esperado, input string caso);
        reset = rst;
        load = ld;
        shift = sh;
        serial_in = sin;
        data_in = din;
        @(posedge clk);
        #1;
        if (data_out !== esperado) begin
            $error("%s: data_out = %h, esperado = %h", caso, data_out, esperado);
            errores++;
        end
        else begin
            $display("OK  %s: data_out = %h (%b)", caso, data_out, data_out);
        end
    endtask

    initial begin
        // secuencia del enunciado (inciso c)
        paso(1, 0, 0, 0, 8'h00, 8'h00, "flanco 1: reset");
        paso(0, 1, 0, 0, 8'h35, 8'h35, "flanco 2: load");
        paso(0, 0, 1, 1, 8'h00, 8'h6B, "flanco 3: shift entra 1");
        paso(0, 0, 1, 0, 8'h00, 8'hD6, "flanco 4: shift entra 0");
        paso(0, 0, 0, 1, 8'hFF, 8'hD6, "flanco 5: conserva");
        paso(0, 1, 1, 1, 8'hA6, 8'hA6, "flanco 6: load gana a shift");

        // casos extra
        paso(1, 1, 1, 1, 8'hFF, 8'h00, "reset gana a load y shift");
        paso(0, 1, 0, 0, 8'h81, 8'h81, "load 1000_0001");
        paso(0, 0, 1, 0, 8'h00, 8'h02, "shift: el bit 7 se pierde");

        if (errores == 0) $display("Todos los tests pasaron");
        else              $display("%0d tests fallaron", errores);
        $finish;
    end

endmodule
