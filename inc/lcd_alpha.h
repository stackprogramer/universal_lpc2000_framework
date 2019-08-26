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
 * @file lcd_alpha.h
 * @author stackprogramer
 * @date 7 July 2019
 * @brief lcd_alpha header file is used for alphanumberic lcd display in lpc2000.
 */
 /*@brief Getting started with lcd_alpha.c andlcd_alpha.h
 	lcd_alpha_lcd_init();
  
   while(1)
    { uint8_t msg[]="lpc 2000 series";
			lcd_alpha_16x2_display_string(msg,array_len(msg));
    }  
	
 */
#ifndef LCD_ALPHA_H
#define LCD_ALPHA_H
#include "config.h"
#define SET_RS IO0SET=0x000000100
#define CLR_RS IO0CLR=0x000000100
#define SET_E  IO0SET=0x000000200
#define CLR_E  IO0CLR=0x000000200
#define RESET 0x000003FF



// Function export
extern void lcd_alpha_command(uint8_t address);
extern void lcd_alpha_data(uint8_t address);
extern void lcd_alpha_16x2_display(void);
extern void lcd_alpha_lcd_init(void);
extern void lcd_alpha_16x2_display_ascii_code(uint8_t character);
extern void lcd_alpha_16x2_display_string(uint8_t *msg,size_t array_size);
void lcd_alpha_data(uint8_t address);
void lcd_alpha_delay(void);
void lcd_alpha_no_operation(void);




#endif
