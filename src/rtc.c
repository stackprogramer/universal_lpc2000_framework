 #include "rtc.h"

void rtc_init(void)
{
 ILR  = 0X03;                             /* Interrupt from counter increment block  */
 CCR  = 0X11;                             /* RTC Time counters enable                */
 CIIR = 0X01;                             /* Interrupt generated in each second      */
 SEC  = 0x00;                             /* Load initial value into seconds register*/
 MIN  = 0x00;                             /* Load initial value into minutes register*/
 HOUR = 0x00;                             /* Load initial value into hour register   */
}
 

void rtc_disp_t6963c(void)
{       char *buffer_string;

      	lcd_disp_msg(0,9,(uint8_t*)"Time:"); 
			
			 sprintf(buffer_string,"%u",HOUR/10);         // Display hour submultiple
			 lcd_disp_msg(0,10,(uint8_t*) buffer_string);
			 
			 sprintf(buffer_string,"%u",HOUR%10);         // Display hour mod
			 lcd_disp_msg(1,10,(uint8_t*) buffer_string);
			 
       lcd_disp_msg(2,10,(uint8_t*)":");
			 
			 sprintf(buffer_string,"%u",MIN/10);          // Display MIN submultiple
			 lcd_disp_msg(3,10,(uint8_t*) buffer_string);
			 
			 sprintf(buffer_string,"%u",MIN%10);         // Display min mod
			 lcd_disp_msg(4,10,(uint8_t*) buffer_string);
			 
       lcd_disp_msg(5,10,(uint8_t*)":");
			 
			 sprintf(buffer_string,"%u",SEC/10);         // Display sec submultiple
			 lcd_disp_msg(6,10,(uint8_t*) buffer_string);
			 
			 sprintf(buffer_string,"%u",SEC%10);         // Display sec mod
			 lcd_disp_msg(7,10,(uint8_t*) buffer_string);
			 	
	
}


//void rtc_disp_t6963c(uint32_t x,uint32_t y)
//{      char *buffer_string;
//       uint8_t *msg_string;			
//    	 msg_string=(uint8_t*)"Time:";               	// Display Time: 
//			 lcd_disp_msg(x,y,msg_string); 
//			
//			 sprintf(buffer_string,"%u",HOUR/10);         // Display hour submultiple
//			 msg_string=(uint8_t*) buffer_string;
//			 lcd_disp_msg(x,y+1,msg_string);
//			 
//			 sprintf(buffer_string,"%u",HOUR%10);         // Display hour mod
//			 msg_string=(uint8_t*) buffer_string;
//			 lcd_disp_msg(x+1,y+1,msg_string);
//			 
//			 msg_string=(uint8_t*)":";		 
//       lcd_disp_msg(x+2,y+1,msg_string);
//			 
//			 sprintf(buffer_string,"%u",MIN/10);          // Display MIN submultiple
//			 msg_string=(uint8_t*) buffer_string;
//			 lcd_disp_msg(x+3,y+1,msg_string);
//			 
//			 sprintf(buffer_string,"%u",MIN%10);         // Display min mod
//			 msg_string=(uint8_t*) buffer_string;
//			 lcd_disp_msg(x+4,y+1,msg_string);
//			 
//			 msg_string=(uint8_t*)":";		 
//       lcd_disp_msg(x+5,y+1,msg_string);
//			 
//			 sprintf(buffer_string,"%u",SEC/10);         // Display sec submultiple
//			 msg_string=(uint8_t*) buffer_string;
//			 lcd_disp_msg(x+6,y+1,msg_string);
//			 
//			 sprintf(buffer_string,"%u",SEC%10);         // Display sec mod
//			 msg_string=(uint8_t*) buffer_string;
//			 lcd_disp_msg(x+7,y+1,msg_string);
//				
//	
//}
