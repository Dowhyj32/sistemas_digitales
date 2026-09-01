module registro_4b (
    input  logic       clk,
    input  logic       rst,
    input  logic       we,
    input  logic [3:0] din,
    output logic [3:0] q
);
  // completar: cuatro registro_1b, un bit cada uno

  logic next_d0, next_d1, next_d2, next_d3;
  
  assign next_d0 = we ? din[0] : q[0];
  assign next_d1 = we ? din[1] : q[1];
  assign next_d2 = we ? din[2] : q[2];
  assign next_d3 = we ? din[3] : q[3];


  ff_d ff0 (
    .clk(clk),
    .rst(rst),
    .d  (next_d0),
    .q  (q[0])
  );

  ff_d ff1 (
    .clk(clk),
    .rst(rst),
    .d  (next_d1),
    .q  (q[1])
  );

  ff_d ff2 (
    .clk(clk),
    .rst(rst),
    .d  (next_d2),
    .q  (q[2])
  );

  ff_d ff3 (
    .clk(clk),
    .rst(rst),
    .d  (next_d3),
    .q  (q[3])
  );


endmodule
