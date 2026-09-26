/* verilator lint_off IMPORTSTAR */
import tp1_pkg::*;

module alu #(parameter int DATA_WIDTH = 32) (alu_if.alu alu_io);
    logic [DATA_WIDTH-1:0] operand_a, operand_b;
    logic [DATA_WIDTH-1:0] suma, resta, resultado;
    logic carry_suma, overflow_suma, carry_resta, overflow_resta;
    logic carry_resultado, overflow_resultado, opcode_valido;
    logic es_cero, es_negativo;

    assign operand_a = alu_io.operand_a;
    assign operand_b = alu_io.operand_b;
    assign alu_io.result = resultado;

    sumador_flags #(.DATA_WIDTH(DATA_WIDTH)) u_suma (
        .a(operand_a), .b(operand_b), .sum(suma),
        .carry(carry_suma), .overflow(overflow_suma)
    );
    restador_flags #(.DATA_WIDTH(DATA_WIDTH)) u_resta (
        .a(operand_a), .b(operand_b), .resta(resta),
        .carry(carry_resta), .overflow(overflow_resta)
    );
    // Un comparador y un detector de signo compartidos por todas las operaciones.
    comparador #(.DATA_WIDTH(DATA_WIDTH)) u_zero (
        .a(resultado), .b('0), .iguales(es_cero)
    );
    negativo #(.DATA_WIDTH(DATA_WIDTH)) u_negativo (
        .dato(resultado), .negativo(es_negativo)
    );

    // COMPLETAR: las conexiones de las cuatro instancias anteriores.
    // Completar la selección del resultado y de C/V según el opcode.
    always_comb begin
        resultado = '0;
        carry_resultado = 1'b0;
        overflow_resultado = 1'b0;
        opcode_valido = 1'b1;
        case (alu_io.opcode)
            OP_ADD: begin
                if (alu_io.opcode == 3'b000) resultado = suma;
                overflow_resultado = overflow_suma;
                carry_resultado = carry_suma;
                // COMPLETAR: seleccionar salidas del sumador.
            end
            OP_SUB: begin
                if (alu_io.opcode == 3'b001) resultado = resta;
                overflow_resultado = overflow_resta;
                carry_resultado = carry_resta;
                // COMPLETAR: seleccionar salidas del restador.
            end
            OP_AND: begin
                if (alu_io.opcode == 3'b010) resultado = operand_a & operand_b;
                overflow_resultado = 1'b0;
                carry_resultado = 1'b0;
                // COMPLETAR: operación AND bit a bit.
            end
            OP_OR: begin
                if (alu_io.opcode == 3'b011) resultado = operand_a | operand_b;
                overflow_resultado = 1'b0;
                carry_resultado = 1'b0;
                // COMPLETAR: operación OR bit a bit.
            end
            default: begin
                if ((alu_io.opcode == 3'b100) | (alu_io.opcode == 3'b101) | (alu_io.opcode == 3'b110) | (alu_io.opcode == 3'b111)) opcode_valido = 1'b0;
                overflow_resultado = 1'b0;
                carry_resultado = 1'b0;
                // COMPLETAR: opcode inválido.

            end
        endcase
    end

    // COMPLETAR: flags Z/N a partir de los detectores y C/V seleccionadas.
    // Respetar la excepción de opcode inválido (Z/N/C/V = 0100).
    
    //assign alu_io.flags = '0;
    assign alu_io.flags[3] = (opcode_valido) ? es_cero : 1'b0;
    assign alu_io.flags[2] = (opcode_valido) ? es_negativo : 1'b1;
    assign alu_io.flags[1] = (opcode_valido) ? carry_resultado : 1'b0;
    assign alu_io.flags[0] = (opcode_valido) ? overflow_resultado : 1'b0;
endmodule
