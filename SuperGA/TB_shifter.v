`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:22:48 05/13/2012 
// Design Name: 
// Module Name:    TB_shifter 
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
module TB_shifter(
    );

reg clk, enb;

reg [7:0] x, y, xC, yC;
wire [7:0] xO, yO;
wire valid;
 


   shifter UNT (.ACLK(clk),.ENB(enb), .Xcoord(x), .Ycoord(y),.Xcenter(xC),.Ycenter(yC),.Xout(xO),.Yout(yO), .VALID(valid));

	always begin
		#1 clk = ~clk;
	end

	initial begin
		clk = 0;
		x = 0;
		y = 0;
		enb = 1;
		xC = 8'b00100000;
		yC = 0;
		
		#40 $finish;//stop();
	end	
endmodule
