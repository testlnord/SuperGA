`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:04:22 05/14/2012 
// Design Name: 
// Module Name:    tb_DrawTriangle 
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
module tb_DrawTriangle(
    );
	 
reg ACLK;

reg [7:0] X_0;
reg [7:0] Y_0;
reg [7:0] X_1;
reg [7:0] Y_1;
reg [7:0] X_2;
reg [7:0] Y_2;
//RU WIRES
reg EN_DT;

wire [7:0] X_out_line;
wire [7:0] Y_out_line;
wire DT_finished;
// RU DRAW MODULES
DrawTriangle DT(.EN(EN_DT), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .X_1(X_1), .Y_1(Y_1), .X_2(X_2), .Y_2(Y_2), .X_Out(X_out_line), .Y_Out(Y_out_line), .finish(DT_finished));

	always begin
		#1 ACLK = ~ACLK;
	end

	initial begin
		ACLK = 0;
		EN_DT = 1;
		X_0 = 0;
		Y_0 = 0;
		X_1 = 5;
		Y_1 = 5;
		X_2 = 5;
		Y_2 = 0;
		#100 $finish;//stop();
	end	


endmodule

