`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:27:10 06/09/2012
// Design Name:   vga
// Module Name:   C:/vga/myvga/test.v
// Project Name:  myvga
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vga
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg reset;
	reg test;
	reg sel;
	reg [3:0] sw;

	// Outputs
	wire vsync;
	wire hsync;
	wire led0;
	wire led1;
	wire led2;
	wire led3;
	wire led4;
	wire [3:0] r;
	wire [3:0] g;
	wire [3:0] b;

	// Instantiate the Unit Under Test (UUT)
	vga uut (
		.clk(clk), 
		.reset(reset), 
		.test(test), 
		.sel(sel), 
		.sw(sw), 
		.vsync(vsync), 
		.hsync(hsync), 
		.led0(led0), 
		.led1(led1), 
		.led2(led2), 
		.led3(led3), 
		.led4(led4), 
		.r(r), 
		.g(g), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		test=1;
		#20 reset = 0;
	end
	
	always #20
	begin 
		clk=~clk;
	end
	
	
	//always@(posedge clk)
	//begin
		//if(reset) reset=0;	
	//end
	
      
endmodule

