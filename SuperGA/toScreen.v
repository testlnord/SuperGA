`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:19:41 04/01/2012 
// Design Name: 
// Module Name:    toScreen 
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
module toScreen
   #(
	  parameter X_RESOL = 320,
	  parameter Y_RESOL = 200
	)
   (
// Global signals
    input wire ACLK,
	 input wire ENB,
//
    input wire [7:0] Xcoord,
    input wire [7:0] Ycoord,
	 output reg [15:0] Xout,
	 output reg [15:0] Yout,
	 output reg VALID
    );

    reg vld;
	 reg [23:0] xT, yT;

    reg [15:0] xRes, yRes;
	 reg [15:0] x_next,y_next;
    //assign VALID = vld;
	 //assign Xout = xRes;
	 //assign Yout = yRes;
	 
	 always @(posedge ACLK) 
		begin
			if (!ENB) begin
			 // Xout <= 0;
			 // Yout <= 0;
			end
			else begin
			  Xout = x_next;
			  Yout = y_next;
			end  
			VALID <= vld;
		end
				  
	always@*
		begin
			xT[23:8] = 0;
			yT[23:8] = 0;
			vld = VALID;  
			//перенесём систему координат в (-1,1) и развернём ось Y
			xT[7:0] = Xcoord + 8'b01000000;
			yT[7:0] = 8'b01000000 - Ycoord;
			if (xT[7] == 1 || yT[7] == 1) 
				begin //отрицательных координат быть не может
					 vld = 0;
					 x_next = 0;
					 y_next = 0;
				end
			else 
			begin
				xT = xT * (X_RESOL / 2);
				yT = yT * (Y_RESOL / 2);
				if (xT[23:6] >= X_RESOL || yT[23:6] >= Y_RESOL) 
				begin
					x_next = 0;
					y_next = 0;
					vld = 0;
				end
				else 
				begin
					x_next = xT[21:6];
					y_next = yT[21:6];
					vld = 1;
				end
			  
			end
		end
endmodule
