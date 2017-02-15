/**
 *  Defines for your entire project at one place
 * 
 *	@author 	Tilen Majerle
 *	@email		tilen@majerle.eu
 *	@website	http://stm32f4-discovery.com
 *	@version 	v1.0
 *	@ide		Keil uVision 5
 *	@license	GNU GPL v3
 *	
 * |----------------------------------------------------------------------
 * | Copyright (C) Tilen Majerle, 2014
 * | 
 * | This program is free software: you can redistribute it and/or modify
 * | it under the terms of the GNU General Public License as published by
 * | the Free Software Foundation, either version 3 of the License, or
 * | any later version.
 * |  
 * | This program is distributed in the hope that it will be useful,
 * | but WITHOUT ANY WARRANTY; without even the implied warranty of
 * | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * | GNU General Public License for more details.
 * | 
 * | You should have received a copy of the GNU General Public License
 * | along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * |----------------------------------------------------------------------
 */
#ifndef TM_DEFINES_H
#define TM_DEFINES_H

/* Put your global defines for all libraries here used in your project */

#define FATFS_USE_SDIO                      0

//Set your SPI, for corresponding pins look at TM SPI library
#define FATFS_SPI               SPI3
#define FATFS_SPI_PINSPACK      TM_SPI_PinsPack_2
	
//Set your CS pin for SPI			
#define FATFS_CS_PORT           GPIOD
#define FATFS_CS_PIN            GPIO_PIN_4

//Enable Card detect pin
//#define FATFS_USE_DETECT_PIN          1
//Default CD pin			
//#define FATFS_USE_DETECT_PIN_PORT          GPIOB
//#define FATFS_USE_DETECT_PIN_PIN           GPIO_PIN_6


#define FATFS_SDIO_4BIT						0
#define SDIO_TRANSFER_CLK_DIV           ((uint8_t)0x76)


#endif
