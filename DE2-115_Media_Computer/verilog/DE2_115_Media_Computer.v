// DE2_115_Media_Computer.v
// Authors: Ryan Land, Gautham Ponnu
// ECE 5760 - Final Project
// May 16, 2016

// TOP LEVEL MODULE
module DE2_115_Media_Computer (


	// Inputs
	CLOCK_50,
	TD_CLK27,
	KEY,
	SW,

	//  Communication
	UART_RXD,
	
	// Audio
	AUD_ADCDAT,
	
	// IrDA
	IRDA_RXD,

	// Video In
	TD_DATA,
	TD_HS,
	TD_VS,
	
	// USB
	OTG_INT,

/*****************************************************************************/
	// Bidirectionals
	GPIO,

	// Memory (SRAM)
	SRAM_DQ,
	
	// Memory (SDRAM)
	DRAM_DQ,

	// PS2 Port
	PS2_KBCLK,
	PS2_KBDAT,
	PS2_MSCLK,
	PS2_MSDAT,
	
	// Audio
	AUD_BCLK,
	AUD_ADCLRCK,
	AUD_DACLRCK,
	
	// Char LCD 16x2
	LCD_DATA,

	// AV Config
	I2C_SDAT,
	
	// SD Card
	SD_CMD,
	SD_DAT,
	
	// Flash
	FL_DQ,
	
	//USB
	OTG_DATA,
	
/*****************************************************************************/
	// Outputs
	
	// 	Simple
	LEDG,
	LEDR,

	HEX0,
	HEX1,
	HEX2,
	HEX3,
	HEX4,
	HEX5,
	HEX6,
	HEX7,
	
	// 	Memory (SRAM)
	SRAM_ADDR,

	SRAM_CE_N,
	SRAM_WE_N,
	SRAM_OE_N,
	SRAM_UB_N,
	SRAM_LB_N,
	
	//  Communication
	UART_TXD,
	
	// Memory (SDRAM)
	DRAM_ADDR,
	
	DRAM_BA,
	DRAM_CAS_N,
	DRAM_RAS_N,
	DRAM_CLK,
	DRAM_CKE,
	DRAM_CS_N,
	DRAM_WE_N,
	DRAM_DQM,
	
	// Audio
	AUD_XCK,
	AUD_DACDAT,
	
	// VGA
	VGA_CLK,
	VGA_HS,
	VGA_VS,
	VGA_BLANK_N,
	VGA_SYNC_N,
	VGA_R,
	VGA_G,
	VGA_B,

	// Char LCD 16x2
	LCD_ON,
	LCD_BLON,
	LCD_EN,
	LCD_RS,
	LCD_RW,
	
	// AV Config
	I2C_SCLK,
	
	// SD Card
	SD_CLK,
	
	// Flash
	FL_ADDR,
   FL_CE_N,
	FL_OE_N,
	FL_RESET_N,
	FL_WE_N,
		
	// Video In
	TD_RESET_N,
	
	// USB
	OTG_ADDR,
	OTG_CS_N,
	OTG_OE_N,
	OTG_RST_N,
	OTG_WE_N,
);

/*****************************************************************************
 *                           Parameter Declarations                          *
 *****************************************************************************/


/*****************************************************************************
 *                             Port Declarations                             *
 *****************************************************************************/

 
// Inputs
input				CLOCK_50;
input				TD_CLK27;
input		[ 3: 0]	KEY;
input		[17: 0]	SW;


//  Communication
input				UART_RXD;

//  Audio
input				AUD_ADCDAT;

//  IrDA
input				IRDA_RXD;

// Video In
input 	[7:0]	TD_DATA;
input   			TD_HS;
input  			TD_VS;

// USB
input       [ 1: 0] OTG_INT;

// Bidirectionals
inout   [35:0]   GPIO;

// 	Memory (SRAM)
inout		[15: 0]	SRAM_DQ;

//  Memory (SDRAM)
inout		[31: 0]	DRAM_DQ;

//  PS2 Port
inout				PS2_KBCLK;
inout				PS2_KBDAT;
inout				PS2_MSCLK;
inout				PS2_MSDAT;

//  Audio
inout				AUD_BCLK;
inout				AUD_ADCLRCK;
inout				AUD_DACLRCK;

//  AV Config
inout				I2C_SDAT;

//  Char LCD 16x2
inout		[ 7: 0]	LCD_DATA;

// SD Card
inout 			SD_CMD;
inout 	[ 3: 0]  SD_DAT;

// Flash
inout 	[ 7: 0]  FL_DQ; 

// USB
inout    [15: 0]  OTG_DATA;

// Outputs
output				TD_RESET_N;

// 	Simple
output		[ 8: 0]	LEDG;
output		[17: 0]	LEDR;

output		[ 6: 0]	HEX0;
output		[ 6: 0]	HEX1;
output		[ 6: 0]	HEX2;
output		[ 6: 0]	HEX3;
output		[ 6: 0]	HEX4;
output		[ 6: 0]	HEX5;
output		[ 6: 0]	HEX6;
output		[ 6: 0]	HEX7;

// 	Memory (SRAM)
output		[19: 0]	SRAM_ADDR;

output				SRAM_CE_N;
output				SRAM_WE_N;
output				SRAM_OE_N;
output				SRAM_UB_N;
output				SRAM_LB_N;

//  Communication
output				UART_TXD;

//  Memory (SDRAM)
output		[12: 0]	DRAM_ADDR;

output		[ 1: 0]	DRAM_BA;
output				DRAM_CAS_N;
output				DRAM_RAS_N;
output				DRAM_CLK;
output				DRAM_CKE;
output				DRAM_CS_N;
output				DRAM_WE_N;
output		[ 3: 0]	DRAM_DQM;

//  Audio
output				AUD_XCK;
output				AUD_DACDAT;

//  VGA
output				VGA_CLK;
output				VGA_HS;
output				VGA_VS;
output				VGA_BLANK_N;
output				VGA_SYNC_N;
output		[ 7: 0]	VGA_R;
output		[ 7: 0]	VGA_G;
output		[ 7: 0]	VGA_B;

//  Char LCD 16x2
output				LCD_ON;
output				LCD_BLON;
output				LCD_EN;
output				LCD_RS;
output				LCD_RW;

//  AV Config
output				I2C_SCLK;

//  SD Card
output 				SD_CLK;

//  Flash
output 		[22: 0]	FL_ADDR;
output 				FL_CE_N;
output				FL_OE_N;
output				FL_RESET_N;
output				FL_WE_N;

//USB
output      [ 1: 0]  OTG_ADDR;
output				OTG_CS_N;
output				OTG_OE_N;
output				OTG_RST_N;
output				OTG_WE_N;

/*****************************************************************************
 *                 Internal Wires and Registers Declarations                 *
 *****************************************************************************/
// Internal Wires

// Internal Registers

// State Machine Registers

/*****************************************************************************
 *                         Finite State Machine(s)                           *
 *****************************************************************************/


/*****************************************************************************
 *                             Sequential Logic                              *
 *****************************************************************************/


/*****************************************************************************
 *                            Combinational Logic                            *
 *****************************************************************************/

// Output Assignments - set GPIO safely as input.
assign GPIO[ 0]		= 1'bZ;
assign GPIO[ 2]		= 1'bZ;
assign GPIO[ 4]		= 1'bZ;
//assign GPIO[ 6]		= 1'bZ;

/*****************************************************************************
 *                              Lab2 + NIOS                             *
 *****************************************************************************/
 


wire signed	[17:0]x1_output;
wire signed  [17:0]x2_output;

wire [10:0] kp_wire,ki_wire,kd_wire;	

///////////////////// INSTANTIATE NIOS ///////////////////////////////////////

nios_system NiosII (
	// 1) global signals:
	.clk									(CLOCK_50),
	.clk_27									(TD_CLK27),
	.reset_n								(KEY[0]),
	.sys_clk								(),
	.vga_clk								(),
	.sdram_clk								(DRAM_CLK),
	.audio_clk								(AUD_XCK),

	// the_AV_Config
	.I2C_SDAT_to_and_from_the_AV_Config		(I2C_SDAT),
	.I2C_SCLK_from_the_AV_Config			(I2C_SCLK),
	
	// the_SDRAM
	.zs_addr_from_the_SDRAM					(DRAM_ADDR),
	.zs_ba_from_the_SDRAM					(DRAM_BA),
	.zs_cas_n_from_the_SDRAM				(DRAM_CAS_N),
	.zs_cke_from_the_SDRAM					(DRAM_CKE),
	.zs_cs_n_from_the_SDRAM					(DRAM_CS_N),
	.zs_dq_to_and_from_the_SDRAM			(DRAM_DQ),
	.zs_dqm_from_the_SDRAM					(DRAM_DQM),
	.zs_ras_n_from_the_SDRAM				(DRAM_RAS_N),
	.zs_we_n_from_the_SDRAM					(DRAM_WE_N),
	
	// the_SRAM
	.SRAM_DQ_to_and_from_the_SRAM			(SRAM_DQ),
	.SRAM_ADDR_from_the_SRAM				(SRAM_ADDR),
	.SRAM_LB_N_from_the_SRAM				(SRAM_LB_N),
	.SRAM_UB_N_from_the_SRAM				(SRAM_UB_N),
	.SRAM_CE_N_from_the_SRAM				(SRAM_CE_N),
	.SRAM_OE_N_from_the_SRAM				(SRAM_OE_N),
	.SRAM_WE_N_from_the_SRAM				(SRAM_WE_N),

	.VGA_CLK_from_the_VGA_Controller		(VGA_CLK),
	.VGA_HS_from_the_VGA_Controller			(VGA_HS),
	.VGA_VS_from_the_VGA_Controller			(VGA_VS),
	.VGA_BLANK_from_the_VGA_Controller		(VGA_BLANK_N),
	.VGA_SYNC_from_the_VGA_Controller		(VGA_SYNC_N),
	.VGA_R_from_the_VGA_Controller			(VGA_R),
	.VGA_G_from_the_VGA_Controller			(VGA_G),
	.VGA_B_from_the_VGA_Controller			(VGA_B),
	

   
	.x1_output_export(unscaled_pwm_result_from_pid_controller[15:0]),
	
	////////////// EXPORT TO NIOS ///////////////////////////////////
	//////// x2_output as Median Filter
	.x2_output_export(median_filtered_proximity_value_to_nios),

	.kp_export                              (kp_wire),                              //                                 kp.export
	.ki_export                              (ki_wire),                              //                                 ki.export
   	.kd_export                              (kd_wire)                               //                                 kd.export
 );




wire reset;
assign reset=~KEY[0];

wire [15:0] median_filtered_proximity_value_to_nios;
wire signed [16:0] unscaled_pwm_result_from_pid_controller;

//wire [3:0] kp, ki, kd;


spi_controller spiread (

	// INPUTS (SPI buses)
	.cs(GPIO[0]),
	.sck(GPIO[2]),
	.sda(GPIO[4]),
	.kp(kp_wire),
	.ki(ki_wire),
	.kd(kd_wire),
	// OUTPUTS
	.median_filtered_proximity_value(median_filtered_proximity_value_to_nios),
	.unscaled_pwm_result_from_pid_controller(unscaled_pwm_result_from_pid_controller)
);

pwm_output gpio_pwm_controller (

	// INPUTS
	.clock50(CLOCK_50),
	.switches(SW[17:0]),
	.unscaled_pwm_result_from_pid_controller(unscaled_pwm_result_from_pid_controller),
	
	// OUTPUTS
	.gpio_to_the_opamp(GPIO[35])
);


endmodule

/////////////////	SPI_CONTROLLER MODULE 	///////////////////////////////////


module spi_controller(cs, sck, sda, kp, ki, kd, median_filtered_proximity_value, unscaled_pwm_result_from_pid_controller);

	//////////////////////// Inputs and Outputs ////////////////////

	input cs, sck, sda;
	input [9:0] kp, ki, kd;
	output [15:0] median_filtered_proximity_value;
	output signed [16:0] unscaled_pwm_result_from_pid_controller;
	
	//////////////////////////////////////////////////////////////
		
	/////////////////// SPI Transaction Registers //////////////////
	
	//Register used for sample storage upon positive edge of every sample clock.
	reg [15:0] prox_out_reg;
	
	//Register for storage of data bits read during the SPI transaction.
	//The proximity value is located at the 2nd and 3rd bytes of the transaction.
	reg [47:0] raw_read_bits;
	
	// Proximity value history for median filter.
	reg [15:0] prox_out1,prox_out2,prox_out3;//,prox_out4;
	
	//////////////////////////////////////////////////////////////
	//////////////// Median Filter Registers /////////////////////
	
	reg [15:0] median_filtered_proximity_value_reg;
	
	//////////////////////////////////////////////////////////////
	///////////////// PID Registers and Paramaters ////////////////
	
	parameter ldc1000_setpoint = 16'd32768-16'd7250; // 32768 is MAX
	
	reg signed [16:0] pid_fractional_output;
	reg signed [16:0] pid_integral;
	reg signed [16:0] current_error_reg;
	reg signed [16:0] previous_error_reg;
	reg signed [16:0] pid_integral_accumulator;
	reg signed [16:0] unscaled_pwm_result_from_pid_controller_reg;
	reg signed [16:0] value_test;


	/////////////////////////////////////////////////////////////////	
	
	// This is the i2c CLK. This is for every bit wise read
	
	always @ (negedge sck) begin
	
		//Read into LSB, then shift by 1.
		raw_read_bits[0]=sda;
		raw_read_bits <= raw_read_bits << 1;
		
	end
	
	// This is when CS is ready. This means that one sample is ready for us to read.

	always @ (posedge cs) begin
	
		///////////////////////SPI READING BLOCK////////////////////
		
		prox_out_reg = {raw_read_bits[39:24]};

		// Assigning the right Median Filter Values
		prox_out3 <= prox_out2;
		prox_out2 <= prox_out1;
		//We have to reverse bytes 2 and 3 because they are transmitted as {LSB,MSB}.
		prox_out1 <= (32768-{prox_out_reg[7:0], prox_out_reg[15:8]});
		
		////////////////////////////////////////////////////////////

		//////////////////////MEDIAN FILTER BLOCK//////////////////
		
		// The Media Filter block reads the samples with a window size of 3 and selects the median value.
		// This is to avoid noise spikes

		if ((prox_out1 <= prox_out2) && (prox_out1 <= prox_out3)) begin
			median_filtered_proximity_value_reg <= ( prox_out2 <= prox_out3) ? prox_out2 : prox_out3;			
		end
		else if ((prox_out2 <= prox_out1) && (prox_out2<=prox_out3)) begin
			median_filtered_proximity_value_reg <= (prox_out1 <= prox_out3) ? prox_out1 : prox_out3;			
		end
		else begin
			median_filtered_proximity_value_reg <= (prox_out1 <= prox_out2) ? prox_out1 : prox_out2;
		end
		
		//////////////////////////////////////////////////////////////
		
		/////////////////////PID CALCULATION STUFF///////////////////////////
		
		current_error_reg <= ((ldc1000_setpoint - median_filtered_proximity_value_reg)); // This is the current error
	
		if ((current_error_reg * previous_error_reg) > 0 ) begin
			pid_integral_accumulator = pid_integral_accumulator + current_error_reg;
		end else begin
		
			//pid_integral_accumulator = pid_integral_accumulator * 0.96875
			pid_integral_accumulator = (pid_integral_accumulator >> 1) +
									   (pid_integral_accumulator >> 2) + 
									   (pid_integral_accumulator >> 3) + 
									   (pid_integral_accumulator >> 4) + 
									   (pid_integral_accumulator >> 5);
									   
		end
	
		value_test <= (kp * current_error_reg + ki * pid_integral + kd * (current_error_reg - previous_error_reg));
		
		if ((value_test) < 0) begin
			unscaled_pwm_result_from_pid_controller_reg <= 0;
		end 
		else if ((value_test) > 32767 ) begin
			unscaled_pwm_result_from_pid_controller_reg <= 32767;
		end
		else begin
			unscaled_pwm_result_from_pid_controller_reg <= value_test;
		end
		
		
		//unscaled_pwm_result_from_pid_controller_reg <= median_filtered_proximity_value_reg;
	
		previous_error_reg <= current_error_reg;
		
		/////////////////////////////////////////////////////////////////////////
		
	end
	
	assign unscaled_pwm_result_from_pid_controller = unscaled_pwm_result_from_pid_controller_reg ;
	assign median_filtered_proximity_value = median_filtered_proximity_value_reg;

	// We read LSB, then MSB. Now combine them together properly as {MSB,LSB}
	// 32767 - the value, because when ball goes up, prox output should go up. It is more intuitive
	// because prox output will change monotonically, and with same sign as height.
	//assign prox_output = (32767-{prox_out_reg[7:0], prox_out_reg[15:8]});
	
endmodule

///////////////////////////////////////////////////////////////////////////

module pwm_output(clock50, switches, unscaled_pwm_result_from_pid_controller, gpio_to_the_opamp);

input clock50;
input [17:0] switches;
input signed [16:0] unscaled_pwm_result_from_pid_controller;

output gpio_to_the_opamp;

// Variables
reg signed [31:0] frequency_counter;
reg signed [31:0] duty_cycle_counter;
reg signed [16:0] scaled_pwm_result_from_pid_controller;
reg gpio_to_the_opamp_reg;

always @ (posedge clock50) begin


	if (frequency_counter < 0 || frequency_counter == 0) begin
	
		//Finished counting? Load counter back with 50 million again.
		frequency_counter <= 32'b10111110101111000010000000;
		
		//Set output = 1 because we're at the start of our cycle.
		gpio_to_the_opamp_reg <= 1;
		
		//Read the PID output only at the beginning of the cycle.
		//If the PWM value changes dynamically in the middle of the cycle, we might
		//have some weird unwanted effects.

		scaled_pwm_result_from_pid_controller <= unscaled_pwm_result_from_pid_controller>>7;

	end else begin

		//Decrement as a multiple of 5000
		frequency_counter <= frequency_counter - ((switches[9:0]) * (32'b101));
		
		//Since the PWM frequency is dependent on the switches, we can play around with
		// the frequency values during operation of the levitator. That way we can tell
		// what the optimal PWM frequency is for our application.

	end
	
	if(scaled_pwm_result_from_pid_controller[7:0]==0) begin
		gpio_to_the_opamp_reg <= 0;
	end
	// Replacing the switches with the output from the PID
	else if (frequency_counter < (32'd196078 * (255-scaled_pwm_result_from_pid_controller[7:0]))) begin

		//This maps to a ~0.5% to 100% duty cycle.
		//It will allow the FPGA to finely tune the duty cycle to whatever we need.
		//If we need finer tuning, we can cut "32'd196078" in half, and then we'd have a
		// multiplier going from 1 to 511. We can basically tune this as fine as we want it.
		//Probably the finer it is, the better.
		
		gpio_to_the_opamp_reg <= 0;
		
	end
	
	
end

assign gpio_to_the_opamp = gpio_to_the_opamp_reg;

endmodule