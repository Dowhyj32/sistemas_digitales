module uupal (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       force_en,
    input  logic       we0,
    input  logic       we1,
    input  logic       we2,
    input  logic       we3,
    input  logic [1:0] src_a,
    input  logic [1:0] src_b,
    input  logic       load_op_a,
    input  logic       load_op_b,
    input  logic [1:0] op,
    output logic [3:0] r0,
    output logic [3:0] r1,
    output logic [3:0] r2,
    output logic [3:0] r3,
    output logic [3:0] operand_a,
    output logic [3:0] operand_b,
    output logic [3:0] and_value,
    output logic [3:0] or_value,
    output logic [3:0] result
);
  // Completar de manera estructural:
  // 1. mux src_a -> bus de lectura A; mux src_b -> bus de lectura B;
  // 2. registros operand_a y operand_b (load_op_a / load_op_b);
  // 3. AND y OR de 4 bits e instancias sumador_4b y restador_4b;
  // 4. mux op -> result;
  // 5. mux force_en: force_in vs result -> bus de escritura;
  // 6. cuatro registro_4b (r0..r3) con we0..we3.;

  logic [3:0] bus_a;  //salida del mux de src_a
  logic [3:0] bus_b;  //salida del mux de src_b
  logic [3:0] add;
  logic [3:0] sub; 
  logic [3:0] bus_escritura;
  
  always_comb begin
    case (src_a)
      2'b00:  bus_a = r0;
      2'b01:  bus_a = r1;
      2'b10:  bus_a = r2;
      2'b11:  bus_a = r3; 
    endcase

    case (src_b)
      2'b00:  bus_b = r0;
      2'b01:  bus_b = r1;
      2'b10:  bus_b = r2;
      2'b11:  bus_b = r3; 
    endcase
  end

  registro_4b ALU_A (
    .clk(clk),
    .rst(rst),
    .we (load_op_a),
    .din(bus_a),
    .q  (operand_a)
  );

  registro_4b ALU_B (
    .clk(clk),
    .rst(rst),
    .we (load_op_b),
    .din(bus_b),
    .q  (operand_b)
  );

  compuerta_and_4b and_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(and_value)
  );

  compuerta_or_4b or_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(or_value)
  );

  sumador_4b ADD (
    .a   (operand_a),
    .b   (operand_b),
    .cin (0),
    .sum (add),
    .cout()
  );

  restador_4b SUB (
    .a   (operand_a),
    .b   (operand_b),
    .bin (0),
    .diff(sub),
    .bout()
  );

  always_comb begin
    case (op)
      2'b00:  result = and_value;
      2'b01:  result = or_value;
      2'b10:  result = add;
      2'b11:  result = sub; 
    endcase
  end
  
  assign bus_escritura = force_en ? force_in : result;

  registro_4b R0 (
    .clk(clk),
    .rst(rst),
    .we (we0),
    .din(bus_escritura),
    .q  (r0)
  );

  registro_4b R1 (
    .clk(clk),
    .rst(rst),
    .we (we1),
    .din(bus_escritura),
    .q  (r1)
  );

  registro_4b R2 (
    .clk(clk),
    .rst(rst),
    .we (we2),
    .din(bus_escritura),
    .q  (r2)
  );

  registro_4b R3 (
    .clk(clk),
    .rst(rst),
    .we (we3),
    .din(bus_escritura),
    .q  (r3)
  );

endmodule
