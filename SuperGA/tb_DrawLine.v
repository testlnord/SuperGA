`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:48 05/13/2012 
// Design Name: 
// Module Name:    tb_DrawLine 
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
module tb_DrawLine(
    );
	 
reg ACLK;

reg [7:0] X_0;
reg [7:0] Y_0;
reg [7:0] X_1;
reg [7:0] Y_1;
reg [7:0] X_2;
reg [7:0] Y_2;
//RU WIRES
reg EN_DL;

wire [7:0] X_out;
wire [7:0] Y_out;
wire DL_finished;
// RU DRAW MODULES
DrawLine DL(.EN(EN_DL),.ACLK(ACLK),.X_0(X_0),.Y_0(Y_0),.X_1(X_1),.Y_1(Y_1),.X_Out(X_out),.Y_Out(Y_out),.finish(DL_finished));

	always begin
		#1 ACLK = ~ACLK;
	end

	initial begin
		ACLK = 0;
		EN_DL = 1;
		X_0 = 1;
		Y_0 = 5;
		X_1 = 0;
		Y_1 = 0;
		#25 $finish;//stop();
	end	


endmodule
