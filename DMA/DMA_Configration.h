
#ifndef DMA_CONFIGRATION_H_
#define DMA_CONFIGRATION_H_

#define LOW       0b00
#define Medium    0b01
#define High      0b10
#define Very_high 0b11

#define  TRSize_word 0b10
#define  TRSize_half_word 0b01
#define  TRSize_BYTE 0b00



#define CHANNEL_ID   1
/*
 0,1,2,3,4,5,6


*/

#define  priority_level   Very_high
/*

	Low
	Medium
	High
	Very high
*/

#define MEMSource          TRSize_word
#define PerMEM_Destenation TRSize_word
/*
	TRSize_word 
    TRSize_half_word 
	TRSize_BYTE
*/
#endif
