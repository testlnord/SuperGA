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
	 output reg FinishRead,
	 output reg FinishWrite,
//Data signals
    input wire [7:0] RByte,
    output wire [7:0] Xcoord,
    output wire [7:0] Ycoord
    );
wire reset = ~ARESETn;

// RU registers
reg [2:0] RUByteCounter;
reg [2:0] nextRUByteCounter;
reg [7:0] ObjType;
reg [7:0] X_0;
reg [7:0] Y_0;
reg [7:0] X_1;
reg [7:0] Y_1;
reg [7:0] X_2;
reg [7:0] Y_2;
//RU WIRES
reg EN_DL;
reg EN_DR;

wire X_out_line;
wire Y_out_line;
wire DL_finished;
// RU DRAW MODULES
DrawLine DL(.EN(EN_DL),.ACLK(ACLK),.X_1(X_0),.Y_1(Y_0),.X_2(X_1),.Y_2(Y_1),.X_Out(X_out_line),.Y_Out(Y_out_line),.finish(DL_finished));

always@(STATUS,READING)
begin
	if (STATUS && !READING) 
	case(ObjType[7:2])
	0: EN_DL=1;
	endcase
end;

always@(posedge ACLK)
begin
	if (reset)
	begin
		RUByteCounter = 0;
		ObjType = 0;
		X_0 = 0;
		Y_0 = 0;
		X_1 = 0;
		Y_1 = 0;
		X_2 = 0;
		Y_2 = 0;
	end
	else
	begin
		if (STATUS && READING)
		case(RUByteCounter)
		0: begin
			ObjType = RByte;
			nextRUByteCounter = {RByte[1:0],0};
			end
		1:	begin
			X_0 = RByte;
			nextRUByteCounter = RUByteCounter -1;
			end
		2:	begin
			Y_0 = RByte;
			nextRUByteCounter = RUByteCounter -1;
			end
		3:	begin
			X_1 = RByte;
			nextRUByteCounter = RUByteCounter -1;
			end
		4:	begin
			Y_1 = RByte;
			nextRUByteCounter = RUByteCounter -1;
			end
		5:	begin
			X_2 = RByte;
			nextRUByteCounter = RUByteCounter -1;
			end
		6:	begin
			X_0 = RByte;
			nextRUByteCounter = RUByteCounter -1;
			end
		endcase
	end
	
end;

always@(nextRUByteCounter)
begin
	RUByteCounter = nextRUByteCounter;
	if (nextRUByteCounter === 0)
		FinishRead = 1;
end;
always@(DL_finished)
begin
	FinishWrite = 1;
end;
endmodule
