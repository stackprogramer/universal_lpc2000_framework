#include "_7seg.h"

/* Getting started:comment andode 7segment binary and hex value
0  11000000   C0

1  11111001   F9

2  10100100   A4

3  10110000   B0

4  10011001   99

5  10010010   92

6  10000010   82

7  11111000   F8

8  10000000   80

9  10010000   90 */

void _7seg_delay(void)
 {
 int j;
 for(j=0;j<0xfff;j++);
 }

 
 
 uint8_t buufer_number_hex[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
 uint8_t  buffer_nth_digit[4]={0x08,0x04,0x02,0x01}; 
 
 
 
 
 void _7seg_init(void){		 
gpio_p1_output_init();
 }

 
 uint32_t _7seg_int_to_hex_convert( uint16_t decimal_input){
	uint8_t _1_th_digit,_2_th_digit,_3_th_digit,_4_th_digit;
	uint32_t temp_digit=0x00000000;
	uint32_t temp_nth_digit=0x00000000;

	 _1_th_digit=decimal_input%10;
	 decimal_input=decimal_input/10;
	 _2_th_digit=decimal_input%10;
	  decimal_input=decimal_input/10;
	 _3_th_digit=decimal_input%10;
	  decimal_input=decimal_input/10;
	 _4_th_digit=decimal_input%10;
	 
	 
	 temp_digit=buufer_number_hex[_1_th_digit]<<16;
	 temp_nth_digit=buffer_nth_digit[0]<<24;
	 temp_digit= temp_digit+temp_nth_digit;
	 gpio_p1_blinking_hex_value(temp_digit,1);
	 
	 
	  temp_digit=buufer_number_hex[_2_th_digit]<<16;
	 temp_nth_digit=buffer_nth_digit[1]<<24;
	 temp_digit= temp_digit+temp_nth_digit;
	 gpio_p1_blinking_hex_value(temp_digit,1);
	 
	  temp_digit=buufer_number_hex[_3_th_digit]<<16;
	 temp_nth_digit=buffer_nth_digit[2]<<24;
	 temp_digit= temp_digit+temp_nth_digit;
	 gpio_p1_blinking_hex_value(temp_digit,1);
	 
	  temp_digit=buufer_number_hex[_4_th_digit]<<16;
	 temp_nth_digit=buffer_nth_digit[3]<<24;
	 temp_digit= temp_digit+temp_nth_digit;
	 gpio_p1_blinking_hex_value(temp_digit,1);

	 return _4_th_digit;
 }
 
 void _7seg_disp(uint32_t number){
		 _7seg_int_to_hex_convert(number);
 }
