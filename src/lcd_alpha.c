 #include "lcd_alpha.h"

void lcd_alpha_delay(){
	uint32_t i,j;
	for(i=0;i<65535;i++)
		for(j=0;j<32;j++);
}


void lcd_alpha_no_operation(){
	uint32_t i;
	for(i=0;i<12000;i++);
}



void lcd_alpha_command(uint8_t address){
CLR_RS;			//alpha_command select
lcd_alpha_no_operation();
IO0CLR=RESET;
lcd_alpha_no_operation();
IO0SET=address;
lcd_alpha_no_operation();
SET_E;		   //Chip Enabled
lcd_alpha_no_operation();
CLR_E;         //Chip Disabled
lcd_alpha_no_operation();
}

void lcd_alpha_data(uint8_t address){
IO0CLR=RESET;
lcd_alpha_no_operation();
SET_RS;       //alpha_data select
lcd_alpha_no_operation();
IO0SET=address;
lcd_alpha_no_operation();
SET_E;       //Chip Enabled
lcd_alpha_no_operation();
CLR_E;       //Chip Disabled
lcd_alpha_no_operation();
}
void lcd_alpha_lcd_init(){
	IO0DIR=0x000003FF;
	lcd_alpha_command(0x38);  //lcd_init
	lcd_alpha_command(0x0C);  //lcd_on and cursor off
}


void lcd_alpha_16x2_display(){
	char a,b,x;
	lcd_alpha_lcd_init();
	for(x=0;x<100;x++)
		{
			  a=x%10;
    		b=x/10;
    		lcd_alpha_data(b+48);
    		lcd_alpha_data(a+40);
    		lcd_alpha_delay();
    		lcd_alpha_command(0x01);
		}
	
}
void lcd_alpha_16x2_display_ascii_code(uint8_t character){
	      lcd_alpha_lcd_init();
    		lcd_alpha_data(character);
    		lcd_alpha_delay();
    		lcd_alpha_command(0x01);	
}
void lcd_alpha_16x2_display_string(uint8_t *msg,size_t array_size){
	      lcd_alpha_lcd_init();
	      for(size_t i=0;i<array_size;i++)
	      { 
    		lcd_alpha_data(*(msg+i));
				}
    		lcd_alpha_delay();
    		lcd_alpha_command(0x01);	
}
