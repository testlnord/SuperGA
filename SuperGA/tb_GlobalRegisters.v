module tb_GlobalRegisters(
    );
reg [7:0] WDATA;
reg [3:0] b;

reg NEXT;
reg STATUS;
reg READING;

wire [7:0] X_center;
wire [7:0] Y_center;
wire [7:0] Angle;
wire [7:0] Zoom;

wire GR_finished;
wire finish_read;
wire [3:0] BC;

reg ACLK;
reg ARESETn;

 GlobalRegisters GR( .ACLK(ACLK),.ARESETn(ARESETn),.NEXT(NEXT),.FINISH_Read(finish_read),.STATUS(STATUS),.READING(READING),
	.FINISH(GR_finished),.RByt0(WDATA),.X_center(X_center),.Y_center(Y_center),.Angle(Angle),.Zoom(Zoom),.BC(BC));

	always begin
		#1 ACLK = ~ACLK;
	end

	initial begin
		ACLK = 1;
		ARESETn = 0;
		STATUS = 0;
		READING = 1;
		NEXT = 1;
		#5 ARESETn = 1;
		#10 WDATA  = 5;
		
		#50 $finish;//stop();
	end	
endmodule