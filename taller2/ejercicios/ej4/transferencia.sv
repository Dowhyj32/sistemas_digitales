module transferencia (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       force_en,
    input  logic [1:0] src,
    input  logic       we0,
    input  logic       we1,
    input  logic       we2,
    input  logic       we3,
    output logic [3:0] r0,
    output logic [3:0] r1,
    output logic [3:0] r2,
    output logic [3:0] r3
);
  // bus y cuatro registro_4b
  // force_en=1 → bus=force_in; si no, src elige r0/r1/r2/r3
endmodule
