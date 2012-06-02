`timescale 1ns / 1ps

`include "global.inc"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:13 04/01/2012 
// Design Name: 
// Module Name:    Accelerator 
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
///////////////////////////////////////////////////////////////////////////////////
module Accelerator
#(
    parameter
        ADDR_WIDTH = 32,
        DATA_WIDTH = 32
)
(
//temp debug
output wire[2:0] x,y,
// Global signals
    input wire ACLK,
    input wire ARESETn,
/////////////////////////////////
//// SLAVE INPUT (slave write)
/////////////////////////////////	
// Write address channel signals
    input wire [ADDR_WIDTH-1:0] iAWADDR,
    input wire [2:0] iAWPROT,
    input wire iAWVALID,

    output reg iAWREADY,    
// Write data channel
    input wire [DATA_WIDTH-1:0] iWDATA,
    input wire [DATA_WIDTH/8 - 1 :0] iWSTRB,
    input wire iWVALID,
 
    output reg iWREADY,
// Write response channel signals	 
    input wire iBREADY,
    
    output reg [1:0] iBRESP,
    output reg iBVALID,
////////////////////////////////////
////MASTER OUTPUT
////////////////////////////////////    	 
// Write address channel signals
    input wire oAWREADY,

    output reg [ADDR_WIDTH-1:0] oAWADDR,
    output reg [2:0] oAWPROT,
    output reg oAWVALID,
// Write data channel
    input wire oWREADY,
    
    output reg [DATA_WIDTH-1:0] oWDATA,
    output reg [DATA_WIDTH/8 - 1 :0] oWSTRB,
    output reg oWVALID,
// Write response channel signals
    input wire [1:0] oBRESP,
    input wire oBVALID,
    
    output reg oBREADY,
////////////////////////////////
///ITTERRUPT
////////////////////////////////
    output reg RenderEndInterrupt
    );
wire reset = ~ARESETn;
reg [7:0] ctrl_mem[0:64];
reg [7:0] ctrl_addr,next_ctrl_addr, ctrl;
// InputSlave FSM
    reg iAWREADY_next, iWREADY_next;
    reg [1:0] iBRESP_next;
    reg iBVALID_next;
   
    reg [1:0] iwstate, iwstate_next;
    
// WriteMASTEROutput FSM

    reg [ADDR_WIDTH-1:0] oAWADDR_next;
    reg [2:0] oAWPROT_next;
    reg [DATA_WIDTH-1:0] oWDATA_next;
    reg [DATA_WIDTH/8 - 1 :0] oWSTRB_next;
    reg oWVALID_next, oBREADY_next, oAWVALID_next;
 
//assign oWDATA = ~(0);
//assign oAWADDR = 5;
//assign oAWVALID = 1;
 
    reg [1:0] owstate, owstate_next;

// MAIN STATE REGISTERS-FLAGS	 
	reg READING;
	reg STATUS;
	reg WRITING;
	reg GR_READ;
//WIRES
	wire GR_finished;
	wire GR_finished_read;
	wire[7:0] X_center;
	wire[7:0] Y_center;
	wire[7:0] Angle;
	wire[7:0] Zoom;

	wire RU_finished_read;
	wire RU_finished;
	wire [7:0] X_out;
	wire [7:0]Y_out;

	//wire ENB_render;
	//assign ENB_render = STATUS & ~(WRITING);
	//wire ENB_transform; 
	//assign ENB_transform= ENB_render & RU_finished_read;
	reg ENB_render, ENB_render_next;
	reg ENB_transform, ENB_transform_next;
	wire Write;
	wire [7:0] Addr;
//MODULES
	GlobalRegisters GR(.ACLK(ACLK),.ARESETn(ARESETn),.NEXT(RU_finished),.FINISH_Read(GR_finished_read),.STATUS(STATUS),.READING(READING),
		.FINISH(GR_finished),.RByt0(ctrl),.X_center(X_center),.Y_center(Y_center),.Angle(Angle),.Zoom(Zoom));
	RenderUnit RU(.ACLK(ACLK),.ARESETn(ARESETn),.ENB(ENB_render),.READING(READING),.STATUS(STATUS),
		.FinishRead(RU_finished_read),.FinishWrite(RU_finished),.RByte(ctrl),.Xcoord(X_out),.Ycoord(Y_out));
	TransformationUnit TU(.ACLK(ACLK),.ARESETn(ARESETn),.ENB(ENB_transform),.Xcoord(X_out),.Ycoord(Y_out),
		.Xcenter(X_center),.Ycenter(Y_center),.Zoom(Zoom),.Angle(Angle),.Addr(Addr),.Write(Write));

//logic FSM
	reg next_reading;
	reg next_status;
	reg next_writing;	
	reg [3:0] lstate, lstate_next;

    localparam
	 //inp-interface states
        iRESET = 0,
        iREADY = 1,
        iVALID = 2,
        iRESP = 3,
	 //outp-interface states
        oRESET = 0,
        oVALID = 1,
        oREADY = 2,
        oRESP = 3,
	 //logic states
		  lRESET = 0,
		  lREADGR = 1,
		  lREADRU = 2,
		  lCOMPUTE = 3,
		  lWRITE = 4;

    always@(posedge reset, posedge ACLK)
        if(reset)
            begin
					ctrl_mem[0] = -10;
					ctrl_mem[1] = 0;
					ctrl_mem[2] = 1;
					ctrl_mem[3] = 1;
					ctrl_mem[4] = 1;
					ctrl_mem[5] = 10;
					ctrl_mem[6] = 200;
					ctrl_mem[7] = 200;
					ctrl_mem[8] = 0;
					ctrl_mem[9] = 0;
					ctrl_addr <= 0;
					//i-face reset
                iBVALID <= 0;
                iwstate <= iRESET;
					//o-face reset
                oAWVALID <= 0;
                oWVALID <= 1;
                oAWADDR <= -1;
                owstate <= oRESET;
					//logic module reset
					 READING <=1'b1;
					 STATUS <=1'b0;
		          WRITING <=1'b0;
					 RenderEndInterrupt <= 1'b0;
					 lstate <= lRESET;
					 ENB_transform <=0;
					 ENB_render <= 0;
            end
        else
            begin
					//i-face clk
                iAWREADY <= iAWREADY_next;
                iWREADY  <= iWREADY_next;
                iBRESP   <= iBRESP_next;
                iBVALID  <= iBVALID_next;
                iwstate  <= iwstate_next;
					//o-face clk
					 oAWADDR  <= Addr;//oAWADDR_next;
                oAWPROT  <= oAWPROT_next;
                oAWVALID <= oAWVALID_next;
                oWDATA   <= oWDATA_next;
                oWSTRB   <= oWSTRB_next;
                oWVALID  <= oWVALID_next;
                oBREADY  <= oBREADY_next;
                owstate  <= owstate_next;
					//logic module clk
					 ctrl_addr <= next_ctrl_addr;
					 
					 READING <= next_reading;
		          STATUS <= next_status;
		          WRITING <= next_writing;
					 lstate <= lstate_next;
					 ENB_render <= ENB_render_next;
					 ENB_transform <= ENB_transform_next;
					 
            end
////////////////////
//INPUT(slave write)
////////////////////            
     always@*
        begin
            iAWREADY_next = iAWREADY;
            iWREADY_next = iWREADY;
            iBRESP_next = iBRESP;
            iBVALID_next = iBVALID;
            
            iwstate_next = iwstate;
            
            case(iwstate)
                iRESET: iwstate_next = iREADY;
                iREADY:
                    begin
                        iAWREADY_next = 1;
                        iWREADY_next = READING;
                        iwstate_next = iVALID;
                    end
                iVALID:if(iAWVALID & iWVALID)
                    begin
                        if(iAWADDR !== 1 )
                            iBRESP_next = `RESP_SLVERR;
                        else
                            begin
                                //mem[iAWADDR] = iWDATA;
                                iBRESP_next = `RESP_OKAY;
                            end
                             
                        iBVALID_next = 1;
                        iAWREADY_next = 0;
                        iWREADY_next = 0;
                          
                        iwstate_next = iRESP;
                    end
                iRESP: if(iBREADY)
                    begin
                        iBVALID_next = 0;
                        iwstate_next = iREADY;
                    end
            endcase
        end
	 
////////////////////
///OUTPUT
////////////////////	 
   
    always@*
        begin
            oAWADDR_next = Addr;
            oAWPROT_next = oAWPROT;
            oAWVALID_next = oAWVALID;
                
            oWDATA_next = oWDATA;
            oWSTRB_next = oWSTRB;
            oWVALID_next = oWVALID;
    
            oBREADY_next = oBREADY;
            
            owstate_next = owstate;
            
            case(owstate)
                oRESET: owstate_next = oVALID;
                oVALID: begin
                        oAWVALID_next = WRITING;
                        oAWADDR_next = Addr;//(oAWADDR == MEM_LEN)? 0: oAWADDR + 1;
                        oAWPROT_next = 3'b010;                  
                        oWVALID_next = 1;
                        oWDATA_next = 8'b11111111;
                        // all data accesses use the  full width of the data bus
                        oWSTRB_next = {(DATA_WIDTH/8){1'b1}}; 
                        oBREADY_next = 1;
								if (WRITING)
                        owstate_next = oREADY;
                    end
                oREADY: if(oAWREADY & oWREADY)
                    begin
                        oWVALID_next = 1;
                        oAWVALID_next = 0;
                        owstate_next = oRESP;
                    end             
                oRESP: if(oBVALID)
                    begin
                        // обрабатываем ответ 
								//next_writing = 1'b0;
                        oBREADY_next = 0;
                        owstate_next = oVALID;
                    end
            endcase
        end

////////////////////////
//LOGIC
////////////////////////	 
	always@*
		begin
			ctrl = ctrl_mem[ctrl_addr];
			next_ctrl_addr = ctrl_addr;
			lstate_next = lstate;
			next_reading = READING;
			next_status = STATUS;
			next_writing = WRITING;
			ENB_transform_next = ENB_transform;
			ENB_render_next = ENB_render;
			case (lstate)
				lRESET: 
					begin
						lstate_next = lREADGR;
						ENB_render_next = 1'b0;
						next_status= 1'b0;
						next_reading = 1'b1;
						ENB_transform_next = 1'b0;
					end
				lREADGR: 
					begin
						next_ctrl_addr = (ctrl_addr==9)?0:ctrl_addr+1;
						if (GR_finished_read)
							begin
								next_status = 1'b1;
								next_reading = 1'b1;
								lstate_next = lREADRU;
								ENB_render_next= 1'b1;
								ENB_transform_next = 1'b0;
							end
					end
				lREADRU:
					begin
					next_ctrl_addr = (ctrl_addr==9)?0:ctrl_addr+1;
						if (RU_finished_read)
							begin
								next_status = 1'b1;
								next_reading = 1'b0;
								ENB_transform_next = 1'b1;
								ENB_render_next = 1'b1;
								lstate_next = lCOMPUTE;
							end
					end
				lCOMPUTE: 
					begin
						if (Write) 
							begin
								lstate_next = lWRITE;
								next_writing= 1'b1;
								ENB_transform_next = 1'b0;
								ENB_render_next = 1'b0;
							end
					end
				lWRITE: 
					begin
						if (GR_finished)
							begin
								lstate_next = lREADGR;
								ENB_render_next = 1'b0;
								next_status= 1'b0;
								next_reading = 1'b1;
								ENB_transform_next = 1'b0;								
								next_writing= 1'b0;
							end
						if (!GR_finished & RU_finished)
							begin
								next_status = 1'b1;
								next_reading = 1'b1;
								lstate_next = lREADRU;
								ENB_render_next= 1'b1;
								//ENB_transform = 1'b1;
								next_writing= 1'b0;
							end
						if (!GR_finished & !RU_finished & oBVALID)
							begin
								next_status = 1'b0;
								next_reading = 1'b0;
								ENB_transform_next = 1'b1;
								ENB_render_next = 1'b1;
								lstate_next = lCOMPUTE;
								next_writing= 1'b0;
							end
					end
			endcase
			
			
		end

	
/////////////////////////////////////////////////////////
///DEBUGG      ////////////
//////DELETE ME/////////////////////////////
/////////////////////////////////
assign x = Addr;
assign y = 1;
////////////////////////////////////////////////////
///////////////////////////////////////////////////
////////////////////////////////////////////////////

endmodule
