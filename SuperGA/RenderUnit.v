`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:45 04/01/2012 
// Design Name: 
// Module Name:    RenderUnit 
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
module RenderUnit(
// Global signals
    input wire ACLK,
    input wire ARESETn,
//Control signals
    input wire READING,
	 input wire STATUS,
	 output wire FinishRead,
	 output wire FinishWrite,
//Data signals
    input wire [7:0] RByte,
    output wire [7:0] Xcoord,
    output wire [7:0] Ycoord
    );
// RU registers
reg [7:0] RUByteCounter;
reg [7:0] ObjType;
reg [7:0] X_0;
reg [7:0] Y_0;
reg [7:0] X_1;
reg [7:0] Y_1;
reg [7:0] X_2;
reg [7:0] Y_2;
//RU WIRES
wire EN_DL;
wire EN_DR;

wire X_out_line;
wire Y_out_line;
wire DL_finished;
// RU DRAW MODULES
DrawLine DL(.EN(EN_DL),.ACLK(ACLK),.X_1(X_0),.Y_1(Y_0),X_2(X_1),.Y_2(Y_1),.X_Out(X_out_line),.Y_Out(Y_out_line),.finish(DL_finished));


endmodule
