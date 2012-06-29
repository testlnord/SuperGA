`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:15:57 06/08/2012 
// Design Name: 
// Module Name:    vga 
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
module vga(
    input wire clk, reset, test, sel,
	 input wire [3:0] sw, 
    output wire vsync, hsync, led0, led1, led2, led3, led4,
    output wire [3:0] r, g, b
    );
	 
	 	wire we;
	 //regs
	 reg led_reg0, led_reg1, led_reg2, led_reg3, led_reg4; //LEDS REG
	 reg [3:0] r_in, g_in, b_in; //OUT RGB REGS
	 
	 wire video_on; //VIDEO ENABLE
	 
	 //framebuffers
	 //reg [639:0] mem1 [479:0];
	 //reg [639:0] mem2 [479:0];
	wire douta;
	wire [18:0] addra;
	wire wea = we;
	vmem your_instance_name (
		.clka(clk), // input clka
		.rsta(reset), // input rsta
		.wea(wea), // input [0 : 0] wea
		.addra(addra), // input [18 : 0] addra
		.dina(1'b1), // input [0 : 0] dina
		.douta(douta) // output [0 : 0] douta
	); 


	 
	 //buffer selected
	 reg selected;
	 
	 
	 //pixel out
	 reg dout;
	 
	 //i
	 integer i,k;
	 
	 //CURSOR POSITION REGS
	 integer y,x;
	 
	 //css
	 reg css;
	 
	 //connect sync module
	 sync vga_sync( .clk(clk), .reset(reset), .hsync(hsync), .vsync(vsync), .video_on(video_on) );
	 
	 initial
		begin
			y=0;//y
			x=0;//x
			i=0;//counter
			k=0;
			dout=0;//out
			selected=1; //selected buffer
			
			//init memory
				//	for(i=0;i<480;i=i+1)
					//	begin //for
						//		 mem1[i]=640'b0;
							//	 mem2[i]=~640'b0;
			//			end //for
			 //$readmemb("C:\\bakl\\last_vga\\4.bmp", mem1);
		end //initial
		
		
always@(posedge vsync)
begin
/*	vsec = vsec + 1;
	if (vsec == 60)
	begin
		vsec = 0;
		led_reg4 = ~led_reg4;
		mousex = mousex+10;
		mousey = mousey+10;
			
		if(mousex >= 630)
			begin
				mousex = 10;
				led_reg1 = ~led_reg1;
			end
		if(mousey >= 470)
				mousey = 10;
	end	*/	
end


always@(posedge clk)
begin
	css = ~css;
end

reg test_reg_count;

always@(posedge css)
begin
	if ((video_on) && (~hsync) && (~vsync))
	begin
		x = x + 1;
		if (x == 640)
			x = 0;
	end
		if (hsync)
	begin
		x = 0;
	end
end

always@(negedge hsync)
begin
	if (~vsync)
	begin
		if (clk)
		begin
			//if(selected)
			//	begin
			//		mem_row = mem1[y];
			//	end
			//else 
			//	begin
			//		mem_row = mem2[y];
			//	end
			y = y + 1;
			if (y == 480)
				y = 0;
		end
	end
	else
		y = 0;
end
		
	 

		
		
	 //Select Buffer  
	 always@(posedge sel)
		begin
			selected=~selected;
		end
		
	 //Main
	 always@*
		 begin
			if(reset)
				begin
					
				
					r_in = 4'b0;
					g_in = 4'b0;
					b_in = 4'b0;
				end
			else 
				begin//************else		
					if(selected)
						begin
							dout = 0;
						end
					else 
						begin
							dout = douta;
						end
					//dout = mem_row[x];
					if(test)
						begin
							dout=0;
						end
					 
					 r_in = (dout) ? 4'b0000 : 4'b1111;
					 g_in = (dout) ? 4'b0000 : 4'b1111;
					 b_in = (dout) ? 4'b0000 : 4'b1111;
				end//******************else
			 end//if reset
	 
	 
	
	assign led0 = led_reg0;
	assign led1 = selected;
	assign led2 = test;
	assign led3 = reset;
	assign led4 = video_on;

	assign r = (video_on) ? r_in : 4'b0;
	assign g = (video_on) ? g_in : 4'b0;
	assign b = (video_on) ? b_in : 4'b0;

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

	//wire [2:0] x;
	wire inter;

	reg [7:0] ctrl_mem[0:17];
	reg [3:0] ctrl_addr,ctrl_addr_next;
	wire nreset =~reset;
	
	initial begin
	   //#100;
		
		ctrl_mem[0] = 8'h45;
		ctrl_mem[1] = 8'h45;
		ctrl_mem[2] = 8'h01; //zoom
		ctrl_mem[3] = 8'h00; //angle
		ctrl_mem[4] = 2;
		ctrl_mem[5] = 8'b00000010; //object type 0010 - L 0111 - T 1010 - D 1110 - C
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


    always@(posedge reset, posedge clk)
		  if(reset)
            begin
					//debug_clk <= 1;
					//i-face reset
                ctrl_addr<=0;
					//o-face reset
                iavalid <= 0;
                ivalid <= 1;
                iaddr <= 1;
                iwstate <= iRESET;
					 
            end
        else
            begin
					//if (we) 
					 //begin
						//mem1[xaddr][yaddr] =1'b1;// din;
						
						//mem1[0][0] =1'b1;// din;
					// end
					//o-face clk
					addra <= xaddr + yaddr*640;
					 iaddr  <= iAWADDR_next;
                iprot  <= iAWPROT_next;
                iavalid <= iAWVALID_next;
                idata   <= iWDATA_next;
                strb   <= iWSTRB_next;
                ivalid  <= iWVALID_next;
                ibready  <= iBREADY_next;
                iwstate  <= iwstate_next;
					ctrl_addr <= ctrl_addr_next;
					//if (inter) select;
            end
	////////////////////
	///OUTPUT
	////////////////////	 
   reg [7:0] data2w;
	always@(ctrl_addr)
	begin
		data2w =  ctrl_mem[ctrl_addr];
	end
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
                        iWDATA_next =data2w;// ctrl_mem[ctrl_addr];
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
	// Global signals
		 .ACLK(clk),
		 .ARESETn(~reset),
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
