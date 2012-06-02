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

reg ACLK;
reg ARESETn;

 GlobalRegisters GR( .ACLK(ACLK),.ARESETn(ARESETn),.NEXT(NEXT),.FINISH_Read(finish_read),.STATUS(STATUS),.READING(READING),
	.FINISH(GR_finished),.RByt0(WDATA),.X_center(X_center),.Y_center(Y_center),.Angle(Angle),.Zoom(Zoom));

	always begin
		#1 ACLK = ~ACLK;
		if (STATUS)begin
			NEXT=NEXT+1;
		end
	end

	initial begin
		ACLK = 1;
		ARESETn = 0;
		STATUS = 0;
		READING = 1;
		NEXT = 0;
		#3 WDATA  = 5;
		#5 ARESETn = 1;
		
		
		#50 $finish;//stop();
	end
	
	always@(finish_read)
	begin
		if (finish_read==1)
		begin
			NEXT = NEXT+1;
			READING = 0;
			STATUS = 1;
			WDATA = 6;
		end
	end
	always@(GR_finished)begin
	if (GR_finished) begin
		STATUS=0;
		READING=1;
		NEXT = 0;
	end
	end
endmodule