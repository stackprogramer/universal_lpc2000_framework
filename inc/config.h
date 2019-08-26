/*
* Copyright (C) 2019 by stackprogramer                                                                                                            
* This file is part of universal lpc 2000 framework project.                                               
* 
* The universal LPC2000 framework has been published in 2019 to create a
* reliable, safe and reliable embeded systems by the persian programmers.
* The CPP - check and PC - lint were used to check the code with the MISRA 
* standard and so on. For comments in this framework, doxygen has been used.
*
* Why LPC2000?
*
* Considering that the majority of programmers have begun operating in 
* the Proteus and AVR environments, the advantage of  Philips microcontrollers 
* in the series of 2000 sets the simulation at Proteus to be very comfortable
* for training. I 'll have a special emphasis on this family( in  
* https://blog.stackprogramer.xyz ), too. The logo coding of other
* microcontrollers such as ST and ATMEL is not allowed to simulate in the
* Proteus, hence it is not advisable to initiate ARM microcontrollers training                                                                  
* You should have received a copy of the GNU Lesser General Public       
* License along with lpc 2000 framework.  If not, see <http://www.gnu.org/licenses/>.   
*/

/*
* KEIL-LPC21xx Configuration file
* Authors:
* stackprogramer  adapted code c for lpc2105 in keil compiler.
* Kruck Wang(Wang RongHua)_orginal libbrary  in IAR compiler
* Date 25/5/2019.
*/

/*
 * @file config.h
 * @author stackprogramer
 * @date 7 July 2019
 * @brief Including requirements, type definitons and so on.
 * We use config file to define general requirements.
 */
#ifndef CONFIG_H
#define CONFIG_H

#ifndef TRUE
#define TRUE  1
#endif

#ifndef FALSE
#define FALSE 0
#endif

/**
* @brief Type define
* We used stdint type, for float and doubble was used same scheme.
*
* exact-width signed integer types 
* typedef   signed short     int int16_t;
* typedef   signed           int int32_t;
* typedef   signed       __INT64 int64_t;
*
* exact-width unsigned integer types
* typedef unsigned          char uint8_t;
* typedef unsigned short     int uint16_t;
* typedef unsigned           int uint32_t;
* typedef unsigned       __INT64 uint64_t;
*/

typedef float        float32_t;                 
typedef double       double64_t; 

/**
 * @brief Including header file requirements in config file
 */ 
#include <stdint.h>
#include <LPC213x.H>  // LPC2138 Register definition    
#include  <stdio.h>
#include "lcd_t6963c.h"




/**
 * @brief  System setup, Fosc¡¢Fcclk¡¢Fcco¡¢Fpclk 
 */
#define Fosc            5000000                    //Osc freq,10MHz~25MHz, should be the same with the target board
#define Fcclk           (Fosc * 2)                  //System freq, must <=60MHZ
#define Fcco            (Fcclk * 4)                 //CCO freq£¬valid value must between 156MHz and 320MHz
#define Fpclk           (Fcclk / 4) * 2             //VPB freq

#define array_len(array)   sizeof(array)/sizeof(array[0])

#endif
