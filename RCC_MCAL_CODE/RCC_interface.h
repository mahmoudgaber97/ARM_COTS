/******** Author: mahmoud gaber *********/
/******** Date  : 17/1/2020 *********/
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_


#define ENABLE 1
#define DISABLE 0

#define AHB  0
#define APB1 1
#define APB2 3

void MRCC_voidInti(void);
void MRCC_voidPrescaler(u8 u8Bus_ID,u8 u8Prescaler_ID);
void MRCC_voidClkEnable(u8 u8Bus_ID,u8 u8Peripheral_ID,u8 u8Peripheral_CLK_State);

#endif
