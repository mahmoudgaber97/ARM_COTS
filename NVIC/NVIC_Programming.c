
/*
ENG:Mahmoud gabe
5/4/2020
*/

#include"TYPES.h"
#include"NVIC_INTERFACE.h"
#include"NVIC_privite.h"
#include"MATH.h"

/*enable NVIC FOR Preipherals*/

void Select_proirity(u8 Prepheral_Index,u32 group_supGroup_Option,u8 volatile Group_Proiriy,u8 volatile subGroup_proirity){

/*Drive core prepherail SCB */
SCB_AIRCR=group_supGroup_Option; /*open SCB_AIRCR register to write password and select number
of group and sub group*/
switch(group_supGroup_Option){

case Group_16Sub_Group_0:
	Group_Proiriy<<=4;
	NVIC_IPR[Prepheral_Index]=(Group_Proiriy);
	break;
case Group_8Sub_Group_2:
	Group_Proiriy<<=5;
	subGroup_proirity<<=4;

	NVIC_IPR[Prepheral_Index]=(Group_Proiriy|subGroup_proirity)&0X10;

	break;
case Group_4Sub_Group_4:
	Group_Proiriy=Group_Proiriy<<6;
	subGroup_proirity=subGroup_proirity<<5;

	NVIC_IPR[Prepheral_Index]=(Group_Proiriy|subGroup_proirity);
	break;
case Group_2Sub_Group_8:
	Group_Proiriy<<=7;
	subGroup_proirity<<=6;

	NVIC_IPR[Prepheral_Index]=(Group_Proiriy|subGroup_proirity)&0X10;
	break;
case Group_0Sub_Group_16:

		subGroup_proirity<<=7;

	NVIC_IPR[Prepheral_Index]=(Group_Proiriy)&0X10;
	break;
default:
	break;

}


}


u8 Enable_u8NVIC_Pripheral(u8 Pripheral_Number){
	u8 return_error;
	if(Pripheral_Number<=31){
		NVIC_ISER0=(1<<Pripheral_Number);
		return_error=0; 
		return return_error;/*return 0 if set register   */
	}
	else if(Pripheral_Number<=64)
	{
		NVIC_ISER1=(1<<(Pripheral_Number-32));
		return_error=0;
		return return_error;/*return 0 if set register   */
	}
	else {
		return_error=1;
		return return_error; /*return 1 if set register   */
	}
		
	
	
}




/*disable NVIC FOR Preipherals*/
u8 Disable_u8NVIC_Pripheral(u8 Pripheral_Number){
	u8 return_error;
	if(Pripheral_Number<=31){
		NVIC_ICER0=1<<Pripheral_Number; 
		return_error=0; 
		return return_error;/*return 0 if set register   */
	}
	else if(Pripheral_Number<=64)
	{
		NVIC_ICER1=1<<(Pripheral_Number-31);
		return_error=0;
		return return_error;/*return 0 if set register   */
	}
	else {
		return_error=1;
		return return_error; /*return 1 if set register   */
	}
			
}


/*set pendig flag to  test NVIC FOR Preipherals*/
u8 SetPending_u8NVIC_Pripheral(u8 Pripheral_Number){
	u8 return_error;
	if(Pripheral_Number<=31){
		NVIC_ISPR0=(1<<Pripheral_Number);
		return_error=0; 
		return return_error;/*return 0 if set register   */
	}
	else if(Pripheral_Number<=64)
	{
		NVIC_ISPR1=(1<<(Pripheral_Number-32));
		return_error=0;
		return return_error;/*return 0 if set register   */
	}
	else {
		return_error=1;
		return return_error; /*return 1 if set register   */
	}
			
}




/*clear pendig flag to  test NVIC FOR Preipherals*/
u8 ClearPending_u8NVIC_Pripheral(u8 Pripheral_Number){
	u8 return_error;
	if(Pripheral_Number<=31){
		NVIC_ICPR0=1<<Pripheral_Number; 
		return_error=0; 
		return return_error;/*return 0 if set register   */
	}
	else if(Pripheral_Number<=64)
	{
		NVIC_ICPR1=1<<(Pripheral_Number-31);
		return_error=0;
		return return_error;/*return 0 if set register   */
	}
	else {
		return_error=1;
		return return_error; /*return 1 if set register   */
	}
			
}



u8 Chack_8ActiveFlage(u8 Pripheral_Number){
	u8 u8State;
	if(Pripheral_Number<=31){
		u8State=GET_BIT(NVIC_IABR0,Pripheral_Number);
		return u8State;/*return Active Flage state  */
	}
	else if(Pripheral_Number<=64)
	{
		Pripheral_Number-=31;
		u8State=GET_BIT(NVIC_IABR1,Pripheral_Number);
		return u8State;/*return Active Flage state  */
	}
	else{
		return 0;

	}
			

}
