`timescale 1ns / 1ps
`include "global.inc"

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:06:07 05/13/2012 
// Design Name: 
// Module Name:    tb_Accelerator 
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
module tb_Accelerator(
//input wire clk,
//input wire reset,
//output reg debug_clk
    );
	//global
	reg clk;
	always #1 clk = ~clk;

	reg reset;
	
	//to acc
	reg [3:0] strb;
	reg [7:0] iaddr;
	reg [2:0] iprot;
	wire  iaready;
	reg [7:0] idata;
	reg iavalid;
	reg ivalid;
	wire iready;
	reg ibready;
	wire [1:0] ibresp;
	wire ibvalid;
	//from acc
	wire [15:0] xaddr,yaddr;
	wire we;
	wire [2:0] x;
	wire inter;

	reg [15:0] video_mem[0:15];
	reg [7:0] ctrl_mem[0:64];
	reg [3:0] ctrl_addr,ctrl_addr_next;
	reg nreset;
	
	initial begin
	   #100;
		
		ctrl_mem[0] = 8'h45;
		ctrl_mem[1] = 8'h45;
		ctrl_mem[2] = 8'h01; //zoom
		ctrl_mem[3] = 8'h00; //angle
		ctrl_mem[4] = 2;
		ctrl_mem[5] = 8'b00001010; //object type 0010 - L 0111 - T 1010 - D 1110 - C
		ctrl_mem[6] = 8'h30;
		ctrl_mem[7] = 8'h40;
		ctrl_mem[8] = 8'h70;
		ctrl_mem[9] = 8'h60;
		ctrl_mem[10] =0;
		ctrl_mem[11] = 8'b00001010; //object type 0010 - L 0111 - T 1010 - D 1110 - C
		ctrl_mem[12] = 8'h10;
		ctrl_mem[13] = 8'h10;
		ctrl_mem[14] = 8'h40;
		ctrl_mem[15] = 8'h20;
		ctrl_mem[16] = 8'h70;
		ctrl_mem[17] = 8'h30;

		ctrl_addr = 0;
		clk=0;
		reset=0;
		nreset=1;
		$display( "tb_acc_init");		
		#1 reset=1;
		nreset = 0;
		#999 $finish;
	end

	reg iWSTRB_next, iAWVALID_next, iBREADY_next;
	reg [1:0] iwstate, iwstate_next, owstate, owstate_next;
	reg iWVALID_next;
	reg [7:0]iWDATA_next,iAWADDR_next;
	reg [2:0] iAWPROT_next;


    localparam
		  DATA_WIDTH = 8,
		  MEM_MAX_ADDR = 255,
	 //outp-interface states
        iRESET = 0,
        iVALID = 1,
        iREADY = 2,
        iRESP  = 3;   
			
//reg debug_clk ;


    always@(posedge nreset, posedge clk)
		  if(nreset)
            begin
					//debug_clk <= 1;
					//i-face reset

					//o-face reset
                iavalid <= 0;
                ivalid <= 1;
                iaddr <= 1;
                iwstate <= iRESET;
					 
            end
        else
            begin
					if (we) 
					 begin
						video_mem[xaddr][yaddr] =1'b1;// din;
					 end
					//o-face clk
					 iaddr  <= iAWADDR_next;
                iprot  <= iAWPROT_next;
                iavalid <= iAWVALID_next;
                idata   <= iWDATA_next;
                strb   <= iWSTRB_next;
                ivalid  <= iWVALID_next;
                ibready  <= iBREADY_next;
                iwstate  <= iwstate_next;
					ctrl_addr <= ctrl_addr_next;
					if (inter) $finish;
            end
	////////////////////
	///OUTPUT
	////////////////////	 
   
    always@*
        begin
            iAWADDR_next = iaddr;
            iAWPROT_next = iprot;
            iAWVALID_next = iavalid;
            ctrl_addr_next = ctrl_addr;   
            
				
            iWSTRB_next = strb;
            iWVALID_next = ivalid;
    
            iBREADY_next = ibready;
            
            iwstate_next = iwstate;
            
            case(iwstate)
                iRESET: iwstate_next = iVALID;
                iVALID: begin
                        iAWVALID_next = 1;
                        iAWADDR_next = 1;//(oAWADDR == MEM_LEN)? 0: oAWADDR + 1;
                        iAWPROT_next = 3'b010;                  
                        iWVALID_next = 1;
                        iWDATA_next = ctrl_mem[ctrl_addr];
                        // all data accesses use the  full width of the data bus
                        iWSTRB_next = {(DATA_WIDTH/8){1'b1}}; 
                        iBREADY_next = 1;
                        iwstate_next = iREADY;
								
								
                    end
                iREADY: if(iaready & iready)
                    begin
                        iWVALID_next = 0;
                        iAWVALID_next = 1;
                        iwstate_next = iRESP;
                    end             
                iRESP: if(ibvalid)
                    begin
                        //   
								ctrl_addr_next = (ctrl_addr==63)?0:ctrl_addr+1;
                        iBREADY_next = 0;
                        iwstate_next = iVALID;
                    end
            endcase
        end
	Accelerator #(
			 .ADDR_WIDTH(32),
			  .DATA_WIDTH(8)
	) Acc(
	.x(x),.y(y),
	// Global signals
		 .ACLK(clk),
		 .ARESETn(reset),
	//// SLAVE INPUT (slave write)
		 .iAWADDR(iaddr),
		 .iAWPROT(iprot),
		 .iAWVALID(iavalid),
		 .iAWREADY(iaready),    
		 .iWDATA(idata),
		 .iWSTRB(strb),
		 .iWVALID(ivalid),
		 .iWREADY(iready),
		 .iBREADY(ibready),
		 .iBRESP(ibresp),
		 .iBVALID(ibvalid),
	////MASTER OUTPUT
		.xAddr(xaddr),
		.yAddr(yaddr),
		
		.Write(we),
	//interrupt
		 .RenderEndInterrupt(inter)
		 );

endmodule
