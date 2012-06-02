`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:20:13 04/01/2012 
// Design Name: 
// Module Name:    toAddr 
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
module toAddr
#(
	parameter X_RESOL = 16
)
(
// Global signals
    input wire ACLK,
	 input wire ENB,
//
    input wire [15:0] Xcoord,
    input wire  [15:0] Ycoord,
	 output reg [7:0] Addr,
	 output reg Write
    );
	reg nextWrite;
	reg [7:0] nextAddr;
	initial
		begin
			Write  = 1;
			nextWrite = 1;
		end
	always@(posedge ACLK)
	begin
		if (ENB)
			begin
				Addr <= nextAddr;
			end
		Write <= nextWrite&ENB;	
	end
	always@*
	begin
		nextAddr = Xcoord*X_RESOL + Ycoord;
		//nextAddr = 10;
		nextWrite = !Write;
	end


endmodule
