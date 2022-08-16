
#include"TYPES.h"

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_
void EXTI_VoidInti(u8 u8NumberLlne, u8 u8Mode);
void EXTI_EnableVoidLine(u8 u8NumberLlne);
void EXTI_DisableVoidLine(u8 u8NumberLlne);
void EXTI_voidSetPending(u8 u8NumberLlne);
void EXTI_voidSW_Interrupt(u8 u8NumberLlne);

#endif