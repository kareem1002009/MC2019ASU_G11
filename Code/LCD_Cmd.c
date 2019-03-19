#include"C:\Keil\EE319Kware\inc/types.h"
#include"ports.h"
#include "DIO.h"
#include "delay.h"
void LCD_Cmd(char command)
{
	
		DIO_WritePort(PortE,mask2,STD_LOW); //RS=0
		DIO_WritePort(PortE,mask4,STD_LOW);//RW=0
	    GPIO_PORTB_DATA_R=command;//write command
			
		DIO_WritePort(PortE,mask3,STD_HIGH);//E=1
				delay_milli(2);

		DIO_WritePort(PortE,mask3,STD_LOW);//E=0
			delay_milli(2);
	 // DIO_WritePort(PortE,mask2,STD_HIGH); //RS=1
		//DIO_WritePort(PortA,mask4,STD_HIGH);//RW=1
		//   delay_milli(80);

}