`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:49 05/13/2012 
// Design Name: 
// Module Name:    DC 
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
module DrawCircle(
    input wire EN,
    input wire ACLK,
    input wire [7:0] X_0,
    input wire [7:0] Y_0,
    input wire [7:0] R,
    output reg [7:0] X_Out,
    output reg[7:0] Y_Out,
    output reg finish
    );

reg temp;
reg [7:0] delta;
reg [7:0] error;
reg [7:0] error2;
reg [7:0] dX;
reg [7:0] dY;
reg [7:0] count;

always@(X_0, Y_0, R)
begin
	dX = 0;
	dY = R;
	delta = 2 - (R <<< 1);
	error = 0;
	finish = 0;
	count = 0;
end	 

always@(posedge ACLK)
begin : STEP
	if (EN)
	begin 
		case (count)
		0:begin
				X_Out = X_0 + dX;
				Y_Out = Y_0 + dY;
				count = count + 1;
			end
		1:begin
				X_Out = X_0 + dX;
				Y_Out = Y_0 - dY;
				count = count + 1;
			end
		2:begin
				X_Out = X_0 - dX;
				Y_Out = Y_0 + dY;
				count = count + 1;
			end
		3:begin
				X_Out = X_0 - dX;
				Y_Out = Y_0 - dY;
				count = 0;
				error = ((delta + dY) <<< 1) - 1;
				if (delta < 0 && error <= 0) 
				begin
					dX = dX + 1;
					delta = delta + (dX <<< 1) + 1;
					disable STEP;
				end
				if (delta > 0 && error > 0)
				begin
					dY = dY - 1;
					delta = delta + (1 - (dY <<< 1));
				end
				dX = dX + 1;
				delta = delta + ((dX - dY) <<< 1);
			end
		endcase
	end
end

endmodule
