/**
 * @file Act4.c
 * @author Sushma Hosamani
 * @brief Function to initialize the USART communication 
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include "Act2.h"
#include "Act3.h"
#include "Act4.h"

void InitUSART(uint16_t ubrrvalue)
{   /* set baudrate*/
    UBRR0L = ubrrvalue;
    UBRR0H = (ubrrvalue>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01);
    /* Enable the receiver and transmitter*/
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}
/**
 * @brief function to write to USART buffer
 *
 * @param tempvalue temperature values
 */
void USARTWrite(char tempvalue)
{
  while(!(UCSR0A & (1<<UDRE0)))
  { }
UDR0 = tempvalue;
}
/**
 * @brief funtion to display temperature values
 *
 * @return char temperature value
 */
char DisplayTemperature()
{
    char temperature;

     if((ReadADC(0)>=0) && (ReadADC(0)<=209)){

       temperature= 20;
    }
    else if((ReadADC(0)>=210) && (ReadADC(0)<=509)){

        temperature= 25;
    }
    else if((ReadADC(0)>=510) && (ReadADC(0)<=709)){

        temperature= 29;
    }
    else if((ReadADC(0)) && (ReadADC(0)<=1024)){

        temperature= 33;
    }
    else
    {
        temperature= 0;
    }
    return temperature;
}
