#include"STD_TYPES.H"
#include"MATH.h"
#include"GPIO_Interface.h"
#include"GPIO_Privet.h"



void DirctionPIN_voidMODE_Configration(u8 u8PORTnumber,u8 u8Number_Bit,u8 u8Mode , u8 u8Configration_dirction)
 
 {
	 
	if(u8PORTnumber==0){
		if(0 <= u8Number_Bit<=7){
		GPIO_RegisterA->GPIO_CRL|=u8Mode<<(u8Number_Bit*4);
		GPIO_RegisterA->GPIO_CRL|=u8Configration_dirction<<((u8Number_Bit*4)+2);
		}
		else if(8<=u8Number_Bit<=15){
		GPIO_RegisterA->GPIO_CRH|=u8Mode<<(u8Number_Bit*4);
		GPIO_RegisterA->GPIO_CRH|=u8Configration_dirction<<((u8Number_Bit*4)+2);
		}
		else {/*return erorr*/};

	}
	else if (u8PORTnumber==1){
	 if(0<=u8Number_Bit<=7){
		GPIO_RegisterB->GPIO_CRL|=u8Mode<<(u8Number_Bit*4);
		GPIO_RegisterB->GPIO_CRL|=u8Configration_dirction<<((u8Number_Bit*4)+2);
		}
		else if(8<=u8Number_Bit<=15){
		GPIO_RegisterB->GPIO_CRH|=u8Mode<<(u8Number_Bit*4);
		GPIO_RegisterB->GPIO_CRH|=u8Configration_dirction<<((u8Number_Bit*4)+2);
		}
	
		else{/*return erorr*/};
	}
	else if(u8PORTnumber==2){
	 if(0<=u8Number_Bit<=2){
		GPIO_RegisterC->GPIO_CRL|=u8Mode<<(u8Number_Bit*4);
		GPIO_RegisterC->GPIO_CRL|=u8Configration_dirction<<((u8Number_Bit*4)+2);
		}
	 else{/*return erorr*/};
	
	}
	else{/*return erorr*/};
 }
	
	 void SETPIN_u8_VALUE(u8 u8PORTnumber,u8 u8Number_Bit){
		 
		 
		 if(u8PORTnumber==0){
			 
			 SET_BIT((GPIO_RegisterA->GPIO_ODR),u8Number_Bit);
			 
			 
			 
		 }
		 else if(u8PORTnumber==1){
			 SET_BIT((GPIO_RegisterB->GPIO_ODR),u8Number_Bit);
			 
			 
		 }
		  else if(u8PORTnumber==2){
			  if(0<=u8Number_Bit<=2){
			 SET_BIT(GPIO_RegisterC->GPIO_ODR,u8Number_Bit);
			  }
			  else{/*return erorr*/};
			 
		 }
		 else{/*return erorr*/};
	 }
	 
	 /* u8PORTValue
	   HIGHPORT
	   LOWPORT
	 */
	 
	 void PORTu8CONFIG(u8 u8PORT_NUMBER,u8 u8Configration_MODE,u8 u8PORTValue){
		 
		 
		 if(u8PORT_NUMBER==0){
			 
			  GPIO_RegisterA->GPIO_CRL=u8Configration_MODE;
			  GPIO_RegisterA->GPIO_CRH=u8Configration_MODE;
			  GPIO_RegisterA->GPIO_ODR=u8PORTValue;
			
		 }

		  else if(u8PORT_NUMBER==1){
		  GPIO_RegisterB->GPIO_CRL=u8Configration_MODE;
		  GPIO_RegisterB->GPIO_CRH=u8Configration_MODE;
		  GPIO_RegisterB->GPIO_ODR=u8PORTValue;
		  }
		  
		  else if(u8PORT_NUMBER==2)
		  {
			  GPIO_RegisterC->GPIO_CRL|=((0xfff00000)&(u8Configration_MODE));
			  GPIO_RegisterC->GPIO_ODR|=((0xfff00000)&(u8PORTValue));

		  }
		  else{/*return erorr*/};
	 }
	 
	 
	 
	 
	 u8 GETu8pIN(u8 u8PORTnumber,u8 u8Number_PIN){
		 
		 
		 u8 u8PIN_VALUE; 
		 
		 if(u8PORTnumber==0){
			 
			u8PIN_VALUE=GET_BIT(GPIO_RegisterC->GPIO_IDR,u8Number_PIN);
			 
		 }
		 
		 else if(u8PORTnumber==1){
			 
			u8PIN_VALUE=GET_BIT(GPIO_RegisterC->GPIO_IDR,u8Number_PIN);
			 
		 }
		 
		 else if(u8PORTnumber==2){
			 
			u8PIN_VALUE=GET_BIT(GPIO_RegisterC->GPIO_IDR,u8Number_PIN);
			 
		 }
		 else{/*return erorr*/};
		 
		 return u8PIN_VALUE;
	 }
	 






	 u32 u32Get_PORT(u8 u8PORTnumber){
		 
		 
		  u32 u8PORT_VALUE; 
		 
		 if(u8PORTnumber==0){
			 
			 u8PORT_VALUE=GPIO_RegisterA->GPIO_IDR;
			 
		 }
		 else if(u8PORTnumber==1){
			 
			 u8PORT_VALUE=GPIO_RegisterB->GPIO_IDR;
			 
		 }
		  else if(u8PORTnumber==2){
			 
			  u8PORT_VALUE=GPIO_RegisterC->GPIO_IDR;
			 
		 }
		 else{/*return erorr*/  };


		 return u8PORT_VALUE;
		 
		 
	 }
