`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:40:23 05/17/2012 
// Design Name: 
// Module Name:    tb_ToScreen 
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
module tb_ToScreen(
    );

reg clk, enb;

reg [7:0] x, y;
wire [15:0] xO, yO;
wire valid;
 


   toScreen #(320,200) UNT (.ACLK(clk),.ENB(enb), .Xcoord(x), .Ycoord(y),.Xout(xO),.Yout(yO), .VALID(valid));

	always begin
		#1 clk = ~clk;
	end

	initial begin
		clk = 0;
		x = 0;
		y = 0;
		enb = 0;
		
		#10 enb = 1;
		
		#15 x = 8'b00100000;
		#20 y = 0-x;
		#25 x = 8'b01100000;
		
		#55 $finish;//stop();
	end	



endmodule
