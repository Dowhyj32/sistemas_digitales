module semaforo (
    input logic clk,
    input logic rst,
    output logic [3:0] estado
);

    logic [6:0] cuenta;
    logic cuenta_cien;

    contador7 contador7 (
        .clk   (clk),
        .rst   (rst),
        .clear (cuenta_cien),
        .cuenta(cuenta)
    );

    comparador comparador (
        .contador   (cuenta),
        .cuenta_cien(cuenta_cien)
    );

    rotador4 rotador4 (
        .clk        (clk),
        .rst        (rst),
        .we         (cuenta_cien),
        .dato_rotado(estado)
    );

endmodule
