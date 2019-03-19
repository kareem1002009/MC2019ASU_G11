#include "Mcal.h"


void DIO_FillPortData(uint8 port_index,uint8 data)
{
	
		switch(port_index){
		case PortA :  
			GPIO_PORTA_DATA_R=data;
			break;
		case PortB :  
			GPIO_PORTB_DATA_R=data;
			break;
case PortC :  
			GPIO_PORTC_DATA_R=data;
			break;
case PortD :  
			GPIO_PORTD_DATA_R=data;
			break;
case PortE :  
			GPIO_PORTE_DATA_R=data;
			break;
case PortF :  
			GPIO_PORTF_DATA_R=data;
			break;
}
}