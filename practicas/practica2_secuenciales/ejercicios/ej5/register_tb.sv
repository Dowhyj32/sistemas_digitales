module register_tb #(
    parameter int N = 8
);

    logic clk;
    logic reset;
    logic write_enable;
    logic [N-1:0] data_in;
    logic [N-1:0] data_out;

    int errores = 0;

    register #(.N(N)) dut (
        .clk(clk),
        .reset(reset),
        .write_enable(write_enable),
        .data_in(data_in),
        .data_out(data_out)
    );

    // clock de 10 ns
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // pone las entradas, espera el flanco y compara la salida
    task automatic paso(input logic rst, input logic we, input logic [N-1:0] din,
                        input logic [N-1:0] esperado, input string caso);
        reset = rst;
        write_enable = we;
        data_in = din;
        @(posedge clk);
        #1;
        if (data_out !== esperado) begin
            $error("[N=%0d] %s: data_out = %b, esperado = %b", N, caso, data_out, esperado);
            errores++;
        end
        else begin
            $display("[N=%0d] OK  %s: data_out = %b", N, caso, data_out);
        end
    endtask

    initial begin
        // reset con we = 1 a la vez: tiene que ganar el reset
        paso(1, 1, N'(8'hA5), '0,         "reset con prioridad sobre we");
        // conserva: we = 0, data_in cambia pero no se guarda
        paso(0, 0, N'(8'hFF), '0,         "conserva despues del reset");
        // carga
        paso(0, 1, N'(8'h3C), N'(8'h3C),  "carga data_in");
        // conserva lo cargado
        paso(0, 0, N'(8'h96), N'(8'h3C),  "conserva lo cargado");
        // otra carga, para ver que pisa el valor anterior
        paso(0, 1, N'(8'hC3), N'(8'hC3),  "carga un valor nuevo");
        // reset con we = 0
        paso(1, 0, N'(8'h5A), '0,         "reset");
        // carga despues del reset
        paso(0, 1, '1,        '1,         "carga todos unos");

        if (errores == 0) $display("[N=%0d] Todos los tests pasaron", N);
        else              $display("[N=%0d] %0d tests fallaron", N, errores);
        $finish;
    end

endmodule
