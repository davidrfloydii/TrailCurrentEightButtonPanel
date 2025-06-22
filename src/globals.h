#pragma once
#include <Arduino.h>
#include "driver/twai.h"

#define LED1_PIN 32
#define LED2_PIN 33
#define LED3_PIN 26
#define LED4_PIN 14
#define LED6_PIN 23
#define LED7_PIN 19
#define LED8_PIN 17
#define LED5_PIN 4

#define DEBUG 1 // This sets whether or not the Serial.println and Serial.print will even be compiled

// Conditional definition for debugging if DEBUG is 1 then it will print to serial port.
// If DEBUG = 0 then the lines will be removed by the compiler.
#if DEBUG == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#define debugf(x,y) Serial.printf(x,y)
#define debugg(x,y,z) Serial.printf(x,y,z)
#else
#define debug(x)
#define debugln(x)
#define debugf(x,y)
#define debugg(x,y,z)
#endif

namespace globals {

}
