 #include "irq.h"
 

 
void irq_init_timer_0(void)
{
	/*Assuming that PLL0 has been setup with CCLK = 60Mhz and PCLK also = 60Mhz.*/

	//----------Configure Timer0-------------

	T0CTCR = 0x0;

	T0PR = PRESCALE_IRQ-1; //(Value in Decimal!) - Increment T0TC at every 60000 clock cycles
	//Count begins from zero hence subtracting 1
	//60000 clock cycles @60Mhz = 1 mS

	T0MR0 = DELAY_MS-1; //(Value in Decimal!) Zero Indexed Count - hence subtracting 1

	T0MCR = MR0I | MR0R; //Set bit0 & bit1 to High which is to : Interrupt & Reset TC on MR0  

	//----------Setup Timer0 Interrupt-------------

	VICVectAddr4 = (unsigned )T0ISR; //Pointer Interrupt Function (ISR)

	VICVectCntl4 = 0x20 | 4; //0x20 (i.e bit5 = 1) -> to enable Vectored IRQ slot
	//0x4 (bit[4:0]) -> this the source number - here its timer0 which has VIC channel mask # as 4
	//You can get the VIC Channel number from Lpc214x manual R2 - pg 58 / sec 5.5

	VICIntEnable = 0x10; //Enable timer0 int

	T0TCR = 0x02; //Reset Timer
}

__irq void T0ISR(void)
{
	long int regVal;
	regVal = T0IR; //Read current IR value
		
	IO0PIN = ~IO0PIN; //Toggle the state of the Pins

	T0IR = regVal; //Write back to IR to clear Interrupt Flag
	VICVectAddr = 0x0; //This is to signal end of interrupt execution
}

void irq_init_clocks(void)
{
//	setupPLL0();
//	feedSeq(); //sequence for locking PLL to desired freq.
//	connectPLL0();
//	feedSeq(); //sequence for connecting the PLL as system clock

	//SysClock is now ticking @ 60Mhz!
	   
	VPBDIV = 0x01; // PCLK is same as CCLK i.e 60Mhz

	//PLL0 Now configured!
}
