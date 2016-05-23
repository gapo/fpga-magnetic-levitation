#include "altera_up_avalon_video_pixel_buffer_dma.h"
#include "altera_up_avalon_video_character_buffer_with_dma.h"
#include "sys/alt_stdio.h"

#include "sys/altera_avalon_pio_regs.h"   
#include "sys/altera_avalon_jtag_uart_regs.h"   
#include "sys/altera_avalon_timer_regs.h" 

// === the fixed point macros ========================================
typedef signed int fix16 ;

#define fix2int16(a)   ((int)((a)>>8))
#define int2fix16(a)   ((fix16)((a)<<8))
#define float2fix16(a) ((fix16)((a)*65536.0)) // 2^16

int main(void)
{
	
	while(1){
		
		volatile int button_read;
		volatile int dummy_delay=32768;
	
		/////////////////////////////////	NEW CODE 	//////////////////////////////////

		//Prepare to load floating point input from serial console
		   	 float input_float;
		   	 
		   	 
		   	 //For each initial condition, ask the user to input a decimal value.
		   	 printf("Enter kp ");
		   	 scanf("%f", &input_float);
		   	 
		   	 //NIOS must convert that floating point value to fixed-point compatible with
		   	 //the top-level hardware spring system.
		   	 *(volatile int *)KP_BASE = input_float;
		   	 
		   	 //Do the same for the rest of the inputs.
		   	 printf("Enter ki: ");
		   	 scanf("%f", &input_float);
		   	 *(volatile int *)KI_BASE = input_float;
		   	 
		   	 printf("Enter kd ");
		   	 scanf("%f", &input_float);
		   	 *(volatile int *)KD_BASE = input_float;

		///////////////////////////////////////////////////////////////////////////////////////////////
		
		alt_up_pixel_buffer_dma_dev *pixel_buffer_dev;
		alt_up_char_buffer_dev *char_buffer_dev;
		
		int vga_x, vga_y, clock_interval, clock_counter, initial_condition_set,x1_read_value, x1_read_value_print, x2_read_value, x2_read_value_print;

		int pid_out_value;

		 ///////////////////////////////////////////////////////////////////////////////////////////////
		
		/* used for drawing coordinates */
		int x1, y1, x2, y2, deltax_1, deltax_2, deltay_1, deltay_2, delay = 0;

		/* initialize the pixel buffer HAL */
		pixel_buffer_dev = alt_up_pixel_buffer_dma_open_dev ("/dev/VGA_Pixel_Buffer");
		if ( pixel_buffer_dev == NULL)
			alt_printf ("Error: could not open VGA pixel buffer device\n");
		else
			alt_printf ("Opened character VGA pixel buffer device\n");
		/* clear the graphics screen */
		alt_up_pixel_buffer_dma_clear_screen(pixel_buffer_dev, 0);
	
		vga_x=1;
		
		while(1){

			x1_read_value = *(volatile int*)PIO_X1_OUTPUT_INIT_7_BASE;
			x2_read_value = *(volatile int*)PIO_X2_OUTPUT_INIT_8_BASE;

			dummy_delay=1<<11;
			while(dummy_delay--){}

			vga_x++;
		
			x1_read_value_print = x1_read_value >> 7; //White Line
			x2_read_value_print = x2_read_value >> 7; // Brown Line
			
			///// For debug only
			//printf ("raw_prox = %d \t median = %d \n",x1_read_value,x2_read_value);

			// Implementing filtering in Verilog itself
			
			alt_up_pixel_buffer_dma_draw_box(pixel_buffer_dev, vga_x, 480-x1_read_value_print - 13, vga_x, 480-x1_read_value_print - 13, 0xFFFF, 0);
			
			alt_up_pixel_buffer_dma_draw_box(pixel_buffer_dev, vga_x, 480-x2_read_value_print - 10, vga_x, 480-x2_read_value_print - 10, 0x8888, 0);
			
			alt_up_pixel_buffer_dma_draw_box(pixel_buffer_dev, vga_x, 480-(32767>>7) - 10, vga_x, 480-(32767>>7) - 10, 0x187F, 0);
			
			alt_up_pixel_buffer_dma_draw_box(pixel_buffer_dev, vga_x, 480-0 - 10, vga_x, 480-0 - 10, 0x49AF, 0);

			if (vga_x == 639){
				alt_up_pixel_buffer_dma_clear_screen(pixel_buffer_dev, 0);
				vga_x=0;
			}

		}
	}
	return 0;
}