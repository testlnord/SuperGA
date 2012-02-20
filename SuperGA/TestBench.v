`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:43:58 02/20/2012 
// Design Name: 
// Module Name:    TestBench 
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
module TestBench(
    );
reg [3:0] a;
reg [3:0] b;
wire [4:0] c;
reg clk;

HelloWord UNT(a,b,c,clk);

	always begin
		#1 clk = ~clk;
	end

	initial begin
		clk = 0;
		a =0;
		b =0;
		//c = 0;
		#10 a= 5;
		#12 b =4;
		#15 a = 4;
		#4 $finish;//stop();
	end	
endmodule
