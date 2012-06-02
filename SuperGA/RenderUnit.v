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
	 input wire ENB,
    input wire READING,
	 input wire STATUS,
	 output reg FinishRead,
	 output reg FinishWrite,
//Data signals
    input wire [7:0] RByte,
    output reg [7:0] Xcoord,
    output reg [7:0] Ycoord
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
reg EN_DT;
reg EN_DR;
reg EN_DC;


wire DL_finished;
wire DT_finished;
wire DR_finished;
wire DC_finished;
wire DrawFinished;
assign DrawFinished = DL_finished | DT_finished | DR_finished | DC_finished;

wire [7:0] DL_xo,DL_yo;
wire [7:0] DT_xo,DT_yo;
wire [7:0] DR_xo,DR_yo;
wire [7:0] DC_xo,DC_yo;
//assign Xcoord = DL_xo|DT_xo|DR_xo|DC_xo;
//assign Ycoord = DL_yo|DT_yo|DR_yo|DC_yo;

// RU DRAW MODULES
DrawLine     DL(.EN(EN_DL & ENB), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .X_1(X_1), .Y_1(Y_1), .X_Out(DL_xo), .Y_Out(DL_yo),.finish(DL_finished));
DrawTriangle DT(.EN(EN_DT & ENB), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .X_1(X_1), .Y_1(Y_1), .X_2(X_2), .Y_2(Y_2), .X_Out(DT_xo), .Y_Out(DT_yo), .finish(DT_finished));
DrawRec      DR(.EN(EN_DR & ENB), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .X_1(X_1), .Y_1(Y_1), .X_Out(DR_xo), .Y_Out(DR_yo),.finish(DR_finished));
DrawCircle   DC(.EN(EN_DC & ENB), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .R(X_1), .X_Out(DC_xo), .Y_Out(DC_yo), .finish(DC_finished));

reg init_read;

always@(posedge ACLK, posedge reset)
begin
	if (reset)
	begin
	   FinishRead <=0;
		FinishWrite <=0;
		RUByteCounter <= 0;
		ObjType = 0;
		X_0 <= 0;
		Y_0 <= 0;
		X_1 <= 0;
		init_read <=1;
		Y_1 <= 0;
		X_2 <= 0;
		Y_2 <= 0;
	end
	else
	begin
		if (ENB)
		begin
			RUByteCounter = nextRUByteCounter;
			case(RUByteCounter)
				0: begin
						if (init_read)
						begin
							init_read = 0;
							ObjType <= RByte;
						end	
					end
				1:	begin
					X_0 <= RByte;
					end
				2:	begin
					Y_0 <= RByte;
					end
				3:	begin
					X_1 <= RByte;
					end
				4:	begin
					Y_1 <= RByte;
					end
				5:	begin
					X_2 <= RByte;
					end
				6:	begin
					Y_2 <= RByte;
					end
			endcase
			if (EN_DL)begin
					Xcoord = DL_xo;
					Ycoord = DL_yo;
					end
			else if(EN_DT)begin
				
					//EN_DT=1;
					Xcoord = DT_xo;
					Ycoord = DT_yo;
					end
			else if(EN_DR) begin
					//EN_DR=1;
					Xcoord = DR_xo;
					Ycoord = DR_yo;
					end
			else if (EN_DC) begin
					//EN_DC=1;
					Xcoord = DC_xo;
					Ycoord = DC_yo;
					end
			
		end
	end
	
end

always@*
	begin
		nextRUByteCounter = RUByteCounter;
		if (!STATUS)
			begin
				FinishRead = 0;
				FinishWrite = 0;
				RUByteCounter = 0;
				ObjType = 0;
			end
		if (STATUS && READING)
			begin
				if (RUByteCounter==0)
					nextRUByteCounter = {ObjType[1:0],1'b0};
				else nextRUByteCounter = nextRUByteCounter -1;
				
				if (nextRUByteCounter === 0 & ObjType!== 0)
					begin
						FinishRead = 1;
						FinishWrite = 0;
					end 
			end
		if (STATUS && !READING) 
			case(ObjType[7:2])
			0: begin
				EN_DL=1;
				//Xcoord = DL_xo;
				//Ycoord = DL_yo;
				end
			1: begin
				EN_DT=1;
				//Xcoord = DT_xo;
				//Ycoord = DT_yo;
				end
			2: begin
				EN_DR=1;
				//Xcoord = DR_xo;
				//Ycoord = DR_yo;
				end
			3: begin
				EN_DC=1;
				//Xcoord = DC_xo;
				//Ycoord = DC_yo;
				end
			endcase
		if (DrawFinished)
			begin
				EN_DL = 0;
				EN_DT = 0;
				EN_DR = 0;
				EN_DC = 0;
				FinishWrite = 1;
				FinishRead = 0;
			end
	end

endmodule
