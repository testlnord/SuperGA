`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:20:39 04/04/2012 
// Design Name: 
// Module Name:    DrawLine 
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
module DrawLine(
    input wire EN,
    input wire ACLK,
    input wire [7:0] X_1,
    input wire [7:0] Y_1,
    input wire [7:0] X_2,
    input wire [7:0] Y_2,
    output reg [7:0] X_Out,
    output reg [7:0] Y_Out,
	 output reg finish
    );
always@(ACLK)
begin
	if (!EN)
	begin
		finish = 0;
	end;
end

endmodule
