module porton_fsm_smart (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic abrir, output logic cerrar, output logic pausa,
    output logic abierto, output logic cerrado
);
  // COMPLETAR: un click inicia; durante el movimiento pausa; desde la pausa
  // otro click inicia el movimiento en la dirección opuesta.
endmodule
