# Test Plan

| Test ID | Description | EXP I/P | EXP O/P | Actual O/P | Type of Test |
| ------- | ----------- | ------- | ------- | ---------- | ------------ 
| T01 | If passenger and driver seated, the user needs to enable the heater sensor | Heater sensor switch closed | Heater sensor on | Heater sensor on | Requirement based |
| T02 | Enabling both button and heater sensor, LED will be ON (binary output) | Both switches closed | LED ON | LED ON | Requirement based |
| T03 | Enabling any one of sensor not both | Any one of switch open | LED OFF | LED OFF | Boundary based |
| T04 | Reads temperature information from temperature sensor and convert analong inputs to digital using ADC | Read ADC from temperature sensor | Successfully read and covert digital values |  Successfully read and covert digital values | Requirement based |
| T05 | Display CDD-CRO will give the temperature value by showing PWM | Read ADC values | Successfully displayed temperature | Successfully displayed temperature | Requirement based | 
| T06 | Display digital temperature values in serial monitor using USART communication protocol | Read ADC values | Successfully displayed temperature | Successfully displayed temperature | Requirement based | 
