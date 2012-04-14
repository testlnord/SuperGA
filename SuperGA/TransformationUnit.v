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
    output wire [7:0] Addr,
    output  wire Write
    );
	 wire [7:0] x_shifted;
	 wire [7:0] y_shifted;
	 shifter m_sh (.ACLK(ACLK),.Xcoord(Xcoord), .Ycoord(Ycoord),.Xcenter(Xcenter),.Ycenter(Ycenter),.Xout(x_shifted),.Yout(y_shifted));
    wire [7:0] x_rotated;
	 wire [7:0] y_rotated;
	 rotator m_rt(.ACLK(ACLK),.Xcoord(x_shifted), .Ycoord(y_shifted),.Angle(Angle),.Xout(x_rotated),.Yout(rotated));
	 wire [7:0] x_zoomed;
	 wire [7:0] y_zoomed;
	 zoomer m_zm(.ACLK(ACLK),.Xcoord(x_rotated), .Ycoord(y_rotated),.Zoom(Zoom),.Xout(x_zoomed),.Yout(y_zoomed));
	 wire [7:0] x_screen;
	 wire [7:0] y_screen;
	 toScreen m_tS(.ACLK(ACLK),.Xcoord(x_zoomed), .Ycoord(y_zoomed),.Xout(x_screen),.Yout(y_screen));
	 toAddr m_tA(.ACLK(ACLK),.Xcoord(x_screen), .Ycoord(y_screen),.Addr(Addr),.Write(Write));
endmodule
