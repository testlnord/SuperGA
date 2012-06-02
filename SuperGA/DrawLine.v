`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:20:39 04/04/2012 
// Design Name: 
// Module Name:    DrawLine 
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
module DrawLine(
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

reg temp;
reg [7:0] dX;
reg [7:0] dY;
reg [7:0] sX;
reg [7:0] sY;
reg [7:0] error;
reg [7:0] error2;
reg [7:0] nX;
reg [7:0] nY;
reg [7:0] pdX;
reg [7:0] pdY;

function [7:0] abs;
input [7:0] num;
if (num[7])
begin
	abs = (num ^ 8'b1111_1111) + 8'b0000_0001;
end
else
begin
	abs = num;
end
endfunction



always@(X_0, Y_0, X_1, Y_1)
begin
	nX = X_0;
	nY = Y_0;
	dX = X_1 - X_0;
	dY = Y_1 - Y_0;
	sX = (dX[7] === 1) ? -8'd1 : ((dX === 0) ? 0 : 8'd1);
	sY = (dY[7] === 1) ? -8'd1 : ((dY === 0) ? 0 : 8'd1);
	dX = abs(dX);
	dY = abs(dY);
	if (dX > dY) 
	begin
			pdX = sX;
			pdY = 0;
			temp = dX;
			dX = dY;
			dY = temp;
	end
	else
	begin
		pdX = 0;
		pdY = sY;
	end
	error = dY >>> 1;
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
		if (nX !== X_1 || nY !== Y_1) 
		begin
		//error2 = error <<< 1;
			error = error - dX;
			if (error[7] === 1) 
			begin
				error = error + dY;
				nX = nX + sX;
				nY = nY + sY;
			end
			else
			begin
				nX = nX + pdX;
				nY = nY + pdY;
			end
		end
		else
		begin
			finish = 1;
		end
	end
end

endmodule

