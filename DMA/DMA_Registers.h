#ifndef DMA_REGISTWRS_H_
#define DMA_REGISTWRS_H_

/*
#define DMA_ISR ((volatile* u32)0x40020000)
#define DMA_IFCR ((volatile* u32)0x40020004)
#define DMA_CCR1 ((volatile* u32)0x40020008)
#define DMA_CNDTR1 ((volatile* u32)0x4002000C)
#define DMA_CPAR1 ((volatile* u32)0x40020010)
#define DMA_CMAR1 ((volatile* u32)0x40020014)
#define DMA_CMAR1 ((volatile* u32)0x4002001C)
#define DMA_CNDTR2 ((volatile* u32)0x40020020)
#define DMA_CPAR2 ((volatile* u32)0x40020024)
#define DMA_CMAR2 ((volatile* u32)0x40020028)
#define DMA_CCR3 ((volatile* u32)0x40020030)
#define DMA_CNDTR3 ((volatile* u32)0x40020034)
#define DMA_CPAR3 ((volatile* u32)0x40020038)
#define DMA_CMAR3 ((volatile* u32)0x4002003C)


*/

typedef struct {

volatile u32 DMA_CCR;
volatile u32 DMA_CNDTR;
volatile u32 DMA_CPAR;
volatile u32 DMA_CMAR;
u32 reserved;


}DMA_CHANNELS;

typedef struct {
volatile u32 DMA_ISR;
volatile u32 DMA_IFCR;

DMA_CHANNELS channels[7];
}DMA_str;

#define DMA_Prepheral ((volatile  DMA_str*)0x40020000)

#endif
