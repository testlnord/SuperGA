`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:45 04/01/2012 
// Design Name: 
// Module Name:    RenderUnit 
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
module RenderUnit(
// Global signals
    input wire ACLK,
    input wire RESET,
//Control signals
	 input wire ENB,
    
	 input wire STATUS,
	 output reg FinishRead,
	 output reg FinishWrite,
//Data signals
    input wire [7:0] RByte,
	 input wire VALID,
    output wire [7:0] Xcoord,
    output wire [7:0] Ycoord
    );
	reg [2:0] state, state_next;
	
	reg [7:0] Registers[6:0];
	wire [7:0] first_reg = Registers[0];
	reg [2:0] adr,adr_next;
	reg we, we_next;//,FinishRead_next,FinishWrite_next;
	initial
		begin
			adr = 0;
			adr_next = 0;
			Registers[0] = 0;
			Registers[1] = 0;
			Registers[2] = 0;
			Registers[3] = 0;
			Registers[4] = 0;
			Registers[5] = 0;
			Registers[6] = 0;
		end
	wire Finish;
	localparam
		Reset = 0,
		ReadyRead = 1,
		ValidRead = 2,
		EndRead = 3,
		Compute = 4;
		
	always@(posedge ACLK, posedge RESET)
		begin
			if (RESET)
				begin
					adr <= 0;
					state <= Reset;
					//FinishRead <=0;
					//FinishWrite <=0;
				end
			else
				begin
					we <= we_next;
					state <= state_next;
					adr <= adr_next;
					//FinishRead <= FinishRead_next;
					//FinishWrite <= FinishWrite_next;
					if (we)
						Registers[adr] <= RByte;
				end
		end
	always @*
		begin
			state_next = state;
			we_next = we;
			adr_next = adr;

			case (state)
				Reset:
					begin
						if (STATUS)
							begin
								state_next = ValidRead;
								we_next = 0;
								adr_next = 0;
								FinishRead = 0;
								//FinishWrite = 0;
							end
					end
				ReadyRead:
					begin
						if (!VALID)
							state_next = ValidRead;
					end
				ValidRead:
					begin
						FinishWrite = 0;
						if (VALID)
							begin
								we_next = 1;
								state_next = EndRead;
							end
					end
				EndRead:
					begin
						we_next = 0;
						if (adr == {first_reg[1:0],1'b1} && first_reg!=0)
							begin
								adr_next = 0;
								state_next = Compute;
								FinishRead = 1;
							end
						else 
							begin
								state_next = ReadyRead;
								adr_next = adr_next +1;
							end
					end
				Compute:
					begin
						if (Finish)
							begin
								FinishWrite = 1;
								state_next = Reset;
								
							end
					end
			endcase
		end
		
	DrawUnit DU(ACLK,(ENB && state == Compute ), Registers[0], Registers[1], Registers[2], Registers[3], 
					Registers[4], Registers[5], Registers[6],Xcoord,Ycoord,Finish);	
endmodule
