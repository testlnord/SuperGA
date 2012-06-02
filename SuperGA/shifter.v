`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:14:44 04/01/2012 
// Design Name: 
// Module Name:    shifter 
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
module shifter(
// Global signals
    input wire ACLK,
	 input wire ENB,
//
    input wire [7:0] Xcoord,
    input wire [7:0] Ycoord,
    input wire [7:0] Xcenter,
    input wire [7:0] Ycenter,
	 output reg [7:0] Xout,
	 output reg [7:0] Yout,
	 output reg VALID
    );
	 
	 reg [7:0] x,y;
	 reg vld;
    always @(posedge ACLK) begin
		if (ENB)
			begin
				Xout <= x;
				Yout <= y;
			end
		else 
			begin
				//Xout <= 0;
				//Yout <= 0;
			end
		VALID = vld;
    end
	 always@* 
		begin
			x = Xcoord - Xcenter;
			y = Ycoord - Ycenter;
			vld = ENB;
		end
	 
endmodule
