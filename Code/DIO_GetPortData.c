#include "Mcal.h"


uint8 DIO_GetPortData(uint8 port_index)
{
		
		switch(port_index){
		case PortA :  
			return GPIO_PORTA_DATA_R;
			break;
		case PortB :  
			return GPIO_PORTB_DATA_R;
			break;
case PortC :  
			return GPIO_PORTC_DATA_R;
			break;
case PortD :  
			return GPIO_PORTD_DATA_R;
			break;
case PortE :  
			return GPIO_PORTE_DATA_R;
			break;
case PortF :  
			return GPIO_PORTF_DATA_R;
			break;
default :return -1;
}
}
