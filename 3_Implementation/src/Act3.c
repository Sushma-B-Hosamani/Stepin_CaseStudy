/**
 * @file Act3.c
 * @author Sushma Hosamani
 * @brief   A function to setup timer1 with channel A for pulse width modulation with wave generation 
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include "Act3.h"
#include "Act2.h"


void TimerWaveGenMode(void){

    SET_TIMER1A_FAST_PWM; //setting timer1 for PWM
    PRESCALE_TIMER_64; //64 prescalar
    SET_PWM_AS_OUTPUT; //Setting PB1 as output pin

}

/**
 * @brief A function which receives 10 bit of ADC input from temperature sensor and outputs as a fast PWM waveform.
 *
 * @param ADC_val
 * @return char
 */

void outputbyPWM(void){
   if((ReadADC(0)>=0) && (ReadADC(0)<=209)){

        OCR1A = 205; /*20% duty cycle*/
        _delay_ms(20);
    }
    else if((ReadADC(0)>=210) && (ReadADC(0)<=509)){

        OCR1A = 410; /*40% duty cycle*/
        _delay_ms(20);
    }
    else if((ReadADC(0)>=510) && (ReadADC(0)<=709)){

        OCR1A = 717;/*70% duty cycle*/
        _delay_ms(20);
    }
    else if((ReadADC(0)>=710) && (ReadADC(0)<=1024)){

        OCR1A = 973; /*95% duty cycle*/
        _delay_ms(20);
    }
    else
    {
        OCR1A = 0; /*0% output*/
    }

}
