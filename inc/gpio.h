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
 * @file gpio.h
 * @author stackprogramer
 * @date 7 July 2019
 * @brief gpio header file is used for gpio controlling in lpc2000.
 */
#ifndef GPIO_H
#define GPIO_H
#include "config.h"



// Function export
extern void gpio_p1_output_init(void);
extern void gpio_p1_blinking_all(uint32_t delay_ms_value);
extern void gpio_p1_blinking_hex_value(uint32_t hex_value,uint32_t delay_ms_value);
void gpio_delay_ms(uint32_t count);


#endif
