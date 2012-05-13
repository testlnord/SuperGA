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
        ADDR_WIDTH = 8,
        DATA_WIDTH = 32
)
(
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
    output wire RenderEndInterrupt
    );
wire reset = ~ARESETn;
////////////////////
//INPUT(slave write)
////////////////////
    reg iAWREADY_next, iWREADY_next;
    reg [1:0] iBRESP_next;
    reg iBVALID_next;
   
    reg [1:0] iwstate, iwstate_next;
    
    localparam
        iRESET = 0,
        iREADY = 1,
        iVALID = 2,
        iRESP = 3;
   
    always@(posedge reset, posedge ACLK)
        if(reset)
            begin
                iBVALID <= 0;
                iwstate <= iRESET;
            end
        else
            begin
                iAWREADY <= iAWREADY_next;
                
                iWREADY  <= iWREADY_next;
               
                iBRESP   <= iBRESP_next;
                iBVALID  <= iBVALID_next;

                iwstate  <= iwstate_next;
            end
            
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
                        iWREADY_next = 1;
                        
                        iwstate_next = iVALID;
                    end
                iVALID:if(iAWVALID & iWVALID)
                    begin
                        if(iAWADDR !== 0 )
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
   
    


// Write FSM

    reg [ADDR_WIDTH-1:0] oAWADDR_next;
    reg [2:0] oAWPROT_next;
    reg [DATA_WIDTH-1:0] oWDATA_next;
    reg [DATA_WIDTH/8 - 1 :0] oWSTRB_next;
    reg oWVALID_next, oBREADY_next, oAWVALID_next;
 
//assign oWDATA = ~(0);
//assign oAWADDR = 5;
//assign oAWVALID = 1;
 
    reg [1:0] owstate, owstate_next;
    
    localparam
        oRESET = 0,
        oVALID = 1,
        oREADY = 2,
        oRESP = 3;

    always@(posedge reset, posedge ACLK)
        if(reset)
            begin
                oAWVALID <= 0;
                oWVALID <= 0;
                oAWADDR <= -1;
                owstate <= oRESET;
            end
        else
            begin
                oAWADDR  <= oAWADDR_next;
                oAWPROT  <= oAWPROT_next;
                oAWVALID <= oAWVALID_next;
                
                oWDATA   <= oWDATA_next;
                oWSTRB   <= oWSTRB_next;
                oWVALID  <= oWVALID_next;
    
                oBREADY  <= oBREADY_next;
                
                owstate  <= owstate_next;
            end

    always@(owstate, oBVALID, oAWREADY, oWREADY, oBRESP)
        begin
            oAWADDR_next = oAWADDR;
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
                        oAWVALID_next = 1;
                        //oAWADDR_next = (oAWADDR == MEM_LEN)? 0: oAWADDR + 1;
                        oAWPROT_next = 3'b010;                  
                        
                        oWVALID_next = 1;
                        //oWDATA_next = owmem[oAWADDR_next];
                        
                        // all data accesses use the  full width of the data bus
                        oWSTRB_next = {(DATA_WIDTH/8){1'b1}}; 
                        
                        oBREADY_next = 1;
                        
                        owstate_next = oREADY;
                    end
                oREADY: if(oAWREADY & oWREADY)
                    begin
                        oWVALID_next = 0;
                        oAWVALID_next = 0;
                        
                        owstate_next = oRESP;
                    end             
                oRESP: if(oBVALID)
                    begin
                        // обрабатываем ответ 
                        oBREADY_next = 0;
                        owstate_next = oVALID;
                    end
            endcase
        end

////////////////////////
//LOGIC
////////////////////////	 
// MAIN STATE REGISTERS-FLAGS	 
reg READING;
reg STATUS;
reg WRITING;
//WIRES
wire GR_finished;
wire GR_finished_read;
wire X_center;
wire Y_center;
wire Angle;
wire Zoom;

wire RU_finished_read;
wire RU_finished;
wire X_out;
wire Y_out;

wire ENB_trasform;
wire Write;
//MODULES
GlobalRegisters GR(.ACLK(ACLK),.ARESETn(ARESETn),.NEXT(RU_finished),.FINISH_Read(GR_finished_read),.STATUS(STATUS),.READING(READING),
	.FINISH(GR_finished),.RByt0(iWDATA),.X_center(X_center),.Y_center(Y_center),.Angle(Angle),.Zoom(Zoom));
RenderUnit RU(.ACLK(ACLK),.ARESETn(ARESETn),.READING(READING),.STATUS(STATUS),
	.FinishRead(RU_finished_read),.FinishWrite(RU_finished),.RByte(iWDATA),.Xcoord(X_out),.Ycoord(Y_out));
TransformationUnit TU(.ACLK(ACLK),.ARESETn(ARESETn),.ENB(ENB_transform),.Xcoord(X_out),.Ycoord(Y_out),
	.Xcenter(X_center),.Ycenter(Y_center),.Zoom(Zoom),.Angle(Angle),.Addr(Addr),.Write(Write));
	
	
endmodule
