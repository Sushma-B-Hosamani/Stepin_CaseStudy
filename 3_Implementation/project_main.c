
#include "Act1.h"
#include "Act2.h"
#include "Act3.h"
#include <util/delay.h>

int main(void){

    /**
    * @brief A function to setup timer1 with channel A for pulse width modulation with wave generation mode of 10 bits fast PWM and prescaling of 64.
    *
    */
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);  //setting timer1 for PWM
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);     //8 prescalar
    DDRB|=(1<<PB1);                             //Setting PB1 as output pin

    Buttons_LED_Init();
    InitADC();     //Initialise the ADC
    InitUSART(103);

    uint16_t temp=0;
  //  char data;

    while(1)
    {
    if(SENSOR_ON)                   // Button Sensor ON
    {
            if(HEATER_ON)           // Heater ON
            {
                PORTB|=(1<<PB0);  // LED is ON
                _delay_ms(200);
                TimerWaveGenMode();
                outputbyPWM();
                _delay_ms(200);
                temp=DisplayTemperature();
                USARTWrite(temp);
                _delay_ms(200);
            }
             else
            {
                _delay_ms(200);
                OCR1A = 0; //make PWM output 0 if switch is off
                CLEAR_LED;  // LED is OFF
                _delay_ms(200);
                HEATER_OFF;
                _delay_ms(200);
            }
        }
        else
        {
            CLEAR_LED;  // LED is OFF
            OCR1A = 0; //make PWM output 0 if switch is off
            _delay_ms(200);
            HEATER_OFF;
            _delay_ms(200);
        }
    }

    return 0;
}
