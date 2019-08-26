
 #include "adc.h"

 void adc_init(void){
	 PINSEL1 = 0x00800000 ;// P0.28, AD0.1
 }

uint32_t adc_reading(void)
{
	uint32_t adcdata;
	AD0CR = 0x01200302 ;								// Select AD0.1, Select clock for ADC, Start of conversion
	
	while(!((adcdata = AD0GDR) & 0x80000000))		// Check end of conversion (Done bit) and read result
	{
	}
	return((adcdata >> 6) & 0x3ff) ;				// Return 10 bit result
}

void adc_disp_t6963c(void)
{
	uint32_t adc_result;	
	char *buffer_string;
	
  adc_result = adc_reading();
	lcd_disp_msg(0,9,(uint8_t*)"adc=");
	sprintf(buffer_string,"%u",adc_result);         // Display adc value
	lcd_disp_msg(0,10,(uint8_t*) buffer_string);
}
