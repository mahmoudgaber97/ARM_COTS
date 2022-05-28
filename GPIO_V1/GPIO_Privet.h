#ifndef GPIO_PRIVET_H_
#define GPIO_PRIVET_H_
typedef struct{
 volatile u32 GPIO_CRL;  
 volatile u32 GPIO_CRH; 
 volatile u32 GPIO_IDR; 
 volatile u32 GPIO_ODR;  
 volatile u32 GPIO_BSRR; 
 volatile u32 GPIO_BRR;  
 volatile u32 GPIO_LCKR; 

	
}GPIO;
#define GPIO_RegisterA  ((volatile GPIO*)0x40010800)
#define GPIO_RegisterB  ((volatile GPIO*)0x40010C00)
#define GPIO_RegisterC  ((volatile GPIO*)0x40011000)

 

#endif
