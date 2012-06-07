`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:23:45 05/13/2012 
// Design Name: 
// Module Name:    DrawRec 
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
module DrawRec(
    input wire EN,
    input wire ACLK,
    input wire [7:0] X_0,
    input wire [7:0] Y_0,
    input wire [7:0] X_1,
    input wire [7:0] Y_1,
    output reg [7:0] X_Out,
    output reg [7:0] Y_Out,
    output reg finish
    );

reg [7:0] sX;
reg [7:0] sY;
reg [7:0] nX;
reg [7:0] nY;

always@(X_0, Y_0, X_1, Y_1)
begin
	nX = X_0;
	nY = Y_0;
	sX = (X_0 < X_1) ? 8'd1 : -8'd1;
	sY = 0;
	finish = 0;
end	 

always@(posedge ACLK)
begin
	if (EN)
	begin 
		fork
			X_Out = nX;
			Y_Out = nY;
		join
		if (!finish) 
		begin
			nX = nX + sX;
			nY = nY + sY;
			if (nX === X_1 && nY === Y_0)
			begin 
				sX = 0; 
				sY = (Y_0 < Y_1) ? 8'd1 : -8'd1; 
			end
			if (nX === X_1 && nY === Y_1)
			begin
				sX = (X_0 < X_1) ? -8'd1 : 8'd1;
				sY = 0; 
			end
			if (nX === X_0 && nY === Y_1)
			begin
				sX = 0;
				sY = (Y_0 < Y_1) ? -8'd1 : 8'd1;
			end
			if (nX === X_0 && nY === Y_0)
			begin
				sX = 0;
				sY = 0;
				finish = 1;
			end
		end
	end
end

endmodule
