module porton_fsm_long (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic subir, output logic bajar,
    output logic abierto, output logic cerrado
);

    //Lista de estados
  typedef enum logic [1:0] {
    CERRADO,
    ABRIENDO,
    ABIERTO,
    CERRANDO
  } state_t;

  state_t current_state, next_state;

  //Registro de estado
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      current_state <= CERRADO;
    end

    else begin
      current_state <= next_state;
    end
  end

  //Proximo estado
  always_comb begin
    next_state = current_state;

    unique case (current_state)
      CERRADO: if (button) next_state = ABRIENDO;
      ABRIENDO: if (posicion == 2'b11) next_state = ABIERTO;
      ABIERTO: if (button) next_state = CERRANDO;
      CERRANDO: if (posicion == 2'b00) next_state = CERRADO;

      default: next_state = CERRADO;
    endcase
  end


  //Salida
  always_comb begin
    unique case (current_state)
      CERRADO: begin
        cerrado = 1'b1;
        subir = 1'b0;
        abierto = 1'b0;
        bajar = 1'b0;
      end

      ABRIENDO: begin
        cerrado = 1'b0;
        subir = 1'b1;
        abierto = 1'b0;
        bajar = 1'b0;
      end

      ABIERTO: begin
        cerrado = 1'b0;
        subir = 1'b0;
        abierto = 1'b1;
        bajar = 1'b0;
      end

      CERRANDO: begin
        cerrado = 1'b0;
        subir = 1'b0;
        abierto = 1'b0;
        bajar = 1'b1;
      end
    endcase
  end

endmodule
