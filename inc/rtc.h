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
 * @file rtc.h
 * @author stackprogramer
 * @date 7 July 2019
 * @brief rtc header file is used for rtc time in lpc2000.
 */
#ifndef RTC_H
#define RTC_H
#include "config.h"



// Function export
extern void rtc_init(void);
extern void rtc_disp_t6963c(void);

#endif
