`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:28:09 05/14/2012 
// Design Name: 
// Module Name:    tb_Zoomer 
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

reg clk, enb;

reg [7:0] x, y, zoom;
wire [7:0] xO, yO;
wire valid;
 


   rotator UNT (.ACLK(clk),.ENB(enb), .Xcoord(x), .Ycoord(y),.Angle(zoom),.Xout(xO),.Yout(yO), .VALID(valid));

	always begin
		#1 clk = ~clk;
	end

	initial begin
		clk = 0;
		x = 0;
		y = 0;
		enb = 0;
		zoom = 0;
		
		#10 enb = 1;
		#15 x = 8'b01000000;
		#16 y = 0;
		#20 zoom = 8'b10000000;
		#25 zoom = 8'b01000000;
		#30 zoom = 8'b11000000;
		#35 zoom = 8'b11001001;
		#60 $finish;//stop();
	end	

endmodule
