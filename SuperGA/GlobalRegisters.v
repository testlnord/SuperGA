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
    input wire RESET,
//Control signals
    input wire STATUS,
    input wire READING,	 
	 input wire NEXT,
	 output reg FINISH,
	 output reg FINISH_READ,

//Working data
	 
    input wire [7:0] RByt0,
	 input wire  Valid,
    output wire [7:0] X_center,
    output wire [7:0] Y_center,
    output wire [7:0] Angle,
    output wire [7:0] Zoom
    );
	reg [7:0] Registers [4:0],count_next;
	reg [2:0] adr, adr_next;

	reg [2:0] state, state_next;
	reg we,we_next;
	localparam
		Reset = 0,
		ReadyRead = 1,
		ValidRead = 2,
		EndRead = 3,
		Wait = 4,
		Next = 5;
		
	always@(posedge RESET, posedge ACLK)
	begin
		if (RESET)
			begin
				state <= Reset;
				adr <= 0;
				we <= 0;
				Registers[0] <=0;
				Registers[1] <=0;
				Registers[2] <=0;
				Registers[3] <=0;
				Registers[4] <=0;
				
			end
		else
			begin
				state <= state_next;
				adr <= adr_next;
				if (we)
					Registers[adr] <= RByt0;
				if (state == Wait) 
					Registers[4] <= count_next;
				we <= we_next;	
				
			end
	end
	
	always@*
	begin
		state_next = state;
		count_next = Registers[4];
		adr_next = adr;
		we_next = we;
		case(state)
			Reset: 
				begin
					state_next = ValidRead;	
					FINISH = 0;
					FINISH_READ = 0;
					we_next = 0;
					adr_next = 0;
				end
			ReadyRead: 
				begin
					if (!Valid)
						state_next = ValidRead;
				end
			ValidRead: 
				begin
					if (Valid)
						begin
							we_next = 1;
							state_next = EndRead;
						end
				end
			EndRead: 
				begin
					we_next = 0;
					if (adr == 4)
						begin
							adr_next = 0;
							state_next = Wait;
							FINISH_READ = 1;
						end
					else 
						begin
							state_next = ReadyRead;
							adr_next = adr_next +1;
						end
				end
			Wait: 
				begin
					if (NEXT)
					begin
						count_next = count_next - 1;
						state_next = Next;
					end;
				end
			Next: 
				begin
					if (Registers[4]==0)
						begin
							FINISH = 1;
							state_next = Reset;
						end
					else
						begin
							state_next = Wait;
						end
				end
		endcase
	end
assign X_center = Registers[0];
assign Y_center = Registers[1];
assign Zoom = Registers[2];
assign Angle = Registers[3];
endmodule
