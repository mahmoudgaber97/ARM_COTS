#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

void DirctionPIN_voidMODE_Configration(u8 u8PORTnumber,u8 u8Number_Bit,u8 u8Mode , u8 u8Configration_dirction);


#define HIGH    1
#define LOW     0

#define HIGH_PORTL 0x00FF
#define HIGH_PORTH 0xFF00

#define GPIOA   0
#define GPIOB   1
#define GPIOC   2

#define PIN0    0
#define PIN1    1
#define PIN2    2
#define PIN3    3
#define PIN4    4
#define PIN5    5
#define PIN6    6
#define PIN7    7
#define PIN8    8
#define PIN9    9
#define PIN10    10
#define PIN11    11
#define PIN12    12
#define PIN13    13
#define PIN14    14
#define PIN15    15

void SETPIN_u8_VALUE(u8 u8PORTnumber,u8 u8Number_Bit);


/*MODE*/
#define INPUT 0B00
#define OUTPUT_SPEED10M 01
#define OUTPUT_SPEED2M 10
#define OUTPUT_SPEED50M 11

/*CONFIGRATION*/
/*AT INPUT MODE*/
#define Analog 00
#define Floating 01
#define PULL_UP_DOWN 10

/*AT output mode*/
#define Pushpull 00
#define Open_drain 01
#define AF_Pushpull 10
#define AF_Open_drain 11

void PORTu8CONFIG(u8 u8PORT_NUMBER,u8 u8Configration_MODE,u8 u8PORTValue);


/*this CONFIGRATION OF PORTS*/
#define INPUT_ANLOG               0X00000000
#define INPUT_FLOATING            0X44444444
#define INPUT_PULLUP_PULLDOWN     0X88888888

//For Speed 10
#define OUTPUT_SPEED_10MHZ_PP     0X11111111
#define OUTPUT_SPEED_10MHZ_OD     0X55555555
#define OUTPUT_SPEED_10MHZ_AFPP   0X99999999
#define OUTPUT_SPEED_10MHZ_AFOD   0XCCCCCCCC

//For Speed 2
#define OUTPUT_SPEED_2MHZ_PP      0X22222222
#define OUTPUT_SPEED_2MHZ_OD      0X66666666
#define OUTPUT_SPEED_2MHZ_AFPP    0XAAAAAAAA
#define OUTPUT_SPEED_2MHZ_AFOD    0XEEEEEEEE

//For Speed 2
#define OUTPUT_SPEED_50MHZ_PP     0x33333333
#define OUTPUT_SPEED_50MHZ_OD     0x77777777
#define OUTPUT_SPEED_50MHZ_AFPP   0xBBBBBBBB
#define OUTPUT_SPEED_50MHZ_AFOD   0XFFFFFFFF


u8 GETu8pIN(u8 u8PORTnumber,u8 u8Number_PIN);

u32 u32Get_PORT(u8 u8PORTnumber);
 

#endif
