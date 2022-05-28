#ifndef RCC_PRIVET_H_
#define RCC_PRIVET_H_


#define RCC_AHB  1
#define RCC_APB1 2
#define RCC_APB2 3






#define RCC_CR         *((u32*)0x40021000)
#define RCC_CFGR       *((u32*)0x40021004)
#define RCC_CIR        *((u32*)0x40021008)
#define RCC_APB2RSTR   *((u32*)0x4002100C)
#define RCC_APB1RSTR   *((u32*)0x40021010)
#define RCC_AHBENR     *((u32*)0x40021014)
#define RCC_APB2ENR    *((u32*)0x40021018)
#define RCC_APB1ENR    *((u32*)0x4002101C)
#define RCC_BDCR       *((u32*)0x40021020)
#define RCC_CSR        *((u32*)0x40021024)


 #define RCC_HSI          0
 #define RCC_HSE          1
 #define RCC_HSE_CYRESTAL 2
 #define RCC_HSE_RC       3
 #define RCC_PLL          4
 #define RCC_PLL_HSI_Dividedby_2 5
 #define RCC_PLL_HSE_Dividedby_2 6
 #define RCC_PLL_HSE             7
 
 
 

#define PLL_input_clock_2    0
#define PLL_input_clock_3    1
#define PLL_input_clock_4    2
#define PLL_input_clock_5    3
#define PLL_input_clock_6    4
#define PLL_input_clock_7    5 
#define PLL_input_clock_8    6
#define PLL_input_clock_9    7 
#define PLL_input_clock_10   8
#define PLL_input_clock_11   9
#define PLL_input_clock_12   10
#define PLL_input_clock_13   11
#define PLL_input_clock_14   12
#define PLL_input_clock_15   13
#define PLL_input_clock_16   14




/**********************************************************************/
/*                                                                    */
/*                 Peripheral Clock Enable For AHB Bus                */
/*                              0-DMA1                                */
/*                              1-DMA2                                */
/*                              2-SRAM                                */
/*                              3-RESERVED                            */
/*                              4-FLITF                               */
/*                              5-RESERVED                            */
/*                              6-CRC                                 */
/*                              7-RESERVED                            */
/*                              8-FSMC                                */
/*                              9-RESERVED                            */
/*                              10-SDIO                               */
/*                                                                    */
/**********************************************************************/



#define    DMA1_RCC         0
#define    DMA2_RCC         1
#define    SRAM_RCC         2
#define    FLITF_RCC        4
#define    CRC_RCC          6
#define    FSMC_RCC         8
#define    SDIO_RCC         10



/**********************************************************************/
/*                                                                    */
/*                 Peripheral Clock Enable For APB2 Bus               */
/*                              0-AFIO                                */
/*                              1-RESERVED                            */
/*                              2-GPIOA                               */
/*                              3-GPIOB                               */
/*                              4-GPIOC                               */
/*                              5-GPIOD                               */
/*                              6-GPIOE                               */
/*                              7-GPIOF                               */
/*                              8-GPIOG                               */
/*                              9-ADC1                                */
/*                              10-ADC2                               */
/*                              11-TIM1                               */
/*                              12-SPI1                               */
/*                              13-TIM8                               */
/*                              14-USART1                             */
/*                              15-ADC3                               */
/*                              16-RESERVED                           */
/*                              17-RESERVED                           */
/*                              18-RESERVED                           */
/*                              19-TIM9                               */
/*                              20-TIM10                              */
/*                              21-TIM11                              */
/*                                                                    */
/**********************************************************************/




#define    AFIO_RCC         0
#define    GPIOA_RCC        2
#define    GPIOB_RCC        3
#define    GPIOC_RCC        4
#define    GPIOD_RCC        5
#define    GPIOE_RCC        6
#define    GPIOF_RCC        7
#define    GPIOG_RCC        8
#define    ADC1_RCC         9
#define    ADC2_RCC         10
#define    TIM1_RCC         11
#define    SPI1_RCC         12
#define    TIM8_RCC         13
#define    USART1_RCC       14
#define    ADC3_RCC         15
#define    TIM9_RCC         19
#define    TIM10_RCC        20
#define    TIM11_RCC        21



/**********************************************************************/
/*                                                                    */
/*                 Peripheral Clock Enable For APB1 Bus               */
/*                              0-TIM2                                */
/*                              1-TIM3                                */
/*                              2-TIM4                                */
/*                              3-TIM5                                */
/*                              4-TIM6                                */
/*                              5-TIM7                                */
/*                              6-TIM12                               */
/*                              7-TIM13                               */
/*                              8-TIM14                               */
/*                              9-RESERVED                            */
/*                              10-RESERVED                           */
/*                              11-WWDG                               */
/*                              12-RESERVED                           */
/*                              13-RESERVED                           */
/*                              14-SPI2                               */
/*                              15-SPI3                               */
/*                              16-RESERVED                           */
/*                              17-USART2                             */
/*                              18-USART3                             */
/*                              19-UART4                              */
/*                              20-UART5                              */
/*                              21-I2C1                               */
/*                              22-I2C2                               */
/*                              23-USB                                */
/*                              24-RESERVED                           */
/*                              25-CAN                                */
/*                              26-RESERVED                           */
/*                              27-BKP                                */
/*                              28-PWR                                */
/*                              29-DAC                                */
/*                                                                    */
/**********************************************************************/




#define    TIM2_RCC         0
#define    TIM3_RCC         1
#define    TIM4_RCC         2
#define    TIM5_RCC         3
#define    TIM6_RCC         4
#define    TIM7_RCC         5
#define    TIM12_RCC        6
#define    TIM13_RCC        7
#define    TIM14_RCC        8
#define    WWDG_RCC         11
#define    SPI2_RCC         14
#define    SPI3_RCC         15
#define    USART2_RCC       17
#define    USART3_RCC       18
#define    UART4_RCC        19
#define    UART5_RCC        20
#define    I2C1_RCC         21
#define    I2C2_RCC         22
#define    USB_RCC          23
#define    CAN_RCC          25
#define    BKP_RCC          27
#define    PWR_RCC          28
#define    DAC_RCC          29





#define    AHB_BUS       0
#define    APB1_BUS      1
#define    APB2_BUS      2





#endif
