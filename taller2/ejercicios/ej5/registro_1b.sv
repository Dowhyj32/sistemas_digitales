module registro_1b (
    input  logic clk,
    input  logic rst,
    input  logic we,
    input  logic din,
    output logic q
);
  // completar: instanciar ff_d y un mux (we ? din : q)

  logic next_d;
  assign next_d = we ?  din : q;
  

  ff_d flip_flop_d (
    .clk(clk),
    .rst(rst),
    .d  (next_d),
    .q  (q)
  );
  


endmodule
