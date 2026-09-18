module porton_fsm_smart (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic abrir, output logic cerrar, output logic pausa,
    output logic abierto, output logic cerrado
);
  // COMPLETAR: un click inicia; durante el movimiento pausa; desde la pausa
  // otro click inicia el movimiento en la dirección opuesta.
  // 1. Lista de Estados
  typedef enum logic [2:0] {
    CERRADO, // 3'b000
    ABRIENDO, // 3'b001
    ABIERTO, // 3'b010
    CERRANDO, // 3'b011
    ABRIENDO_CON_PAUSA, //3'b100
    CERRANDO_CON_PAUSA //3'b101
  } state_t;

  // Señales de estado actual 
  state_t estado_actual, prox_estado;

  // Registro de estado
  always_ff @(posedge clk or posedge rst) begin
    if (rst)
      estado_actual <= CERRADO;
    else
      estado_actual <= prox_estado;
  end

  // Logica de Estado Siguiente
  always_comb begin
    prox_estado = estado_actual;

    unique case (estado_actual) 
      CERRADO: if (button) prox_estado = ABRIENDO;

      ABRIENDO : prox_estado = (posicion == 2'b11) ? ABIERTO : (button) ? ABRIENDO_CON_PAUSA : ABRIENDO;

      ABIERTO : if (button) prox_estado = CERRANDO;

      CERRANDO : prox_estado = (posicion == 2'b00) ? CERRADO : (button) ? CERRANDO_CON_PAUSA : CERRANDO;

      ABRIENDO_CON_PAUSA : if(button) prox_estado = CERRANDO;

      CERRANDO_CON_PAUSA : if(button) prox_estado = ABRIENDO;

      default : prox_estado = CERRADO;
    endcase 
  end

  // Logica de Salida
  always_comb begin
    unique case (estado_actual)
      CERRADO : begin
        cerrado = 1'b1;
        abierto = 1'b0;
        abrir = 1'b0;
        cerrar = 1'b0;
        pausa = 1'b0;
      end

      ABRIENDO : begin
        cerrado = 1'b0;
        abierto = 1'b0;
        abrir = 1'b1;
        cerrar = 1'b0;
        pausa = 1'b0;
      end

      ABIERTO : begin
        cerrado = 1'b0;
        abierto = 1'b1;
        abrir = 1'b0;
        cerrar = 1'b0;
        pausa = 1'b0;
      end

      CERRANDO : begin
        cerrado = 1'b0;
        abierto = 1'b0;
        abrir = 1'b0;
        cerrar = 1'b1;
        pausa = 1'b0;
      end

      ABRIENDO_CON_PAUSA : begin
        cerrado = 1'b0;
        abierto = 1'b0;
        abrir = 1'b0;
        cerrar = 1'b0;
        pausa = 1'b1;
      end

      CERRANDO_CON_PAUSA : begin
        cerrado = 1'b0;
        abierto = 1'b0;
        abrir = 1'b0;
        cerrar = 1'b0;
        pausa = 1'b1;
      end

      default : begin
        cerrado = 1'b0;
        abierto = 1'b0;
        abrir = 1'b0;
        cerrar = 1'b0;
        pausa = 1'b0;
      end
    endcase
  end

endmodule
