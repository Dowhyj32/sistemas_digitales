module F_tb (
    input  logic clk,
    input  logic rst,
    output logic done,
    output logic pass_all
);
    logic [2:0] value;
    logic dv;
    logic out, esperado, pass;

    // columna F de la tabla: el bit i es la salida de la fila i
    localparam logic [7:0] TABLA_F = 8'b1011_1000;

    oracle_tb #(.N(3)) oracle (
        .clk(clk), .rst(rst), .pass(pass),
        .done(done), .value(value), .dv(dv), .pass_all(pass_all)
    );

    F dut (.A(value[2]), .B(value[1]), .C(value[0]), .out(out));

    assign esperado = TABLA_F[value];
    assign pass = (out == esperado);
endmodule