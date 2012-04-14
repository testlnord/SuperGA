`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:08:35 04/01/2012 
// Design Name: 
// Module Name:    GlobalRegisters 
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
module GlobalRegisters(
// Global signals
    input wire ACLK,
    input wire ARESETn,
//Control signals
    input wire STATUS,
    input wire READING,	 
	 input wire NEXT,
	 output reg FINISH,
	 output reg FINISH_Read,

//Working data
	 
    input wire RByt0,
    output reg [7:0] X_center,
    output reg [7:0] Y_center,
    output reg [7:0] Angle,
    output reg [7:0] Zoom
    );
wire reset = ~ARESETn;
reg [2:0] ByteCounter;
reg [2:0] NextByteCounter;

reg [2:0] ObjCounter;
always@(posedge ACLK)
begin
	if (reset)
	begin
		ByteCounter = 0;
		FINISH_Read = 0;
		FINISH = 0;
	end
	else
	if (!STATUS && READING)
	begin
		if (ByteCounter ==0)
		begin
			ObjCounter = RByt0;
			NextByteCounter = ByteCounter +1;
		end
		else 
		if (ByteCounter ==1)
		begin
			X_center = RByt0;
			NextByteCounter = ByteCounter +1;
		end
		else 
		if (ByteCounter ==2)
		begin
			Y_center = RByt0;
			NextByteCounter = ByteCounter +1;
		end
		else 
		if (ByteCounter ==3)
		begin
			Angle = RByt0;
			NextByteCounter = ByteCounter +1;
		end
		else
		if (ByteCounter ==4)
		begin
			Zoom = RByt0;
			FINISH_Read = 1;
			FINISH = 0;
			NextByteCounter = ByteCounter +1;
		end		
		
	end
	else
	if(STATUS && NEXT)
	begin
		ObjCounter = ObjCounter-1;
	end;
end;

always@(ObjCounter)
begin
if (ObjCounter == 0)
FINISH = 1;
end;

always@(NextByteCounter)
begin
if (NextByteCounter == 5)
ByteCounter = 0;
else 
ByteCounter = NextByteCounter;
end

endmodule
