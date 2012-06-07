`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:30:02 05/18/2012 
// Design Name: 
// Module Name:    tb_tb 
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
module tb_tb(

    );
tb_Accelerator tb(clk,reset,dbg);
wire dbg;
	reg clk;
	reg reset;
	initial 
		begin
			reset = 0;
			clk = 0;
			#5 reset = 1;
		end;
	always
		#1 clk = ~clk;
endmodule
