
#define F_CPU 1000000UL
#include "avr/io.h"
#include"pwm.h"
void SWPWM_init(uint8_t dutyCycle )
{
	
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);
	DDRB|=(1<<PB3);  
	OCR0=dutyCycle;
}

 void SWPWM_changeDutyCycle(uint8_t newDutyCycle){
unsignd char var=((newDutyCycle/100)*255);
              OCR0=var;  
			

}

void SWPWM_start(void){
	uint8_t x=0;
	while(x>=100)
	SWPWM_changeDutyCycle(x);
	_delay_ms(1);
	x++;



}

