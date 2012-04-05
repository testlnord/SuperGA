`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:13 04/01/2012 
// Design Name: 
// Module Name:    Accelerator 
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
module Accelerator(
// Global signals
    input wire ACLK,
    input wire ARESETn,
/////////////////////////////////
//// SLAVE INPUT
/////////////////////////////////	
// Write address channel signals
    input wire [ADDR_WIDTH-1:0] AWADDR,
    input wire [2:0] AWPROT,
    input wire AWVALID,
    
    output reg AWREADY,
    
// Write data channel
    input wire [DATA_WIDTH-1:0] WDATA,
    input wire [DATA_WIDTH/8 - 1 :0] WSTRB,
    input wire WVALID,
    
    output reg WREADY,
// Write response channel signals	 
    input wire BREADY,
    
    output reg [1:0] BRESP,
    output reg BVALID,
////////////////////////////////////
////MASTER OUTPUT
////////////////////////////////////    	 
// Write address channel signals
    input wire AWREADY,

    output reg [ADDR_WIDTH-1:0] AWADDR,
    output reg [2:0] AWPROT,
    output reg AWVALID,
    
// Write data channel
    input wire WREADY,
    
    output reg [DATA_WIDTH-1:0] WDATA,
    output reg [DATA_WIDTH/8 - 1 :0] WSTRB,
    output reg WVALID,
    
// Write response channel signals
    input wire [1:0] BRESP,
    input wire BVALID,
    
    output reg BREADY,
////////////////////////////////
///ITTERRUPT
////////////////////////////////
    output wire Interrupt
    );
// MAIN STATE REGISTERS-FLAGS	 
reg READING;
reg STATUS;
reg WRITING;
//WIRES
wire GR_finished;
wire X_center;
wire Y_center;
wire Angle;
wire Zoom;

wire RU_finished_read;
wire RU_finished;
wire X_out;
wire Y_out;

wire ENB_trasform;
wire Write;
//MODULES
GlobalRegisters GR(.ACLK(ACLK),.ARESETn(ARESETn),.STATUS(STATUS),.READING(READING),
	.FINISH(GR_finished),.RByt0(WDATA),.X_center(X_center),.Y_center(Y_center),.Angle(Angle),.Zoom(Zoom));
RenderUnit RU(.ACLK(ACLK),.ARESETn(ARESETn),.READING(READING),.STATUS(STATUS),
	.FinishRead(RU_finished_read),.FinishWrite(RU_finished),.RByte(WDATA),.Xcoord(X_out),.Ycoord(Y_out));
TransformationUnit TU(.ACLK(ACLK),.ARESETn(ARESETn),.ENB(ENB_transform),.Xcoord(X_out),.Ycoord(Y_out),
	.Xcenter(X_center),.Ycenter(Y_center),.Zoom(Zoom),.Angle(Angle),.Addr(Addr),.Write(Write));
endmodule
