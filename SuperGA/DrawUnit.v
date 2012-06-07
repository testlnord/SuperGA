`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:51:34 06/03/2012 
// Design Name: 
// Module Name:    DrawUnit 
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
module DrawUnit(
	 input wire ACLK,
	 input wire ENB,
    input wire [7:0] TYPE,
    input wire [7:0] X_0,
    input wire [7:0] Y_0,
    input wire [7:0] X_1,
    input wire [7:0] Y_1,
    input wire [7:0] X_2,
    input wire [7:0] Y_2,
    output reg [7:0] X_OUT,
    output reg [7:0] Y_OUT,
    output reg  FINISH
    );
reg EN_DL;
reg EN_DT;
reg EN_DR;
reg EN_DC;	 
	 
wire [7:0] DL_xo,DL_yo;
wire [7:0] DT_xo,DT_yo;
wire [7:0] DR_xo,DR_yo;
wire [7:0] DC_xo,DC_yo;

	always@(posedge ACLK)
		begin
			case (TYPE[7:2])
			6'b000000:
				begin
					EN_DL <= 1;
					EN_DT <= 0;
					EN_DR <= 0;
					EN_DC <= 0;
					X_OUT <= DL_xo;
					Y_OUT <= DL_yo;
					FINISH <= DL_finished;
				end
			6'b000001:
				begin
					EN_DL = 0;
					EN_DT = 1;
					EN_DR = 0;
					EN_DC = 0;
					X_OUT <= DT_xo;
					Y_OUT <= DT_yo;
					FINISH <= DT_finished;					
				end
			6'b000010:
				begin
					EN_DL = 0;
					EN_DT = 0;
					EN_DR = 1;
					EN_DC = 0;
					X_OUT <= DR_xo;
					Y_OUT <= DR_yo;
					FINISH <= DR_finished;					
				end
			6'b000011:
				begin
					EN_DL = 0;
					EN_DT = 0;
					EN_DR = 0;
					EN_DC = 1;
					X_OUT <= DC_xo;
					Y_OUT <= DC_yo;
					FINISH <= DC_finished;					
				end
			endcase
		end

wire DL_finished;
wire DT_finished;
wire DR_finished;
wire DC_finished;
//wire DrawFinished;
//assign DrawFinished = DL_finished | DT_finished | DR_finished | DC_finished;


DrawLine     DL(.EN(EN_DL & ENB), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .X_1(X_1), .Y_1(Y_1), .X_Out(DL_xo), .Y_Out(DL_yo),.finish(DL_finished));
DrawTriangle DT(.EN(EN_DT & ENB), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .X_1(X_1), .Y_1(Y_1), .X_2(X_2), .Y_2(Y_2), .X_Out(DT_xo), .Y_Out(DT_yo), .finish(DT_finished));
DrawRec      DR(.EN(EN_DR & ENB), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .X_1(X_1), .Y_1(Y_1), .X_Out(DR_xo), .Y_Out(DR_yo),.finish(DR_finished));
DrawCircle   DC(.EN(EN_DC & ENB), .ACLK(ACLK), .X_0(X_0), .Y_0(Y_0), .R(X_1), .X_Out(DC_xo), .Y_Out(DC_yo), .finish(DC_finished));

endmodule
