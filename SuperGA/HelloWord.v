`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:42:01 02/20/2012 
// Design Name: 
// Module Name:    HelloWord 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module HelloWord(
    input [3:0] a,
    input [3:0] b,
    output reg [4:0] c,
    input clk
    );
	always@(posedge clk)
	begin
		c<=(a*b);
	end
endmodule
