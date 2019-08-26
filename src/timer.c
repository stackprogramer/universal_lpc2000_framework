
#include "timer.h"



void  timer_delay_ns_approx(uint32_t  dly)
 { uint32_t  i;
   for(; dly>0; dly--) 
      for(i=0; i<10000; i++);
 } 

 
 void timer_0_init(void)
{
	/*Assuming that PLL0 has been setup with CCLK = 60Mhz and PCLK also = 60Mhz.*/

	T0CTCR = 0x0;
	T0PR =PRESCALE; //(Value in Decimal!) - Increment T0TC at every 60000 clock cycles
	//Count begins from zero hence subtracting 1
	//60000 clock cycles @60Mhz = 1 mS

	T0TCR = 0x02; //Reset Timer
}


void timer_0_delay_ms(unsigned int milliseconds) //Using Timer0
{
	T0TCR = 0x02; //Reset Timer

	T0TCR = 0x01; //Enable timer

	while(T0TC < milliseconds); //wait until timer counter reaches the desired delay

	T0TCR = 0x00; //Disable timer
}


void timer_init_clocks(void)
{
//    setupPLL0();
//    feedSeq(); //sequence for locking PLL to desired freq.
//    connectPLL0();
//    feedSeq(); //sequence for connecting the PLL as system clock
   
    //SysClock is now ticking @ 60Mhz!
       
    VPBDIV = 0x01; // PCLK is same as CCLK i.e 60Mhz
    
    //Using PLL settings as shown in : http://www.ocfreaks.com/lpc214x-pll-tutorial-for-cpu-and-peripheral-clock/
    //PLL0 Now configured!
}
