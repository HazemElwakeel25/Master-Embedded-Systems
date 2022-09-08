/******************************************************************************************************************************/
/* Auther    : Hazem El-Wakeel                                                                                                */
/* Date      : 27 AUG 2022                                                                                                    */
/* version   : V01                                                                                                            */
/******************************************************************************************************************************/


#include "Platform_Types.h"
#include "uart.h"

uint8 PTR_String[100] = "Learn-in-Deeps:<Hazem>";
uint8 const PTR2_String[100] = "Learn-in-Deeps:<Hazem>";

void main(void){
	Uart_Send_String(PTR_String);
	
}