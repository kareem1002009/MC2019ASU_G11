#include "C:\Keil\EE319Kware\inc/types.h"
#include "ports.h"
#include "DIO.h"
#include "delay.h"
#include "LCD.h"
void LCD_Init()
{
		Port_Init(PortE);
		Port_Init(PortB);
	
		Port_SetPinDirection(PortE,mask2,PORT_PIN_OUT);  //RS->E2 
		Port_SetPinDirection(PortE,mask3,PORT_PIN_OUT);  //E->E3
		Port_SetPinDirection(PortE,mask4,PORT_PIN_OUT);  //RW->E4

		Port_SetPinDirection(PortB,0xff,PORT_PIN_OUT);
	
	 delay_micro(80);
	
		LCD_Cmd(0x01);
		LCD_Cmd(0x38);
		LCD_Cmd(0x0F);
	    LCD_Cmd(0x06);
		LCD_Cmd(0x0C);

}
