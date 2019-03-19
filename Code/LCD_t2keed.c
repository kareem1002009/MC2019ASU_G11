include"C:\Keil\EE319Kware\inc/types.h"
#include"ports.h"
#include "DIO.h"
#include "delay.h"


void LCD_Data(char data)
{
			DIO_WritePort(PortA,mask2,STD_HIGH); //RS=1
		DIO_WritePort(PortA,mask4,STD_LOW);//RW=0
			delay_micro(500);
		DIO_WritePort(PortA,mask3,STD_HIGH);//E=1
				delay_milli(500);
		DIO_FillPortData(PortB,data);//write command
			delay_milli(800);
		DIO_WritePort(PortA,mask3,STD_LOW);//E=0
			delay_milli(500);


}