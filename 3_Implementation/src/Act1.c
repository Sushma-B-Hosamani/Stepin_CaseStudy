/**
 * @file Act1.c
 * @author Sushma Hosamani
 * @brief  A function to operate the button and heater sensor
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include "Act1.h"


void Buttons_LED_Init()
{
     /*Configure LED and Switch pins*/
    DDRB|=(1<<PB0);//setting PB0=1 for led
    DDRD&=~(1<<PD0);//making it 0
    PORTD|=(1<<PD0);//matching bit
    DDRD&=~(1<<PD4);//making 0
     PORTD|=(1<<PD4);//setting bit

}
