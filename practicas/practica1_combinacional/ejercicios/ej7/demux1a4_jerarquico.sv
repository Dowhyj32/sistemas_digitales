module demux1a4jerarquico (
    input logic data,
    input logic [1:0] sel,
    output logic [3:0] out
);

    logic [3:0] linea; // salidas del decodificador

    decoder2a4 dec (.in(sel), .out(linea));

    assign out[0] = data & linea[0];
    assign out[1] = data & linea[1];
    assign out[2] = data & linea[2];
    assign out[3] = data & linea[3];

endmodule