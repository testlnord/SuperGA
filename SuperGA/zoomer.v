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
	 output wire [7:0] Xout,
	 output wire [7:0] Yout,
	 output wire VALID
    );

    reg [10:0] x, y;
	 reg [7:0] xRes, yRes;
	 reg xS, yS, vld;

    assign Xout = xRes;
	 assign Yout = yRes;
	 assign VALID = vld;

    always @(posedge ACLK) begin
	   if (!ENB) begin
		  vld <= ENB;
		  //xRes <= Xcoord;
		  //yRes <= Ycoord;
		end
		else begin
		  xS = Xcoord[7];
		  
		  if (xS) begin
		    x[7:0] = 0 - Xcoord;
		  end
		  else begin
		    x[7:0] = Xcoord;
		  end
		  x[10:8] = 0;
		  x = x * Zoom;
		  
		  
		  yS = Ycoord[7];
		  
		  if (yS) begin
		    y[7:0] = 0 - Ycoord;
		  end
		  else begin
		    y[7:0] = Ycoord;
		  end
		  y[10:8] = 0;
		  y = y * Zoom;
		  
		  if (x[10:7] > 0 || y[10:7] > 0) begin
		    vld <= 0;
			 xRes <= 0;
			 yRes <= 0;
		  end
		  else begin
		    vld <= 1;
			 if(xS) begin
			   xRes <= 0 - x[7:0];
			 end
			 else begin
			   xRes <= x[7:0];
			 end
			 if(yS) begin
			   yRes <= 0 - y[7:0];
			 end
			 else begin
			   yRes <= y[7:0];
			 end
		  end
		end
	 end
endmodule
