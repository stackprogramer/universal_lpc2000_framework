#include "gpio.h"
void gpio_delay_ms(uint32_t count)
{
  unsigned int j=0,i=0;
  for(j=0;j<count;j++)  //For cause delay as ms second
  {
    for(i=0;i<3000;i++);
  }
}
/*
* Initialize P1 gpio for output
*/
void gpio_p1_output_init(void)
{  PINSEL2 = 0x000000;  //Configure the P1 Pins for GPIO;
   IODIR1 = 0xffffffff; //Configure the P1 pins as OUTPUT;
}
/*
* Blinking all  P1 GPIO port with delay value.
* For example gpio_p1_blinking_all(200);
*/

void gpio_p1_blinking_all(uint32_t delay_ms_value){
	  IOSET1 = 0xffffffff;     // Make all the Port pins as high  
         delay_ms(delay_ms_value);

       IOCLR1 = 0xffffffff;     // Make all the Port pins as low  
         delay_ms(delay_ms_value);
}

/* 
*  Blinking P1 GPIO with hex value input( for set and clear gpio registers) and delay value input for
*  for setting period time of blinking
*  for example gpio_p1_blinking_hex_value(0xf00f0000,1);
*/

void gpio_p1_blinking_hex_value(uint32_t hex_value,uint32_t delay_ms_value){
	  IOSET1 =hex_value;     // Make all the Port pins as high  
         delay_ms(delay_ms_value);

       IOCLR1 =hex_value;     // Make all the Port pins as low  
         delay_ms(delay_ms_value);
}

