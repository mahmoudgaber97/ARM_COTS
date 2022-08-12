/*
ENG:Mahmoud gabe
5/4/2020
*/
#include"TYPES.h"
#ifndef NVIC_PRIVITE_H_
#define NVIC_privite_H_
volatile u8 NVIC_IPR[128];


#define NVIC_ISER0 *((u32*)0xE000E100)
#define NVIC_ISER1 *((u32*)0xE000E104)
#define NVIC_ICER0 *((u32*)0xE000E180)
#define NVIC_ICER1 *((u32*)0xE000E184)
#define NVIC_ISPR0 *((u32*)0xE000E200)
#define NVIC_ISPR1 *((u32*)0xE000E204)
#define NVIC_ICPR0 *((u32*)0xE000E280)
#define NVIC_ICPR1 *((u32*)0xE000E284)
#define NVIC_IABR0 *((volatile u32*)0xE000E300)
#define NVIC_IABR1 *((volatile u32*)0xE000E304)


#define Group_16Sub_Group_0  0xFA050300
#define Group_8Sub_Group_2   0xFA050400
#define Group_4Sub_Group_4   0xFA050500
#define Group_2Sub_Group_8   0xFA050600
#define Group_0Sub_Group_16  0xFA050700
#define SCB_AIRCR *((volatile u32*)0xE000E014)


#define NVIC_IPR ( ( volatile u8  *) 0xE000E400)


#endif
