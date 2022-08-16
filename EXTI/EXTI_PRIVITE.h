

#ifndef EXTI_PRIVITE_H_
#define EXTI_PRIVITE_H_

#include"TYPES.h"
typedef struct {
	volatile u32 EXTI_IMR;
	volatile u32 EXTI_EMR;
	volatile u32 EXTI_RTSR;
	volatile u32 EXTI_FTSR;
	volatile u32 EXTI_SWIER;
	volatile u32 EXTI_PR;
	
	
	
}EXTI;

#define EXTI_Registers   ((EXTI*)0x40010400)
/*lines numbers*/
#define  EXTI_LINE0   0
#define  EXTI_LINE1   1
#define  EXTI_LINE2   2
#define  EXTI_LINE3   3
#define  EXTI_LINE4   4
#define  EXTI_LINE5   5
#define  EXTI_LINE6   6
#define  EXTI_LINE7   7
#define  EXTI_LINE8   8
#define  EXTI_LINE9   9
#define  EXTI_LINE10  10
#define  EXTI_LINE11  11
#define  EXTI_LINE12  12
#define  EXTI_LINE13  13
#define  EXTI_LINE14  14
#define  EXTI_LINE15  15


/*lines modes*/

#define 	Rasing_Edge   1
#define     Falling_Edge  2 
#define     On_Change     3


#endif
