#include"TYPES.h"
#include"MATH.h"
#include"DMA_Interface.h"
#include"DMA_Registers.h"
#include"DMA_Configration.h"


void DMA_Inti(void){


 SET_BIT(DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR,14);                                /*MEM2MEM MODE*/
 set_registerValue(priority_level,13,DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR);       /*select very high priority*/
 set_registerValue(MEMSource,11,DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR);            /*memory soure 32bits*/
 set_registerValue(PerMEM_Destenation,9,DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR);    /*memory destenation 32bits*/
 SET_BIT(DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR,7);                                 /*MINC Enable*/

 SET_BIT(DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR,6);                                  /*DINK Enable*/
 CLEAR_BIT(DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR,5);          
  CLEAR_BIT(DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR,4);                             /* DATA DIrection read from memory */
   SET_BIT(DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR,3);                              /*ENABLE COMPLETE INTERRUPT*/                                                                     

}



void DMA_VoidCHannel_Configration(u32 Source_Address,u32 Destenation_Adress,u16 u32Data_Lenth){


 CLEAR_BIT(DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR,0);               /*disable charnnel*/
 DMA_Prepheral->channels[CHANNEL_ID].DMA_CNDTR= u32Data_Lenth;           /*put data lenth*/  

 DMA_Prepheral->channels[CHANNEL_ID].DMA_CPAR=Destenation_Adress;       /*PUTS DESTENATION ADDRESS*/
 DMA_Prepheral->channels[CHANNEL_ID].DMA_CMAR=Source_Address;           /*PUTS SOURCE ADDRESS*/

SET_BIT(DMA_Prepheral->channels[CHANNEL_ID].DMA_CCR,0);                   /*ENABLE CHANNEL*/

}
