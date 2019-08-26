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
 * @file timer.h
 * @author stackprogramer
 * @date 7 July 2019
 * @brief Timer header file is used for timers hanlding in LPC200.
 */
 
 /* @brief Getting started with timer.c and timer.h
  start step using thesse files in main loop
	timer_init_clocks(); //Initialize CPU and Peripheral Clocks @ 60Mhz
	timer_0_init(); //Initialize Timer0
	IO0DIR = 0xFFFFFFFF; //Configure all pins on Port 0 as Output

	while(1)
	{
		IO0SET = 0xFFFFFFFF; //Turn on LEDs
		timer_0_delay_ms(500); //0.5 Second(s) Delay
		IO0CLR = 0xFFFFFFFF; //Turn them off
		timer_0_delay_ms(500);
	}
*/
 
#ifndef TIMER_H
#define TIMER_H
#include "config.h"
#define PRESCALE 3;

/**
 * @brief declare init and delay fuction for timers
 */ 
extern void  timer_delay_ns_approx(uint32_t  dly);
extern void timer_init_clocks(void);
extern void timer_0_delay_ms(unsigned int milliseconds);
extern void timer_0_init(void);



#endif
