/*
File Name:RELAY_program
Author:DohaOsama
Date:18/9/2021
Description:RELAY Driver
version 1.0
*/

#include "../../LIB/BIT_MATH.h"

#include "../../LIB/STD_TYPES.h"

#include "../../MCAL/DIO/DIO_interface.h"

#include "RELAY_interface.h"

#include "RELAY_private.h"

#include "RELAY_config.h"

#include <util/delay.h>

void RELAY_voidInit(void)//intiation function
{
	 DIO_voidSetPinDirection(RELAY_PORT,RELAY_PIN0,OUTPUT);
	 DIO_voidSetPinValue(RELAY_PORT,RELAY_PIN0,LOW);
}
void RELAY_voidOn(void)
{
	 DIO_voidSetPinValue(RELAY_PORT,RELAY_PIN0,HIGH);
	 
}
void RELAY_voidOff(void)
{
	 DIO_voidSetPinValue(RELAY_PORT,RELAY_PIN0,LOW);
}