# Test Plan

| Test ID | Description | I/P | O/P | Status |
| ------- | ----------- | ------- | ------- | ------------ 
| T01 | If driver seated, the user needs to enable the heater sensor | Heater sensor switch closed | Heater sensor on  | Pass |
| T02 | Enabling button and heater sensor, LED will be ON | Both switches closed | LED ON | PASS|
| T03 | Enabling any one of sensor | Any one of switch open | LED OFF | PASS |
| T04 | Reads temperature information from temperature sensor and convert analong inputs to digital using ADC | Read ADC from temperature sensor | Successfully read and covert digital values | PASS |
| T05 | Display temperature value by showing PWM | Read ADC values | Successfully displayed temperature  | PASS | 
| T06 | Display digital temperature values in serial monitor using USART | Read ADC values| Successfully displayed temperature | PASS | 
