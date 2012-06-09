`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:16:29 04/01/2012 
// Design Name: 
// Module Name:    zoomer 
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
module zoomer(
// Global signals
    input wire ACLK,
	 input wire ENB,
//
    input wire [7:0] Xcoord,
    input wire [7:0] Ycoord,
    input wire [7:0] Zoom,
	 output reg [7:0] Xout,
	 output reg [7:0] Yout,
	 output reg VALID
    );

    reg [10:0] x, y;
	 reg vld;
	 //reg [7:0] xRes, yRes;
	 //reg xS, yS, vld;

    always @(posedge ACLK) begin
	   if(ENB) begin
		  Xout <= x[7:0];
		  Yout <= y[7:0];
		  VALID <= vld;
		end
		
	 end

    always@* begin
		x[10:8] = 0;
		y[10:8] = 0;
		if(Xcoord[7])
		  x[7:0] = 0-Xcoord;
		else
		  x[7:0] = Xcoord;
		
		if(Ycoord[7])
		  y[7:0] = 0-Ycoord;
		else
		  y[7:0] = Ycoord;
		x = x * Zoom;
		y = y * Zoom;
		if(x[10:7] > 0 || y[10:7] > 0) begin
		  vld = 0;
		end
		else begin
		  if(Xcoord[7])
		    x[7:0] = 0-x[7:0];
		  if(Ycoord[7])
		    y[7:0] = 0-y[7:0];
		  vld = 1;
		end
	 end

endmodule
