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
    //input wire STATUS,
    //input wire READING,	 
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
	reg [7:0] Registers_1 [4:0];
	reg [7:0] count_next;
	reg [2:0] adr, adr_next;
	wire [7:0] lastreg = Registers_1[4];
	//wire [7:0] curreg = Registers_1[adr];
	reg [2:0] state, state_next;
	reg we,we_next;
	

	//reg FINISH_next;
	
	localparam
		
		Reset = 0,
		ReadyRead = 1,
		ValidRead = 2,
		EndRead = 3,
		Wait = 4,
		Next = 5;
	
	initial FINISH = 0;
	
	always @(posedge RESET, posedge ACLK)
	begin
		if (RESET)
			begin
				state <= Reset;
				adr <= 0;
				we <= 0;
				Registers_1[0] <=0;
				Registers_1[1] <=0;
				Registers_1[2] <=0;
				Registers_1[3] <=0;
				Registers_1[4] <=0;

			end
		else
			begin
				state <= state_next;
				adr <= adr_next;
				if (we)
					case (adr)
						3'b000: Registers_1[0] <= RByt0;
						3'b001: Registers_1[1] <= RByt0;
						3'b010: Registers_1[2] <= RByt0;
						3'b011: Registers_1[3] <= RByt0;
						//default: Registers_1[3] <= RByt0;
					endcase
				if (state == Wait) 
					Registers_1[4] <= count_next;
				we <= we_next;	
				//FINISH <= FINISH_next;
			end
	end

	always @*
	begin
		if (RESET) FINISH = 0;
		state_next = state;
		count_next = lastreg;
		adr_next = adr;
		we_next = we;
		//FINISH_next = FINISH;
		case(state)
			Reset: 
				begin
					state_next = ValidRead;	
					//FINISH = 0;
					FINISH_READ = 0;
					we_next = 0;
					adr_next = 0;
				end
			ReadyRead: 
				begin
					//FINISH = 0;
					FINISH_READ = 0;
					if (!Valid)
						state_next = ValidRead;
				end
			ValidRead: 
				begin
					//FINISH = 0;
					FINISH_READ = 0;
					if (Valid)
						begin
							we_next = 1;
							state_next = EndRead;
						end
				end
			EndRead: 
				begin
					//FINISH = 0;
					//FINISH_READ = 0;
					we_next = 0;
					if (adr == 4)
						begin
							adr_next = 0;
							state_next = Wait;
							FINISH_READ = 1;
						end
					else 
						begin
						   FINISH_READ = 0;
							state_next = ReadyRead;
							adr_next = adr_next +1;
						end
				end
			Wait: 
				begin
					//FINISH = 0;
					FINISH_READ = 1;
					if (NEXT)
					begin
						count_next = (count_next==0)?0:count_next - 1;
						state_next = Next;
					end
				end
			Next: 
				begin
					FINISH_READ = 1;
					if (lastreg==0)
						begin
							FINISH = 1;
							state_next = Reset;
						end
					else
						begin
						   FINISH = 0;
							state_next = Wait;
						end
				end
		endcase

	end
assign X_center = Registers_1[0];
assign Y_center = Registers_1[1];
assign Zoom = Registers_1[2];
assign Angle = Registers_1[3];
endmodule
