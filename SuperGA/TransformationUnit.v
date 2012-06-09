`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:18:36 04/01/2012 
// Design Name: 
// Module Name:    TransformationUnit 
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
module TransformationUnit(
// Global signals
    input wire ACLK,
    input wire ARESETn,
// Control signals
    input wire ENB,
// Working signals

    input wire [7:0] Xcoord,
    input wire [7:0] Ycoord,
    input wire [7:0] Xcenter,
    input wire [7:0] Ycenter,
    input wire [7:0] Zoom,
    input wire [7:0] Angle,
    output wire [15:0] xAddr,
	 output wire [15:0] yAddr, 	 
    output  wire Write
    );
	 wire [7:0] x_shifted;
	 wire [7:0] y_shifted;
	 wire shifted_V;
	 shifter m_sh (.ACLK(ACLK),.ENB(ENB), .Xcoord(Xcoord), .Ycoord(Ycoord),.Xcenter(Xcenter),.Ycenter(Ycenter),.Xout(x_shifted),.Yout(y_shifted), .VALID(shifted_V));
    wire [7:0] x_rotated;
	 wire [7:0] y_rotated;
	 wire rotated_V;
	 rotator m_rt(.ACLK(ACLK),.ENB( ENB),.Xcoord(x_shifted), .Ycoord(y_shifted),.Angle(Angle),.Xout(x_rotated),.Yout(y_rotated), .VALID(rotated_V));
	 wire [7:0] x_zoomed;
	 wire [7:0] y_zoomed;
	 wire zoomed_V;
	 zoomer m_zm(.ACLK(ACLK),.ENB(ENB),.Xcoord(x_rotated), .Ycoord(y_rotated),.Zoom(Zoom),.Xout(x_zoomed),.Yout(y_zoomed),.VALID(zoomed_V));
	 wire [15:0] x_screen;
	 wire [15:0] y_screen;
	 wire screen_V;
	 toScreen#(16,16) m_tS(.ACLK(ACLK),.ENB(ENB ),.Xcoord(x_zoomed), .Ycoord(y_zoomed),.Xout(xAddr),.Yout(yAddr),.VALID(Write));
	 //toAddr#(16) m_tA(.ACLK(ACLK),.ENB(screen_V & ENB),.Xcoord(x_screen), .Ycoord(y_screen),.Addr(Addr),.Write(Write));
	reg asf;
	always@(posedge ACLK)
	begin
	if (ENB)
		asf <= ENB;
	end
	
endmodule
