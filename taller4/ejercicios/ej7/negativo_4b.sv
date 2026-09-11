module negativo_4b (
    input logic [3:0] dato,
    output logic negativo
);
  // COMPLETAR: Indicar si dato es negativo en complemento a dos.

  assign negativo = dato[3] ? 1 : 0;
endmodule
