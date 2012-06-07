`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:27:48 05/14/2012 
// Design Name: 
// Module Name:    tb_DrawRec 
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
module tb_DrawRec(
    );
	 
reg ACLK;

reg [7:0] X_0;
reg [7:0] Y_0;
reg [7:0] X_1;
reg [7:0] Y_1;
reg [7:0] X_2;
reg [7:0] Y_2;
//RU WIRES
reg EN_DR;

wire [7:0] X_out_line;
wire [7:0] Y_out_line;
wire DR_finished;
// RU DRAW MODULES
DrawRec DR(.EN(EN_DR), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .X_1(X_1), .Y_1(Y_1), .X_Out(X_out_line), .Y_Out(Y_out_line), .finish(DR_finished));

	always begin
		#1 ACLK = ~ACLK;
	end

	initial begin
		ACLK = 0;
		EN_DR = 1;
		X_0 = 0;
		Y_0 = 0;
		X_1 = 5;
		Y_1 = 5;

		#100 $finish;//stop();
	end	


endmodule
