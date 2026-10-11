module encoder4 (
    input logic [3:0] in,
    output logic valid,
    output logic [1:0] code
);
    always_comb begin 
        case (in)
            4'b0001: begin
                valid = 1'b1;
                code = 2'b00;
            end
            4'b0010: begin
                valid = 1'b1;
                code = 2'b01;
            end
            4'b0100: begin
                valid = 1'b1;
                code = 2'b10;
            end
            4'b1000: begin
                valid = 1'b1;
                code = 2'b11;
            end
            default: begin
                valid = 1'b0;
                code = 2'b00;
            end
        endcase
    end

    
endmodule