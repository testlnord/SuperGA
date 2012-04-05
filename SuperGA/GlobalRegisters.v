`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:08:35 04/01/2012 
// Design Name: 
// Module Name:    GlobalRegisters 
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
module GlobalRegisters(
// Global signals
    input wire ACLK,
    input wire ARESETn,
//Control signals
    input wire STATUS,
    input wire READING,	 
	 
	 output wire FINISH,
//Working data	 
    input wire RByt0,
    output reg [7:0] X_center,
    output reg [7:0] Y_center,
    output reg [7:0] Angle,
    output reg [7:0] Zoom
    );
reg [2:0] ByteCounter;

endmodule
