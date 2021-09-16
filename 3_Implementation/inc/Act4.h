/**
 * @file Act4.h
 * @author Sushma Hosamani
 * @brief Display temperature using USART 
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
/**
 * @brief Function to initialize the USART communication
 *
 * @param ubrrvalue unsigned integer to set the baud rate to 9600
 */
void USART_Init(uint16_t ubrrvalue);
/**
 * @brief Function to write the character to the USART buffer
 *
 * @param tempvalue type integer is temperature value which is passed as input value
 */
void USART_Write(char tempvalue);
/**
 * @brief Function for different ADC value temperature range
 *
 * @return char return temperature value
 */
char DisplayTemperature();

#endif // ACT4_H_INCLUDED

