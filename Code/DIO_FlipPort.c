#include "Mcal.h"


void DIO_FlipPort (uint8 port_index ,uint8 pins_mask)
{
	switch(port_index){
		case PortA :  
			GPIO_PORTA_DATA_R^=pins_mask;
			break;
		case PortB :  
			GPIO_PORTB_DATA_R^=pins_mask;
			break;
case PortC :  
			GPIO_PORTC_DATA_R^=pins_mask;
			break;
case PortD :  
			GPIO_PORTD_DATA_R^=pins_mask;
			break;
case PortE :  
			GPIO_PORTE_DATA_R^=pins_mask;
			break;
case PortF :  
			GPIO_PORTF_DATA_R^=pins_mask;
			break;
}
}
