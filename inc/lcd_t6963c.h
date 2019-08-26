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
 * @file lcd_t6963c.h
 * @author stackprogramer
 * @date 7 July 2019
 * @brief t6963c lcd header file is used for display string in t6963c lcd.
 */


/*
* @brief lcd_t6963c.h is adopted for lpc 2000 by stackprogramer
* KEIL-LPC2105 Configuration file
* Authors:
* stackprogramer  adapted code c for lpc2105 in keil compiler.
* Kruck Wang(Wang RongHua)_orginal libbrary  in IAR compiler
* Date 25/5/2019.
*
* FB-EDU-PARM-LPC2138 User Function file
* Author: Kruck Wang(Luo XieBing )
* Date: 2009-04-23
* Guangzhou Windway Electronic Technology Co., Ltd.
* Date: 2010-10-29
* Labcenter Electronics Ltd.
*/

#ifndef LCD_T6963C_H
#define LCD_T6963C_H

#include "config.h"
#include <string.h>
#define width      16       //Display width
#define addr_w     0x0000   //Text display buffer base address
#define addr_t     0x0100   //Graphics display buffer base address

// T6963C Pin definition
#define fs  (1<<8)
#define cd  (1<<12)
#define ce  (1<<13)
#define rd  (1<<10)
#define wr  (1<<11)
#define rst (1<<9)
#define bf0  (1<<0)
#define bf1  (1<<1)
#define bf3  (1<<3)

// Function declare

extern void lcd_disp_matrix (uint8_t data1,uint8_t data2);
extern void lcd_clr_ram (void);
extern void lcd_disp_imgage (uint8_t addr,uint8_t xl,uint8_t yl,uint8_t const *img);
extern void lcd_disp_char_chinese (uint16_t addr,uint8_t xl,uint8_t yl,uint8_t row_xl,uint8_t row_yl,uint8_t const  *chn);
extern void disp_eng (uint8_t const *eng);
extern void lcd_disp_msg_chinese(uint32_t x,uint32_t y,uint8_t  *str);
extern void lcd_disp_msg(uint32_t x,uint32_t y,uint8_t *str);
extern void lcd_init (void);


void delay_us (uint16_t us);
void delay_ms (uint16_t ms);
void wr_od (uint8_t dat,uint8_t comm);       //write one byte data and one byte command
void wr_td (uint8_t datl,uint8_t dath,uint8_t comm);  //write two bytes data and one byte command
void wr_xd (uint16_t dat,uint8_t comm);       //write a 16 bits data and one byte command
void wr_auto (uint8_t dat);               //Auto write
void wr_comm (uint8_t comm);       //write command
void wr_data (uint8_t dat);       //write data
void chk_busy (uint8_t autowr);    //test busy flag

 



#endif



