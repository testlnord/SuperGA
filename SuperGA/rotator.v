`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:15:43 04/01/2012 
// Design Name: 
// Module Name:    rotator 
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
module rotator(
// Global signals
    input wire ACLK,
	 input wire ENB,
//
    input wire [7:0] Xcoord,
    input wire [7:0] Ycoord,
    input wire [7:0] Angle,
	 output reg [7:0] Xout,
	 output reg [7:0] Yout,
	 output reg VALID
    );

    function [7:0] multiply;
	   input [7:0] a,b;
		reg [15:0] tmp;
		reg [7:0] res;
		reg sign;
	   begin
		  sign = a[0];
		  if(sign) begin
		    a = 0 - a;
		  end;
		  tmp = a * b;
		  res = tmp[14:7];
  		  if(sign) begin
		    res = 0 - res;
		  end;
	     multiply = res;
	   end;
	 endfunction;

    reg vld, s;
	 reg[7:0] xRes, yRes, xO, yO, tmp;
	 
	 reg[7:0] sin, cos;
	 
	 
	 assign Xout = xO;
	 assign Yout = yO;
	 assign VALID = vld;
	 
	 always @(posedge ACLK) begin
	   if(!ENB) begin
		  xO <= 0;
		  yO <= 0;
		  vld <= 0;
		end
		else begin
		
		xRes = Xcoord;
		yRes = Ycoord;
		
		if(Angle[7]) begin
		  sin = 8'b01101011; // 1 rad
		  cos = 8'b01000101;
		  tmp = xRes;
		  xRes = multiply(xRes, cos) - multiply(yRes, sin);
		  yRes = multiply(tmp, sin) + multiply(yRes, cos);
		end;
		if(Angle[6]) begin //b0.1 rad (0.5)
		  sin = 8'b00111101;
		  cos = 8'b01110000;
		  tmp = xRes;
		  xRes = multiply(xRes, cos) - multiply(yRes, sin);
		  yRes = multiply(tmp, sin) + multiply(yRes, cos);
		end;
		if(Angle[5]) begin //b0.01 rad (0.25)
		  sin = 8'b00011111;
		  cos = 8'b01111100;
		  tmp = xRes;
		  xRes = multiply(xRes, cos) - multiply(yRes, sin);
		  yRes = multiply(tmp, sin) + multiply(yRes, cos);
		end;
		if(Angle[4]) begin //b0.001 rad (0.125)
		  sin = 8'b00001111;
		  cos = 8'b01111110;
		  tmp = xRes;
		  xRes = multiply(xRes, cos) - multiply(yRes, sin);
		  yRes = multiply(tmp, sin) + multiply(yRes, cos);
		end;
		if(Angle[3]) begin //b0.0001 rad (0.0625)
		  sin = 8'b00001000;
		  cos = 8'b01111111;
		  tmp = xRes;
		  xRes = multiply(xRes, cos) - multiply(yRes, sin);
		  yRes = multiply(tmp, sin) + multiply(yRes, cos);
		end;
		if(Angle[2]) begin //b0.000001 rad (0.03125)
		  sin = 8'b00000011;
		  cos = 8'b01111111;
		  tmp = xRes;
		  xRes = multiply(xRes, cos) - multiply(yRes, sin);
		  yRes = multiply(tmp, sin) + multiply(yRes, cos);
		end;
		if(Angle[1]) begin //b0.00001 rad (0.015625)
		  sin = 8'b00000001;
		  cos = 8'b01111111;
		  tmp = xRes;
		  xRes = multiply(xRes, cos) - multiply(yRes, sin);
		  yRes = multiply(tmp, sin) + multiply(yRes, cos);
		end;
		if(Angle[0]) begin //b0.00001 rad (0.015625)
		  sin = 8'b00000001;
		  cos = 8'b01111111;
		  tmp = xRes;
		  xRes = multiply(xRes, cos) - multiply(yRes, sin);
		  yRes = multiply(tmp, sin) + multiply(yRes, cos);
		end;
		s = xRes[7];
		if(s) begin
		  xRes = 0 - xRes;
		end;
		if(xRes > 8'b01000000) begin
		  vld = 0;
		end
		else begin
		  vld = 1;
		end;
		if(s) begin
		  xRes = 0 - xRes;
		end;
		s = yRes[7];
		if(s) begin
		  yRes = 0 - yRes;
		end;
		if(vld) begin
		  if(yRes > 8'b01000000) begin
		    vld = 0;
		  end;
		end;
		xO <= xRes;
		yO <= yRes;
		
		end
	 end;

endmodule
