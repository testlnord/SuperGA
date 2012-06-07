`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:18:35 05/23/2012 
// Design Name: 
// Module Name:    tb_Rotator 
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
module tb_Rotator(
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
	 
reg clk, enb;

reg [7:0] x, y, angle;
wire [7:0] xO, yO;
wire valid;
 
 


   rotator UNT (.ACLK(clk),.ENB(enb), .Xcoord(x), .Ycoord(y),.Angle(angle),.Xout(xO),.Yout(yO), .VALID(valid));

	always begin
		#1 clk = ~clk;
	end

	initial begin
		clk = 0;
		x = 0;
		y = 0;
		enb = 0;
		angle = 0;
		
		#10 enb = 1;
		#15 x = 8'b00100000;
		#16 y = 8'b00010000;
		#20 angle = 8'b00000000;
		#25 angle = 8'b10000000;//1
		#30 angle = 8'b01000000;//0.5
		#35 angle = 8'b00100000;//0.25
		#40 angle = 8'b00010000;//0.125
		#45 angle = 8'b00001000;//0.0625
		#50 angle = 8'b00000100;//0.03125
		#55 angle = 8'b00000010;//0.015625
		#60 angle = 8'b00000001;//0.0078125
		#65 angle = 8'b11000000;//1.5
		#80 x = 8'b01000000;
		    y = 8'b01000000;
			 angle = 8'b00100000;
		#90 $finish;//stop();
	end

endmodule
