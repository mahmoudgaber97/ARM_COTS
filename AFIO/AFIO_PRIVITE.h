#ifndef AFIO_PRIVITE_H_
#define AFIO_PRIVITE_H_
typedef struct {
	
	u32 AFIO_EVCR;
	u32 AFIO_MAPR;
	u32 AFIO_EXTICR1;
	u32 AFIO_EXTICR2;
	u32 AFIO_EXTICR3;
	u32 AFIO_EXTICR4;
	u32 AFIO_MAPR2;
	
	
	
}AFIO;



#define AFIO_Register   ((volatile AFIO*)0x40010000)

#define PA_selected    0b000
#define PB_selected    0b001
#define PC_selected    0b010
#define PD_selected    0b011
#define PE_selected    0b100

#define Px0_selected  0b0000
#define Px1_selected  0b0001
#define Px2_selected  0b0010
#define Px3_selected  0b0011
#define Px4_selected  0b0100
#define Px5_selected  0b0101
#define Px6_selected  0b0110
#define Px7_selected  0b0111
#define Px8_selected  0b1000
#define Px9_selected  0b1001
#define Px10_selected 0b1010
#define Px11_selected 0b1011
#define Px12_selected 0b1100
#define Px13_selected 0b1101
#define Px14_selected 0b1110
#define Px15_selected 0b1111

#define PORTA   0
#define PORTB   1
#define PORTC   2
#define PORTD   3
#define PORTE   4


#define PIN0   0
#define PIN1   1
#define PIN2   2
#define PIN3   3
#define PIN4   4
#define PIN5   5
#define PIN6   6
#define PIN7   7
#define PIN8   8
#define PIN9   9
#define PIN10  10
#define PIN11  11
#define PIN12  12
#define PIN13  13
#define PIN14  14
#define PIN15  15

#endif