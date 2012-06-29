`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:50:12 06/22/2012 
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
reg clk;
reg rst;
always #1 clk = ~clk;	 
wire [7:0]led;
reg [2:0]sel;
tb_Accelerator tb(clk, rst, led, sel);
initial 
	begin
		sel = 0;
		clk = 0;
		rst =0;
		#1 rst=1;
	end
	
always@(posedge clk)
	begin
		sel = (sel==7)?0:sel+1;
	end
endmodule
