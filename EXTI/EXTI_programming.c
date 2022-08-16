#include"TYPES.h"
#include"MATH.h"
#include"EXTI_INTERFACE.h"
#include"EXTI_PRIVITE.h"
#include"EXTI_CONFIGARATION.h"


void (*GCallBack)(void);

void EXTI_VoidInti(u8 u8NumberLlne, u8 u8Mode){
	
	switch(u8Mode){
		
		
		case Rasing_Edge:
			SET_BIT(EXTI_Registers->EXTI_RTSR,u8NumberLlne);
			break;
		case Falling_Edge:
			SET_BIT(EXTI_Registers->EXTI_FTSR,u8NumberLlne);
			break;
		case On_Change:
			SET_BIT(EXTI_Registers->EXTI_RTSR,u8NumberLlne);
		    SET_BIT(EXTI_Registers->EXTI_FTSR,u8NumberLlne);
		      break;
						 
	}
	
	
}


void EXTI_EnableVoidLine(u8 u8NumberLlne){
	if(u8NumberLlne<=15){
		 SET_BIT(EXTI_Registers->EXTI_IMR,u8NumberLlne);
	}
	
	else{};
}



void EXTI_DisableVoidLine(u8 u8NumberLlne){
	if(u8NumberLlne<=15){
		 CLEAR_BIT(EXTI_Registers->EXTI_IMR,u8NumberLlne);
	}
	
	else{};
	
}

void EXTI_voidSetPending(u8 u8NumberLlne){
		
	if(u8NumberLlne<=15){
		 SET_BIT(EXTI_Registers->EXTI_PR,u8NumberLlne);
		  
	}
	else{};
}

void EXTI_voidSW_Interrupt(u8 u8NumberLlne){
	
	if(u8NumberLlne<=15){
		 SET_BIT(EXTI_Registers->EXTI_IMR,u8NumberLlne);
		  CLEAR_BIT(EXTI_Registers->EXTI_PR,u8NumberLlne);
	}
	
	else{};
	
	
	
}


void CallBack(void(*ptr)(void)){
	
	GCallBack=ptr;
	
}
void EXTI0_IRQHandler(void){
	GCallBack();
	SET_BIT(EXTI_Registers->EXTI_PR,0);
	
}
