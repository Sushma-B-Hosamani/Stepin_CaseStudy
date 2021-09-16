/**
 * @file Act1.h
 * @author Sushma Hosamani
 * @brief If button and heater pressed or not
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#define _ACTIVITY1_H

#define AVR_ATmega328
#include <avr/io.h>

/**
 * @brief A macro to check if the button is pressed or not.
 *
 */
#define SENSOR_ON !(PIND&(1<<PD4))

/**
 * @brief A macro to check if the heater is pressed or not.
 *
 */
#define HEATER_ON !(PIND&(1<<PD0))
#define HEATER_OFF PORTD&=~(1<<PD0)
/**
 * @brief A macro to turn on the LED
 *
 */
#define SET_LED PORTB|=(1<<PB0)

/**
 * @brief A macro to turn off the LED
 *
 */
#define CLEAR_LED PORTB&=~(1<<PB0)

void Buttons_LED_Init();


#endif //ACT1_H_INCLUDED


