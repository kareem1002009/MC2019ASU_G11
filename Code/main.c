#include "DIO.h"
#include "delay.h"
#include "LCD.h"	
#include "Button.h"
#include "stdio.h"
char y[9];
int count=0;
void countup()
{
	count++;
	LCD_Cmd(0x01);
		sprintf(y,"%d",count);
	  for(int i=0;i<3;i++)
	{
		if(y[i]=='\0') break;
			LCD_Data(y[i]);
		
	}
}
void countdown()
{
	if(count==0) return;
	count--;
	LCD_Cmd(0x01);
		sprintf(y,"%d",count);
	  for(int i=0;i<3;i++)
	{
		if(y[i]=='\0') break;
			LCD_Data(y[i]);
		
	}

}

void reset(){

		count=0;
	    LCD_Cmd(0x01);
		sprintf(y,"%d",count);
	  for(int i=0;i<3;i++)
	{
		if(y[i]=='\0') break;
			LCD_Data(y[i]);
	}

}

int main(){
	
Button_Init(PortA,mask6,PULL_UP);
Button_Init(PortA,mask7,PULL_UP);
Button_Init(PortE,mask5,PULL_UP);

	
Port_Init(PortF);
Port_SetPinDirection(PortF,mask1,PORT_PIN_OUT);//for indication that board is working
	
LCD_Init();
	

	sprintf(y,"%d",count);
	  for(int i=0;i<3;i++)
	{
		if(y[i]=='\0') break;
			LCD_Data(y[i]);
		
	}
	
			
	while(1)

	{
//RESET ON RELEASE
if(Button_IsPressed(PortA,mask6,PULL_UP)){
	while(1)
	{
	if(Button_IsPressed(PortA,mask6,PULL_UP)==0)
break;		
	
	}
	reset();
}

//INCREMANT while pressing
if(Button_IsPressed(PortA,mask7,PULL_UP))
{
	delay_milli(200);
	if(Button_IsPressed(PortA,mask7,PULL_UP))
		countup();
}
//DECREMENT while pressing
if(Button_IsPressed(PortE,mask5,PULL_UP))
{
	countdown();
	while(Button_IsPressed(PortE,mask5,PULL_UP));
}
DIO_WritePort(PortF,mask1,STD_HIGH);
		}
				 	
	return 0;
}