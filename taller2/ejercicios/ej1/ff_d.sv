module ff_d (
    input  logic clk,
    input  logic rst,
    input  logic d,
    output logic q
);
  // completar: always_ff @(posedge clk)
  // prioridad: rst → q <= 0; si no, q <= d
endmodule
