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
reg [7:0] cX_0;
reg [7:0] cY_0;
reg [7:0] cX_1;
reg [7:0] cY_1;
reg [7:0] dX;
reg [7:0] dY;
reg [7:0] sX;
reg [7:0] sY;
reg [7:0] error;
//reg [7:0] error2;
reg [7:0] nX;
reg [7:0] nY;
reg [7:0] pdX;
reg [7:0] pdY;
	initial
		begin
		 cX_0=0;
		 cY_0=0;
		 cX_1=0;
		 cY_1=0;
		 dX=0;
		 dY=0;
		 sX=0;
		 sY=0;
		 error=0;
		 //error2=0;
		 nX=0;
		 nY=0;
		 pdX=0;
		 pdY=0;		
		 temp = 0;
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


always@(posedge ACLK)
begin
	if (cX_1 != X_1 || cX_0 != X_0 || cY_1 != Y_1 || cY_0 != Y_0)
	begin
		cX_1 = X_1;
		cY_1 = Y_1;
		cX_0 = X_0;
		cY_0 = Y_0;
	
		nX = X_0;
		nY = Y_0;
		dX = X_1 - X_0;
		dY = Y_1 - Y_0;
		sX = (dX[7] == 1) ? -8'd1 : ((dX == 0) ? 0 : 8'd1);
		sY = (dY[7] == 1) ? -8'd1 : ((dY == 0) ? 0 : 8'd1);
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
	end
	if (EN)
	begin 
		begin
			X_Out = nX;
			Y_Out = nY;
		end
		if (nX != X_1 || nY != Y_1) 
		begin
			error = error - dX;
			if (error[7] == 1) 
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
			finish = 0;//next_finish;
		end
		else
		begin
			finish = 1;
		end
	end
end

endmodule

