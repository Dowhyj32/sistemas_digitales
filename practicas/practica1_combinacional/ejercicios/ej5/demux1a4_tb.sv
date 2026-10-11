module demux1a4_tb (
    input  logic clk,
    input  logic rst,
    output logic done,
    output logic pass_all
);
    logic [2:0] value;
    logic dv;
    logic [3:0] out, esperado;
    logic pass;

    // una entrada por fila de la tabla, en orden {data, sel[1], sel[0]}
    localparam logic [3:0] TABLA [0:7] = '{
        4'b0000, 4'b0000, 4'b0000, 4'b0000,
        4'b0001, 4'b0010, 4'b0100, 4'b1000
    };

    oracle_tb #(.N(3)) oracle (
        .clk(clk), .rst(rst), .pass(pass),
        .done(done), .value(value), .dv(dv), .pass_all(pass_all)
    );

    demux1a4 dut (.data(value[2]), .sel(value[1:0]), .out(out));

    assign esperado = TABLA[value];
    assign pass = (out == esperado);
endmodule