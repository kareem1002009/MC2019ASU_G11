#ifndef BUTTON
#define BUTTON






#include"C:\Keil\EE319Kware\inc/types.h"
void Button_Init(uint8 port_index,uint8 pins_mask,Button_Type type);
bool Button_IsPressed(uint8 port_index,uint8 pins_mask,Button_Type type);

#endif