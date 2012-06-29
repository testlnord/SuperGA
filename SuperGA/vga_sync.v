`timescale 1ns / 1ps

module sync
(
input wire clk, reset,
output wire hsync, vsync, video_on
);

localparam HD = 640;
localparam HF = 48;
localparam HB = 16;
localparam HR = 96;
localparam VD = 480;
localparam VF = 10;
localparam VB = 33;
localparam VR = 2;

localparam LOW = 0;
localparam HIGH = 1;

reg mod2_reg;
wire mod2_next;

reg [9:0] h_count_reg, h_count_next;
reg [9:0] v_count_reg, v_count_next;

reg v_sync_reg, h_sync_reg;
wire v_sync_next, h_sync_next;

wire v_end, h_end, pixel_tick;

always @(posedge clk, posedge reset)
	if (reset)
	begin
		mod2_reg <= 1'b0;
		v_count_reg <= 0;
		h_count_reg <= 0;
		v_sync_reg <= 1'b0;
		h_sync_reg <= 1'b0;
	end
	else
	begin
		mod2_reg <= mod2_next;
		v_count_reg <= v_count_next;
		h_count_reg <= h_count_next;
		v_sync_reg <= v_sync_next;
		h_sync_reg <= h_sync_next;
	end

assign mod2_next = ~mod2_reg;
assign pixel_tick = mod2_reg;

assign h_end = (h_count_reg == (HD + HB + HR + HF - 1) );
assign v_end = (v_count_reg == (VD + VF + VB + VR - 1) );

always @*
	if (pixel_tick)
		if (h_end)
			h_count_next = 0;
		else
			h_count_next = h_count_reg + 1;
	else
		h_count_next = h_count_reg;
	
always @*
	if (pixel_tick & h_end)
		if (v_end)
			v_count_next = 0;
		else
			v_count_next = v_count_reg + 1;
	else
		v_count_next = v_count_reg;
		
assign h_sync_next = (h_count_reg >= (HD + HB) && h_count_reg <= (HD + HB + HR - 1) );
assign v_sync_next = (v_count_reg >= (VD + VB) && v_count_reg <= (VD + VB + VR - 1) );

assign video_on = (h_count_reg < HD) && (v_count_reg < VD);

assign hsync = h_sync_reg;
assign vsync = v_sync_reg;

endmodule
