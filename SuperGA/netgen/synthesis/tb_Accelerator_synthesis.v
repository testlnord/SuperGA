////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: O.87xd
//  \   \         Application: netgen
//  /   /         Filename: tb_Accelerator_synthesis.v
// /___/   /\     Timestamp: Fri Jun 22 01:46:35 2012
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim tb_Accelerator.ngc tb_Accelerator_synthesis.v 
// Device	: xc3s700an-5-fgg484
// Input file	: tb_Accelerator.ngc
// Output file	: C:\Users\hooloo\Desktop\SuperGA\SuperGA\netgen\synthesis\tb_Accelerator_synthesis.v
// # of Modules	: 1
// Design Name	: tb_Accelerator
// Xilinx        : C:\Xilinx\13.4\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module tb_Accelerator (
  clk, reset, sel, LED
);
  input clk;
  input reset;
  input sel;
  output [7 : 0] LED;
  wire Mrom__COND_47;
  GND   XST_GND (
    .G(Mrom__COND_47)
  );
  OBUF   LED_7_OBUF (
    .I(Mrom__COND_47),
    .O(LED[7])
  );
  OBUF   LED_6_OBUF (
    .I(Mrom__COND_47),
    .O(LED[6])
  );
  OBUF   LED_5_OBUF (
    .I(Mrom__COND_47),
    .O(LED[5])
  );
  OBUF   LED_4_OBUF (
    .I(Mrom__COND_47),
    .O(LED[4])
  );
  OBUF   LED_3_OBUF (
    .I(Mrom__COND_47),
    .O(LED[3])
  );
  OBUF   LED_2_OBUF (
    .I(Mrom__COND_47),
    .O(LED[2])
  );
  OBUF   LED_1_OBUF (
    .I(Mrom__COND_47),
    .O(LED[1])
  );
  OBUF   LED_0_OBUF (
    .I(Mrom__COND_47),
    .O(LED[0])
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

