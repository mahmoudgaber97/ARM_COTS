/*
Created on: May 28, 2020
 *      Author: Mahmoud gaber
 */
#include"STD_TYPES.h"
#include"MATH.h"
#include"RCC_PRIVET.h"
#include"RCC_CONFIG.h"

void RCC_void_Configration(void){
	
	#if RCC_CLOCKSystem_State==RCC_HSI
	/* Bit 0 -> Enable The HSI Clock */
	SET_BIT (RCC_CR , 0);
	    /* BIT 1:0 -> Choose Between HSI OR HSE OR PLL */
		/* HSI Selected As A System Clock */
	 CLEAR_BIT ( RCC_CFGR , 0);
	 CLEAR_BIT ( RCC_CFGR , 1);
	 /* Bit 1 -> Checking While The HSI Clock Is Stable ,when HSI RDY bit has 1*/
	while(GET_BIT (RCC_CR,1)!=1);
	#elif RCC_CLOCKSystem_State==RCC_HSE
	/* Bit 16 -> Enable The HSE Clock */
	 SET_BIT (RCC_CR,16);
	 /* BIT 1:0 -> Choose Between HSI OR HSE OR PLL */
	/* HSE Selected As A System Clock */
	 SET_BIT ( RCC_CFGR,0); 
	 CLEAR_BIT ( RCC_CFGR,1);
	  /* Bit 1 -> Checking While The HSE Clock Is Stable ,when HSI RDY bit has 1*/
	while(GET_BIT ( RCC_CFGR,17)!=1);
	
	#elif RCC_CLOCKSystem_State==RCC_HSE_RC
	/* The HSEBYP Can Be Written Only When HSE Oscilator Is Disabled */
		/* HSE Clock Disabled */
	CLEAR_BIT ( RCC_CR,16);
	/*set bit 18 to drive bypass mode==RC mode*/
	 SET_BIT (RCC_CR,18);
	/* Bit 16 -> Enable The HSE Clock */
	 SET_BIT (RCC_CR,16);
	 /* BIT 1:0 -> Choose Between HSI OR HSE OR PLL */
	/* HSE Selected As A System Clock */
	 SET_BIT ( RCC_CFGR,0); 
	 CLEAR_BIT ( RCC_CFGR,1);
	  /* Bit 1 -> Checking While The HSE Clock Is Stable ,when HSI RDY bit has 1*/
	while(GET_BIT ( RCC_CFGR,17)!=1);
	
	
	#elif RCC_CLOCKSystem_State==RCC_PLL
	 
	 /* BIT 1:0 -> Choose Between HSI OR HSE OR PLL */
		/* PLL Selected As A System Clock */
	  SET_BIT ( RCC_CFGR,1); 
	  CLEAR_BIT ( RCC_CFGR,0);
	  SET_BIT ( RCC_CR,24); /*MAKE PLL ENABLE*/
	 
	   #if (RCC_PLL_Factor>=NO_CLOCK_FACTOR)&&(RCC_PLL_Factor<=PLL input clock_16)
		  
		   RCC_CFGR&=~(0b1111<<18);  /*clear all bit (18,19,20,21)*/
	       RCC_CFGR|=(RCC_PLL_Factor<<18); /*set rcc_pll_factor mode in bits 18,19,20,21*/
	   
	   
	   #elif (RCC_PLL_Factor < NO_CLOCK_FACTOR)||(RCC_PLL_Factor > PLL input clock_16)
		   #warning "Wrong Multiplication Factor"
	   #endif
	   
	   
	   #if (RCC_PLL_SYS==RCC_PLL_HSI_Dividedby_2)
		    CLEAR_BIT (RCC_CFGR,16 );  /*if clear bit in RCC-CFGR 16 IT IS MEAN HSI/2*/
		   
	   #elif (RCC_PLL_SYS==RCC_PLL_HSE_Dividedby_2)
		    /* Bit 16 -> Enable The HSE Clock */
	        SET_BIT (RCC_CR,16);
			SET_BIT ( RCC_CFGR,16);/*TO CHOSE HSE*/
		    SET_BIT ( RCC_CFGR,17);  /*CHESE HSE/2 BY SET BIT NO 17 IN RCC-CFGR*/
	   
	   #elif (RCC_PLL_SYS==RCC_PLL_HSE)
		 /* Bit 16 -> Enable The HSE Clock */
	 SET_BIT (RCC_CR,16);
	 
	  SET_BIT ( RCC_CFGR,16);        /*CHESE HSE BY SET BIT NO 16 IN RCC-CFGR*/
	  /* BIT 17 -> IF PLL Source IS HSE Then Choose Between Divide HSE/2 Or Not  */
			/* HSE Is Not Divided */
		 CLEAR_BIT (RCC_CFGR,17);	
			
	   #endif
	 
	#endif
	
}





void RCC_void_EnableClock(u8 COPY_u8Bus_ID,u8 COPY_u8Bus_Copy_u8Preph_ID)
{
	if(COPY_u8Bus_Copy_u8Preph_ID<=31){
		switch(COPY_u8Bus_ID){
			
			case RCC_AHB:   SET_BIT( RCC_AHBENR,COPY_u8Bus_Copy_u8Preph_ID); break;
			case RCC_APB1:  SET_BIT(RCC_APB1ENR ,COPY_u8Bus_Copy_u8Preph_ID); break;
			case RCC_APB2:  SET_BIT(RCC_APB2ENR ,COPY_u8Bus_Copy_u8Preph_ID); break;
			/*default /*return erorr*/ break;
		}
		
	}
	else{/*return erorr*/};
	
}

void RCC_void_DisableClock(u8 COPY_u8Bus_ID,u8 COPY_u8Bus_Copy_u8Preph_ID)
{
	if(COPY_u8Bus_Copy_u8Preph_ID<=31){
		switch(COPY_u8Bus_ID){
			
			case RCC_AHB:  CLEAR_BIT( RCC_AHBENR,COPY_u8Bus_Copy_u8Preph_ID); break;
			case RCC_APB1:  CLEAR_BIT(RCC_APB1ENR ,COPY_u8Bus_Copy_u8Preph_ID); break;
			case RCC_APB2:  CLEAR_BIT(RCC_APB2ENR ,COPY_u8Bus_Copy_u8Preph_ID); break;
		}
	/*	default /*return erorr*/
	}
	else{/*return erorr*/};
	
}
	

