#ifndef CONFIG_H_
#define CONFIG_H_




/*OPTIONS ARE
 RCC_HSI
 RCC_HSE
 
 RCC_PLL
   1.RCC_PLL_HSI_Dividedby_2
   2.RCC_PLL_HSE_Dividedby_2
   3.RCC_PLL_HSE
   
RCC_HSE_RC

*/

#define RCC_CLOCKSystem_State  RCC_HSI


#define RCC_PLL_SYS            RCC_PLL_HSI_Dividedby_2


/*
PLL_input_clock_2
PLL_input_clock_3
PLL_input_clock_4
PLL_input_clock_5
PLL_input_clock_6
PLL_input_clock_7
PLL_input_clock_8
PLL_input_clock_9
PLL_input_clock_10
PLL_input_clock_11
PLL_input_clock_12
PLL_input_clock_13
PLL_input_clock_14
PLL_input_clock_15
PLL_input_clock_16




*/

#define RCC_PLL_Factor  PLL_input_clock_16



#endif