module porton_fsm (
    input  logic clk,
    input  logic rst,
    input  logic button,
    output logic cerrado,
    output logic abriendo,
    output logic abierto,
    output logic cerrando
);
  // COMPLETAR: FSM Moore con estados CERRADO, ABRIENDO, ABIERTO y CERRANDO.

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
      ABRIENDO: next_state = ABIERTO;
      ABIERTO: if (button) next_state = CERRANDO;
      CERRANDO: next_state = CERRADO;

      default: next_state = CERRADO;
    endcase
  end


  //Salida
  always_comb begin
    unique case (current_state)
      CERRADO: begin
        cerrado = 1'b1;
        abriendo = 1'b0;
        abierto = 1'b0;
        cerrando = 1'b0;
      end

      ABRIENDO: begin
        cerrado = 1'b0;
        abriendo = 1'b1;
        abierto = 1'b0;
        cerrando = 1'b0;
      end

      ABIERTO: begin
        cerrado = 1'b0;
        abriendo = 1'b0;
        abierto = 1'b1;
        cerrando = 1'b0;
      end

      CERRANDO: begin
        cerrado = 1'b0;
        abriendo = 1'b0;
        abierto = 1'b0;
        cerrando = 1'b1;
      end
    endcase
  end

endmodule

