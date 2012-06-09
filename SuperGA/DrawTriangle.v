`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:22 05/13/2012 
// Design Name: 
// Module Name:    DraeTriangle 
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
module DrawTriangle(
    input wire EN,
    input wire ACLK,
    input wire [7:0] X_0,
    input wire [7:0] Y_0,
    input wire [7:0] X_1,
    input wire [7:0] Y_1,
    input wire [7:0] X_2,
    input wire [7:0] Y_2,
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

always@(X_0, Y_0, X_1, Y_1, X_2, Y_2)
begin
	init(X_2, Y_2, X_0, Y_0);
end	 

always@(posedge ACLK)
begin
	if (EN)
	begin 
		finish = 0;
		begin
			X_Out = nX;
			Y_Out = nY;
		end
		if (finish === 0)
		begin
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
			if (nX === X_2 && nY === Y_2) 
			begin
				finish = 1;
			end
			if (nX === X_0 && nY == Y_0)
			begin
				init(X_0, Y_0, X_1, Y_1);
			end
			if (nX === X_1 && nY == Y_1)
			begin
				init(X_1, Y_1, X_2, Y_2);
			end
		end
		else
		begin
			finish = 1;
		end
	end
end

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

task init;
input [7:0] iX_0;
input [7:0] iY_0;
input [7:0] iX_1;
input [7:0] iY_1;
begin
	nX = iX_0;
	nY = iY_0;
	dX = iX_1 - iX_0;
	dY = iY_1 - iY_0;
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
	//finish = 0;
end
endtask

endmodule
