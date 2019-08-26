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
 * @file _7seg.h
 * @author stackprogramer
 * @date 7 July 2019
 * @brief _7seg header file is used for 7segment display in lpc2000.
 */
 /*@brief Getting started with _7seg.c and  _7seg.h
  //start step using thesse files in main loop
	
  _7seg_init();  
   while(1)
    { _7seg_disp(2024);
    }  
 */
#ifndef _7SEG_H
#define _7SEG_H
#include "config.h"
#include "gpio.h"



// Function export
extern void _7seg_init(void);
extern void _7seg_disp(uint32_t number);
extern  void _7seg_disp_dot(uint8_t nth_digit);


#endif
