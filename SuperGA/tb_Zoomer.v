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
module tb_Zoomer(
    );

reg clk, enb;

reg [7:0] x, y, zoom;
wire [7:0] xO, yO;
wire valid;
 


   zoomer UNT (.ACLK(clk),.ENB(enb), .Xcoord(x), .Ycoord(y),.Zoom(zoom),.Xout(xO),.Yout(yO), .VALID(valid));

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
		#15 x = 8'b00010000;
		#16 y = 0-x;
		//#17 x = 0;
		#20 zoom = 1;
		#25 zoom = 2;
		#30 zoom = 4;
		#35 zoom = 7;
		#40 zoom = 8;
		#45 zoom = 10;
		#50 zoom = 0;
		#55 $finish;//stop();
	end	

endmodule
