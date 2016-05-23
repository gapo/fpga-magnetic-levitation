/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'nios_system'
 * SOPC Builder design path: C:/goku/DE2-115_Media_Computer/verilog/nios_system.sopcinfo
 *
 * Generated: Thu Mar 03 11:18:56 EST 2016
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * AV_Config configuration
 *
 */

#define ALT_MODULE_CLASS_AV_Config altera_up_avalon_audio_and_video_config
#define AV_CONFIG_BASE 0x10003000
#define AV_CONFIG_IRQ -1
#define AV_CONFIG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define AV_CONFIG_NAME "/dev/AV_Config"
#define AV_CONFIG_SPAN 16
#define AV_CONFIG_TYPE "altera_up_avalon_audio_and_video_config"


/*
 * Audio configuration
 *
 */

#define ALT_MODULE_CLASS_Audio altera_up_avalon_audio
#define AUDIO_BASE 0x10003040
#define AUDIO_IRQ 6
#define AUDIO_IRQ_INTERRUPT_CONTROLLER_ID 0
#define AUDIO_NAME "/dev/Audio"
#define AUDIO_SPAN 16
#define AUDIO_TYPE "altera_up_avalon_audio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0xa000020
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1d
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x20
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 1
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_RESET_ADDR 0x0


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0xa000020
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1d
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x20
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 1
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_RESET_ADDR 0x0


/*
 * Char_LCD_16x2 configuration
 *
 */

#define ALT_MODULE_CLASS_Char_LCD_16x2 altera_up_avalon_character_lcd
#define CHAR_LCD_16X2_BASE 0x82004e4
#define CHAR_LCD_16X2_IRQ -1
#define CHAR_LCD_16X2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CHAR_LCD_16X2_NAME "/dev/Char_LCD_16x2"
#define CHAR_LCD_16X2_SPAN 2
#define CHAR_LCD_16X2_TYPE "altera_up_avalon_character_lcd"


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_NIOS2_QSYS
#define __ALTERA_UP_AVALON_AUDIO
#define __ALTERA_UP_AVALON_AUDIO_AND_VIDEO_CONFIG
#define __ALTERA_UP_AVALON_CHARACTER_LCD
#define __ALTERA_UP_AVALON_PARALLEL_PORT
#define __ALTERA_UP_AVALON_SRAM
#define __ALTERA_UP_AVALON_VIDEO_CHARACTER_BUFFER_WITH_DMA
#define __ALTERA_UP_AVALON_VIDEO_PIXEL_BUFFER_DMA
#define __ALTERA_UP_FLASH_MEMORY_IP_CORE_AVALON_INTERFACE
#define __ALTERA_UP_SD_CARD_AVALON_INTERFACE


/*
 * Flash_flash_data configuration
 *
 */

#define ALT_MODULE_CLASS_Flash_flash_data Altera_UP_Flash_Memory_IP_Core_Avalon_Interface
#define FLASH_FLASH_DATA_BASE 0x9800000
#define FLASH_FLASH_DATA_IRQ -1
#define FLASH_FLASH_DATA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLASH_FLASH_DATA_NAME "/dev/Flash_flash_data"
#define FLASH_FLASH_DATA_SPAN 8388608
#define FLASH_FLASH_DATA_TYPE "Altera_UP_Flash_Memory_IP_Core_Avalon_Interface"


/*
 * Flash_flash_erase_control configuration
 *
 */

#define ALT_MODULE_CLASS_Flash_flash_erase_control Altera_UP_Flash_Memory_IP_Core_Avalon_Interface
#define FLASH_FLASH_ERASE_CONTROL_BASE 0x82004e0
#define FLASH_FLASH_ERASE_CONTROL_IRQ -1
#define FLASH_FLASH_ERASE_CONTROL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLASH_FLASH_ERASE_CONTROL_NAME "/dev/Flash_flash_erase_control"
#define FLASH_FLASH_ERASE_CONTROL_SPAN 4
#define FLASH_FLASH_ERASE_CONTROL_TYPE "Altera_UP_Flash_Memory_IP_Core_Avalon_Interface"


/*
 * Green_LEDs configuration
 *
 */

#define ALT_MODULE_CLASS_Green_LEDs altera_up_avalon_parallel_port
#define GREEN_LEDS_BASE 0x10000010
#define GREEN_LEDS_IRQ -1
#define GREEN_LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GREEN_LEDS_NAME "/dev/Green_LEDs"
#define GREEN_LEDS_SPAN 16
#define GREEN_LEDS_TYPE "altera_up_avalon_parallel_port"


/*
 * HEX3_HEX0 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX3_HEX0 altera_up_avalon_parallel_port
#define HEX3_HEX0_BASE 0x10000020
#define HEX3_HEX0_IRQ -1
#define HEX3_HEX0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX3_HEX0_NAME "/dev/HEX3_HEX0"
#define HEX3_HEX0_SPAN 16
#define HEX3_HEX0_TYPE "altera_up_avalon_parallel_port"


/*
 * HEX7_HEX4 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX7_HEX4 altera_up_avalon_parallel_port
#define HEX7_HEX4_BASE 0x10000030
#define HEX7_HEX4_IRQ -1
#define HEX7_HEX4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX7_HEX4_NAME "/dev/HEX7_HEX4"
#define HEX7_HEX4_SPAN 16
#define HEX7_HEX4_TYPE "altera_up_avalon_parallel_port"


/*
 * JTAG_UART configuration
 *
 */

#define ALT_MODULE_CLASS_JTAG_UART altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x10001000
#define JTAG_UART_IRQ 8
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/JTAG_UART"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * Pushbuttons configuration
 *
 */

#define ALT_MODULE_CLASS_Pushbuttons altera_up_avalon_parallel_port
#define PUSHBUTTONS_BASE 0x10000050
#define PUSHBUTTONS_IRQ 1
#define PUSHBUTTONS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PUSHBUTTONS_NAME "/dev/Pushbuttons"
#define PUSHBUTTONS_SPAN 16
#define PUSHBUTTONS_TYPE "altera_up_avalon_parallel_port"


/*
 * Red_LEDs configuration
 *
 */

#define ALT_MODULE_CLASS_Red_LEDs altera_up_avalon_parallel_port
#define RED_LEDS_BASE 0x10000000
#define RED_LEDS_IRQ -1
#define RED_LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RED_LEDS_NAME "/dev/Red_LEDs"
#define RED_LEDS_SPAN 16
#define RED_LEDS_TYPE "altera_up_avalon_parallel_port"


/*
 * SDRAM configuration
 *
 */

#define ALT_MODULE_CLASS_SDRAM altera_avalon_new_sdram_controller
#define SDRAM_BASE 0x0
#define SDRAM_CAS_LATENCY 3
#define SDRAM_CONTENTS_INFO
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_NAME "/dev/SDRAM"
#define SDRAM_POWERUP_DELAY 100.0
#define SDRAM_REFRESH_PERIOD 15.625
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SDRAM_ADDR_WIDTH 0x19
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_SDRAM_COL_WIDTH 10
#define SDRAM_SDRAM_DATA_WIDTH 32
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_ROW_WIDTH 13
#define SDRAM_SHARED_DATA 0
#define SDRAM_SIM_MODEL_BASE 0
#define SDRAM_SPAN 134217728
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_T_AC 5.5
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 20.0
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 20.0
#define SDRAM_T_WR 14.0


/*
 * SD_Card configuration
 *
 */

#define ALT_MODULE_CLASS_SD_Card Altera_UP_SD_Card_Avalon_Interface
#define SD_CARD_BASE 0x8200000
#define SD_CARD_IRQ -1
#define SD_CARD_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SD_CARD_NAME "/dev/SD_Card"
#define SD_CARD_SPAN 1024
#define SD_CARD_TYPE "Altera_UP_SD_Card_Avalon_Interface"


/*
 * SRAM configuration
 *
 */

#define ALT_MODULE_CLASS_SRAM altera_up_avalon_sram
#define SRAM_BASE 0x8000000
#define SRAM_IRQ -1
#define SRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SRAM_NAME "/dev/SRAM"
#define SRAM_SPAN 2097152
#define SRAM_TYPE "altera_up_avalon_sram"


/*
 * Slider_Switches configuration
 *
 */

#define ALT_MODULE_CLASS_Slider_Switches altera_up_avalon_parallel_port
#define SLIDER_SWITCHES_BASE 0x10000040
#define SLIDER_SWITCHES_IRQ -1
#define SLIDER_SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SLIDER_SWITCHES_NAME "/dev/Slider_Switches"
#define SLIDER_SWITCHES_SPAN 16
#define SLIDER_SWITCHES_TYPE "altera_up_avalon_parallel_port"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JTAG_UART"
#define ALT_STDERR_BASE 0x10001000
#define ALT_STDERR_DEV JTAG_UART
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/JTAG_UART"
#define ALT_STDIN_BASE 0x10001000
#define ALT_STDIN_DEV JTAG_UART
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/JTAG_UART"
#define ALT_STDOUT_BASE 0x10001000
#define ALT_STDOUT_DEV JTAG_UART
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios_system"


/*
 * VGA_Char_Buffer_avalon_char_buffer_slave configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_Char_Buffer_avalon_char_buffer_slave altera_up_avalon_video_character_buffer_with_dma
#define VGA_CHAR_BUFFER_AVALON_CHAR_BUFFER_SLAVE_BASE 0x9000000
#define VGA_CHAR_BUFFER_AVALON_CHAR_BUFFER_SLAVE_IRQ -1
#define VGA_CHAR_BUFFER_AVALON_CHAR_BUFFER_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_CHAR_BUFFER_AVALON_CHAR_BUFFER_SLAVE_NAME "/dev/VGA_Char_Buffer_avalon_char_buffer_slave"
#define VGA_CHAR_BUFFER_AVALON_CHAR_BUFFER_SLAVE_SPAN 8192
#define VGA_CHAR_BUFFER_AVALON_CHAR_BUFFER_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"


/*
 * VGA_Char_Buffer_avalon_char_control_slave configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_Char_Buffer_avalon_char_control_slave altera_up_avalon_video_character_buffer_with_dma
#define VGA_CHAR_BUFFER_AVALON_CHAR_CONTROL_SLAVE_BASE 0x10003030
#define VGA_CHAR_BUFFER_AVALON_CHAR_CONTROL_SLAVE_IRQ -1
#define VGA_CHAR_BUFFER_AVALON_CHAR_CONTROL_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_CHAR_BUFFER_AVALON_CHAR_CONTROL_SLAVE_NAME "/dev/VGA_Char_Buffer_avalon_char_control_slave"
#define VGA_CHAR_BUFFER_AVALON_CHAR_CONTROL_SLAVE_SPAN 8
#define VGA_CHAR_BUFFER_AVALON_CHAR_CONTROL_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"


/*
 * VGA_Pixel_Buffer configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_Pixel_Buffer altera_up_avalon_video_pixel_buffer_dma
#define VGA_PIXEL_BUFFER_BASE 0x10003020
#define VGA_PIXEL_BUFFER_IRQ -1
#define VGA_PIXEL_BUFFER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_PIXEL_BUFFER_NAME "/dev/VGA_Pixel_Buffer"
#define VGA_PIXEL_BUFFER_SPAN 16
#define VGA_PIXEL_BUFFER_TYPE "altera_up_avalon_video_pixel_buffer_dma"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * pio_clk_init_6 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_clk_init_6 altera_avalon_pio
#define PIO_CLK_INIT_6_BASE 0x8200460
#define PIO_CLK_INIT_6_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_CLK_INIT_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_CLK_INIT_6_CAPTURE 0
#define PIO_CLK_INIT_6_DATA_WIDTH 1
#define PIO_CLK_INIT_6_DO_TEST_BENCH_WIRING 0
#define PIO_CLK_INIT_6_DRIVEN_SIM_VALUE 0
#define PIO_CLK_INIT_6_EDGE_TYPE "NONE"
#define PIO_CLK_INIT_6_FREQ 50000000
#define PIO_CLK_INIT_6_HAS_IN 0
#define PIO_CLK_INIT_6_HAS_OUT 1
#define PIO_CLK_INIT_6_HAS_TRI 0
#define PIO_CLK_INIT_6_IRQ -1
#define PIO_CLK_INIT_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_CLK_INIT_6_IRQ_TYPE "NONE"
#define PIO_CLK_INIT_6_NAME "/dev/pio_clk_init_6"
#define PIO_CLK_INIT_6_RESET_VALUE 0
#define PIO_CLK_INIT_6_SPAN 16
#define PIO_CLK_INIT_6_TYPE "altera_avalon_pio"


/*
 * pio_cubic configuration
 *
 */

#define ALT_MODULE_CLASS_pio_cubic altera_avalon_pio
#define PIO_CUBIC_BASE 0x8200410
#define PIO_CUBIC_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_CUBIC_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_CUBIC_CAPTURE 0
#define PIO_CUBIC_DATA_WIDTH 1
#define PIO_CUBIC_DO_TEST_BENCH_WIRING 0
#define PIO_CUBIC_DRIVEN_SIM_VALUE 0
#define PIO_CUBIC_EDGE_TYPE "NONE"
#define PIO_CUBIC_FREQ 50000000
#define PIO_CUBIC_HAS_IN 0
#define PIO_CUBIC_HAS_OUT 1
#define PIO_CUBIC_HAS_TRI 0
#define PIO_CUBIC_IRQ -1
#define PIO_CUBIC_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_CUBIC_IRQ_TYPE "NONE"
#define PIO_CUBIC_NAME "/dev/pio_cubic"
#define PIO_CUBIC_RESET_VALUE 0
#define PIO_CUBIC_SPAN 16
#define PIO_CUBIC_TYPE "altera_avalon_pio"


/*
 * pio_k1_init_4 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_k1_init_4 altera_avalon_pio
#define PIO_K1_INIT_4_BASE 0x8200480
#define PIO_K1_INIT_4_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_K1_INIT_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_K1_INIT_4_CAPTURE 0
#define PIO_K1_INIT_4_DATA_WIDTH 18
#define PIO_K1_INIT_4_DO_TEST_BENCH_WIRING 0
#define PIO_K1_INIT_4_DRIVEN_SIM_VALUE 0
#define PIO_K1_INIT_4_EDGE_TYPE "NONE"
#define PIO_K1_INIT_4_FREQ 50000000
#define PIO_K1_INIT_4_HAS_IN 0
#define PIO_K1_INIT_4_HAS_OUT 1
#define PIO_K1_INIT_4_HAS_TRI 0
#define PIO_K1_INIT_4_IRQ -1
#define PIO_K1_INIT_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_K1_INIT_4_IRQ_TYPE "NONE"
#define PIO_K1_INIT_4_NAME "/dev/pio_k1_init_4"
#define PIO_K1_INIT_4_RESET_VALUE 0
#define PIO_K1_INIT_4_SPAN 16
#define PIO_K1_INIT_4_TYPE "altera_avalon_pio"


/*
 * pio_k2_init_5 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_k2_init_5 altera_avalon_pio
#define PIO_K2_INIT_5_BASE 0x8200470
#define PIO_K2_INIT_5_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_K2_INIT_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_K2_INIT_5_CAPTURE 0
#define PIO_K2_INIT_5_DATA_WIDTH 18
#define PIO_K2_INIT_5_DO_TEST_BENCH_WIRING 0
#define PIO_K2_INIT_5_DRIVEN_SIM_VALUE 0
#define PIO_K2_INIT_5_EDGE_TYPE "NONE"
#define PIO_K2_INIT_5_FREQ 50000000
#define PIO_K2_INIT_5_HAS_IN 0
#define PIO_K2_INIT_5_HAS_OUT 1
#define PIO_K2_INIT_5_HAS_TRI 0
#define PIO_K2_INIT_5_IRQ -1
#define PIO_K2_INIT_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_K2_INIT_5_IRQ_TYPE "NONE"
#define PIO_K2_INIT_5_NAME "/dev/pio_k2_init_5"
#define PIO_K2_INIT_5_RESET_VALUE 0
#define PIO_K2_INIT_5_SPAN 16
#define PIO_K2_INIT_5_TYPE "altera_avalon_pio"


/*
 * pio_kmid_init_3 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_kmid_init_3 altera_avalon_pio
#define PIO_KMID_INIT_3_BASE 0x8200490
#define PIO_KMID_INIT_3_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_KMID_INIT_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_KMID_INIT_3_CAPTURE 0
#define PIO_KMID_INIT_3_DATA_WIDTH 18
#define PIO_KMID_INIT_3_DO_TEST_BENCH_WIRING 0
#define PIO_KMID_INIT_3_DRIVEN_SIM_VALUE 0
#define PIO_KMID_INIT_3_EDGE_TYPE "NONE"
#define PIO_KMID_INIT_3_FREQ 50000000
#define PIO_KMID_INIT_3_HAS_IN 0
#define PIO_KMID_INIT_3_HAS_OUT 1
#define PIO_KMID_INIT_3_HAS_TRI 0
#define PIO_KMID_INIT_3_IRQ -1
#define PIO_KMID_INIT_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_KMID_INIT_3_IRQ_TYPE "NONE"
#define PIO_KMID_INIT_3_NAME "/dev/pio_kmid_init_3"
#define PIO_KMID_INIT_3_RESET_VALUE 0
#define PIO_KMID_INIT_3_SPAN 16
#define PIO_KMID_INIT_3_TYPE "altera_avalon_pio"


/*
 * pio_load_initial_conditions configuration
 *
 */

#define ALT_MODULE_CLASS_pio_load_initial_conditions altera_avalon_pio
#define PIO_LOAD_INITIAL_CONDITIONS_BASE 0x8200400
#define PIO_LOAD_INITIAL_CONDITIONS_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_LOAD_INITIAL_CONDITIONS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_LOAD_INITIAL_CONDITIONS_CAPTURE 0
#define PIO_LOAD_INITIAL_CONDITIONS_DATA_WIDTH 1
#define PIO_LOAD_INITIAL_CONDITIONS_DO_TEST_BENCH_WIRING 0
#define PIO_LOAD_INITIAL_CONDITIONS_DRIVEN_SIM_VALUE 0
#define PIO_LOAD_INITIAL_CONDITIONS_EDGE_TYPE "NONE"
#define PIO_LOAD_INITIAL_CONDITIONS_FREQ 50000000
#define PIO_LOAD_INITIAL_CONDITIONS_HAS_IN 0
#define PIO_LOAD_INITIAL_CONDITIONS_HAS_OUT 1
#define PIO_LOAD_INITIAL_CONDITIONS_HAS_TRI 0
#define PIO_LOAD_INITIAL_CONDITIONS_IRQ -1
#define PIO_LOAD_INITIAL_CONDITIONS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_LOAD_INITIAL_CONDITIONS_IRQ_TYPE "NONE"
#define PIO_LOAD_INITIAL_CONDITIONS_NAME "/dev/pio_load_initial_conditions"
#define PIO_LOAD_INITIAL_CONDITIONS_RESET_VALUE 0
#define PIO_LOAD_INITIAL_CONDITIONS_SPAN 16
#define PIO_LOAD_INITIAL_CONDITIONS_TYPE "altera_avalon_pio"


/*
 * pio_x1DD_init_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_x1DD_init_0 altera_avalon_pio
#define PIO_X1DD_INIT_0_BASE 0x8200420
#define PIO_X1DD_INIT_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_X1DD_INIT_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_X1DD_INIT_0_CAPTURE 0
#define PIO_X1DD_INIT_0_DATA_WIDTH 18
#define PIO_X1DD_INIT_0_DO_TEST_BENCH_WIRING 0
#define PIO_X1DD_INIT_0_DRIVEN_SIM_VALUE 0
#define PIO_X1DD_INIT_0_EDGE_TYPE "NONE"
#define PIO_X1DD_INIT_0_FREQ 50000000
#define PIO_X1DD_INIT_0_HAS_IN 0
#define PIO_X1DD_INIT_0_HAS_OUT 1
#define PIO_X1DD_INIT_0_HAS_TRI 0
#define PIO_X1DD_INIT_0_IRQ -1
#define PIO_X1DD_INIT_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_X1DD_INIT_0_IRQ_TYPE "NONE"
#define PIO_X1DD_INIT_0_NAME "/dev/pio_x1DD_init_0"
#define PIO_X1DD_INIT_0_RESET_VALUE 0
#define PIO_X1DD_INIT_0_SPAN 16
#define PIO_X1DD_INIT_0_TYPE "altera_avalon_pio"


/*
 * pio_x1D_init_1 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_x1D_init_1 altera_avalon_pio
#define PIO_X1D_INIT_1_BASE 0x82004b0
#define PIO_X1D_INIT_1_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_X1D_INIT_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_X1D_INIT_1_CAPTURE 0
#define PIO_X1D_INIT_1_DATA_WIDTH 18
#define PIO_X1D_INIT_1_DO_TEST_BENCH_WIRING 0
#define PIO_X1D_INIT_1_DRIVEN_SIM_VALUE 0
#define PIO_X1D_INIT_1_EDGE_TYPE "NONE"
#define PIO_X1D_INIT_1_FREQ 50000000
#define PIO_X1D_INIT_1_HAS_IN 0
#define PIO_X1D_INIT_1_HAS_OUT 1
#define PIO_X1D_INIT_1_HAS_TRI 0
#define PIO_X1D_INIT_1_IRQ -1
#define PIO_X1D_INIT_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_X1D_INIT_1_IRQ_TYPE "NONE"
#define PIO_X1D_INIT_1_NAME "/dev/pio_x1D_init_1"
#define PIO_X1D_INIT_1_RESET_VALUE 0
#define PIO_X1D_INIT_1_SPAN 16
#define PIO_X1D_INIT_1_TYPE "altera_avalon_pio"


/*
 * pio_x1_init configuration
 *
 */

#define ALT_MODULE_CLASS_pio_x1_init altera_avalon_pio
#define PIO_X1_INIT_BASE 0x82004d0
#define PIO_X1_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_X1_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_X1_INIT_CAPTURE 0
#define PIO_X1_INIT_DATA_WIDTH 18
#define PIO_X1_INIT_DO_TEST_BENCH_WIRING 0
#define PIO_X1_INIT_DRIVEN_SIM_VALUE 0
#define PIO_X1_INIT_EDGE_TYPE "NONE"
#define PIO_X1_INIT_FREQ 50000000
#define PIO_X1_INIT_HAS_IN 0
#define PIO_X1_INIT_HAS_OUT 1
#define PIO_X1_INIT_HAS_TRI 0
#define PIO_X1_INIT_IRQ -1
#define PIO_X1_INIT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_X1_INIT_IRQ_TYPE "NONE"
#define PIO_X1_INIT_NAME "/dev/pio_x1_init"
#define PIO_X1_INIT_RESET_VALUE 0
#define PIO_X1_INIT_SPAN 16
#define PIO_X1_INIT_TYPE "altera_avalon_pio"


/*
 * pio_x1_output_init_7 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_x1_output_init_7 altera_avalon_pio
#define PIO_X1_OUTPUT_INIT_7_BASE 0x8200450
#define PIO_X1_OUTPUT_INIT_7_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_X1_OUTPUT_INIT_7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_X1_OUTPUT_INIT_7_CAPTURE 0
#define PIO_X1_OUTPUT_INIT_7_DATA_WIDTH 18
#define PIO_X1_OUTPUT_INIT_7_DO_TEST_BENCH_WIRING 0
#define PIO_X1_OUTPUT_INIT_7_DRIVEN_SIM_VALUE 0
#define PIO_X1_OUTPUT_INIT_7_EDGE_TYPE "NONE"
#define PIO_X1_OUTPUT_INIT_7_FREQ 50000000
#define PIO_X1_OUTPUT_INIT_7_HAS_IN 1
#define PIO_X1_OUTPUT_INIT_7_HAS_OUT 0
#define PIO_X1_OUTPUT_INIT_7_HAS_TRI 0
#define PIO_X1_OUTPUT_INIT_7_IRQ -1
#define PIO_X1_OUTPUT_INIT_7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_X1_OUTPUT_INIT_7_IRQ_TYPE "NONE"
#define PIO_X1_OUTPUT_INIT_7_NAME "/dev/pio_x1_output_init_7"
#define PIO_X1_OUTPUT_INIT_7_RESET_VALUE 0
#define PIO_X1_OUTPUT_INIT_7_SPAN 16
#define PIO_X1_OUTPUT_INIT_7_TYPE "altera_avalon_pio"


/*
 * pio_x2DD_init_1 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_x2DD_init_1 altera_avalon_pio
#define PIO_X2DD_INIT_1_BASE 0x8200430
#define PIO_X2DD_INIT_1_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_X2DD_INIT_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_X2DD_INIT_1_CAPTURE 0
#define PIO_X2DD_INIT_1_DATA_WIDTH 18
#define PIO_X2DD_INIT_1_DO_TEST_BENCH_WIRING 0
#define PIO_X2DD_INIT_1_DRIVEN_SIM_VALUE 0
#define PIO_X2DD_INIT_1_EDGE_TYPE "NONE"
#define PIO_X2DD_INIT_1_FREQ 50000000
#define PIO_X2DD_INIT_1_HAS_IN 0
#define PIO_X2DD_INIT_1_HAS_OUT 1
#define PIO_X2DD_INIT_1_HAS_TRI 0
#define PIO_X2DD_INIT_1_IRQ -1
#define PIO_X2DD_INIT_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_X2DD_INIT_1_IRQ_TYPE "NONE"
#define PIO_X2DD_INIT_1_NAME "/dev/pio_x2DD_init_1"
#define PIO_X2DD_INIT_1_RESET_VALUE 0
#define PIO_X2DD_INIT_1_SPAN 16
#define PIO_X2DD_INIT_1_TYPE "altera_avalon_pio"


/*
 * pio_x2D_init_2 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_x2D_init_2 altera_avalon_pio
#define PIO_X2D_INIT_2_BASE 0x82004a0
#define PIO_X2D_INIT_2_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_X2D_INIT_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_X2D_INIT_2_CAPTURE 0
#define PIO_X2D_INIT_2_DATA_WIDTH 18
#define PIO_X2D_INIT_2_DO_TEST_BENCH_WIRING 0
#define PIO_X2D_INIT_2_DRIVEN_SIM_VALUE 0
#define PIO_X2D_INIT_2_EDGE_TYPE "NONE"
#define PIO_X2D_INIT_2_FREQ 50000000
#define PIO_X2D_INIT_2_HAS_IN 0
#define PIO_X2D_INIT_2_HAS_OUT 1
#define PIO_X2D_INIT_2_HAS_TRI 0
#define PIO_X2D_INIT_2_IRQ -1
#define PIO_X2D_INIT_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_X2D_INIT_2_IRQ_TYPE "NONE"
#define PIO_X2D_INIT_2_NAME "/dev/pio_x2D_init_2"
#define PIO_X2D_INIT_2_RESET_VALUE 0
#define PIO_X2D_INIT_2_SPAN 16
#define PIO_X2D_INIT_2_TYPE "altera_avalon_pio"


/*
 * pio_x2_init_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_x2_init_0 altera_avalon_pio
#define PIO_X2_INIT_0_BASE 0x82004c0
#define PIO_X2_INIT_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_X2_INIT_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_X2_INIT_0_CAPTURE 0
#define PIO_X2_INIT_0_DATA_WIDTH 18
#define PIO_X2_INIT_0_DO_TEST_BENCH_WIRING 0
#define PIO_X2_INIT_0_DRIVEN_SIM_VALUE 0
#define PIO_X2_INIT_0_EDGE_TYPE "NONE"
#define PIO_X2_INIT_0_FREQ 50000000
#define PIO_X2_INIT_0_HAS_IN 0
#define PIO_X2_INIT_0_HAS_OUT 1
#define PIO_X2_INIT_0_HAS_TRI 0
#define PIO_X2_INIT_0_IRQ -1
#define PIO_X2_INIT_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_X2_INIT_0_IRQ_TYPE "NONE"
#define PIO_X2_INIT_0_NAME "/dev/pio_x2_init_0"
#define PIO_X2_INIT_0_RESET_VALUE 0
#define PIO_X2_INIT_0_SPAN 16
#define PIO_X2_INIT_0_TYPE "altera_avalon_pio"


/*
 * pio_x2_output_init_8 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_x2_output_init_8 altera_avalon_pio
#define PIO_X2_OUTPUT_INIT_8_BASE 0x8200440
#define PIO_X2_OUTPUT_INIT_8_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_X2_OUTPUT_INIT_8_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_X2_OUTPUT_INIT_8_CAPTURE 0
#define PIO_X2_OUTPUT_INIT_8_DATA_WIDTH 18
#define PIO_X2_OUTPUT_INIT_8_DO_TEST_BENCH_WIRING 0
#define PIO_X2_OUTPUT_INIT_8_DRIVEN_SIM_VALUE 0
#define PIO_X2_OUTPUT_INIT_8_EDGE_TYPE "NONE"
#define PIO_X2_OUTPUT_INIT_8_FREQ 50000000
#define PIO_X2_OUTPUT_INIT_8_HAS_IN 1
#define PIO_X2_OUTPUT_INIT_8_HAS_OUT 0
#define PIO_X2_OUTPUT_INIT_8_HAS_TRI 0
#define PIO_X2_OUTPUT_INIT_8_IRQ -1
#define PIO_X2_OUTPUT_INIT_8_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_X2_OUTPUT_INIT_8_IRQ_TYPE "NONE"
#define PIO_X2_OUTPUT_INIT_8_NAME "/dev/pio_x2_output_init_8"
#define PIO_X2_OUTPUT_INIT_8_RESET_VALUE 0
#define PIO_X2_OUTPUT_INIT_8_SPAN 16
#define PIO_X2_OUTPUT_INIT_8_TYPE "altera_avalon_pio"


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x10002020
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1457021178
#define SYSID_TYPE "altera_avalon_sysid_qsys"

#endif /* __SYSTEM_H_ */
