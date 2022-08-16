#include"TYPES.h"
#include"MATH.h"
#include"AFIO_INTERFACE.h"
#include"AFIO_PRIVITE.h"
#include"AFIO_Config.h"

void AFIO_voidInti(u8 u8PORT_Selec, u8 u8PIN_Selec){
		/*EVOE BIT makes processor send signal to enable pinx and portx*/
	SET_BIT(AFIO_Register->AFIO_EVCR,7);
	
	AFIO_Register->AFIO_EVCR|=u8PORT_Selec<<4;
	AFIO_Register->AFIO_EVCR|=u8PIN_Selec;

	
	
}


/*SELECT exti lines for AFIO ,and pin*/
void AFIO_voidEXTI(volatile u8 u8EXTI_LINE,u8 u8EXTI_PIN){
	/*set EXTICR1 TO SELECT FOUR BITS*/
	if(u8EXTI_LINE<=3){
		AFIO_Register->AFIO_EXTICR1 &=(0b0000)|(u8EXTI_PIN<<(u8EXTI_LINE*4));
	}
	/*set EXTICR2 TO SELECT FOUR BITS*/

	else if(u8EXTI_LINE<=7)
	{
		        u8EXTI_LINE-=4;
		
		        AFIO_Register->AFIO_EXTICR2&=(0b0000)|(u8EXTI_PIN<<(u8EXTI_LINE*4));
	}
	/*set EXTICR3 TO SELECT FOUR BITS*/

	else if(u8EXTI_LINE<=11)
	{
		        u8EXTI_LINE-=8;
		
		        AFIO_Register->AFIO_EXTICR3&=(0b0000)|(u8EXTI_PIN<<(u8EXTI_LINE*4));
	}
	/*set EXTICR4 TO SELECT FOUR BITS*/
		else if(u8EXTI_LINE<=15)
	{
		        u8EXTI_LINE-=12;
		
		        AFIO_Register->AFIO_EXTICR4&=(0b0000)|(u8EXTI_PIN<<(u8EXTI_LINE*4));
	}
	
}
