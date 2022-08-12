/*
ENG:Mahmoud gabe
5/4/2020
*/
#include"TYPES.h"
#ifndef NVIC_INTERFACE_H_
#define  NVIC_INTERFACE_H_
u8 Enable_u8NVIC_Pripheral(u8 Pripheral_Number);
u8 Disable_u8NVIC_Pripheral(u8 Pripheral_Number);
u8 SetPending_u8NVIC_Pripheral(u8 Pripheral_Number);
u8 ClearPending_u8NVIC_Pripheral(u8 Pripheral_Number);
u8 Chack_8ActiveFlage(u8 Pripheral_Number);
void Select_proirity(u8 Prepheral_Index,u32 group_supGroup_Option,u8 volatile Group_Proiriy,u8 volatile subGroup_proirity);


#endif
