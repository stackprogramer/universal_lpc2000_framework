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
 * @file irq.h
 * @author stackprogramer
 * @date 7 July 2019
 * @brief rtc header file is used for interupt handling in lpc2000.
 */
 
 /* @brief Getting started with irq.c and irq.h
   irq_init_clocks(); //Initialize CPU and Peripheral Clocks @ 60Mhz
  	irq_init_timer_0(); //Initialize Timer0

   	IO0DIR = 0xFFFFFFFF; //Configure all pins on Port 0 as Output
 	  IO0PIN = 0xF;

  	T0TCR = 0x01; //Enable timer

  	while(1); //Infinite Idle Loop

  	//return 0; //normally this wont execute ever
*/
 

#ifndef IRQ_H
#define IRQ_H
#include "config.h"

#define PLOCK 0x00000400
#define MR0I (1<<0) //Interrupt When TC matches MR0
#define MR0R (1<<1)	//Reset TC when TC matches MR0

#define DELAY_MS 500 //0.5 Seconds Delay
#define PRESCALE_IRQ 60000 //60000 PCLK clock cycles to increment TC by 1 


// Function export
__irq void T0ISR(void);
extern void irq_init_clocks(void);
extern void irq_init_timer_0(void);


#endif
