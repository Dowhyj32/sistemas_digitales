module circuito (
    input logic X,
    input logic clk,
    input logic rst,
    output logic A,
    output logic B
);
    logic J, K;
    logic D;

    assign J = ~(A | X);
    assign K = ~(A | X);
    assign D = (A & ~B);


    //flip-flop JK (salida A)
    always_ff @(posedge clk) begin
        if (rst) begin
            A <= 1'b0;
        end
        else begin
            case ({J, K})
            2'b00: A <=  A;         //mantiene
            2'b01: A <= 1'b0;       //reset
            2'b10: A <= 1'b1;       //set
            2'b11: A <= ~A;         //invierte
            endcase    
        end
    end

    //flip-flop D (salida B)
    always_ff @(posedge clk) begin
        if (rst) begin
            B <= 1'b0;
        end
        else begin
            B <= D;
        end
    end

endmodule
