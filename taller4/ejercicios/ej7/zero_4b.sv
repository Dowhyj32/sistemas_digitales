module zero_4b (
    input logic [3:0] dato,
    output logic zero
);
  // COMPLETAR: Indicar si dato es cero.

  logic b3, b2, b1, b0;

  assign b0 = dato[0];
  assign b1 = dato[1];
  assign b2 = dato[2];
  assign b3 = dato[3];

  assign zero = ~b0 & ~b1 & ~b2 & ~b3;

endmodule
