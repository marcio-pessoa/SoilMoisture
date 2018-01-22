/* SoilMoisture.cpp - Soil moisture sensor library
 * 
 */

#include "Arduino.h"
#include "SoilMoisture.h"

/* SoilMoisture
 * 
 * Description
 *  Soil moisture sensor.
 * 
 *  SoilMoisture (int pin)
 * 
 * Parameters
 *  pin: Arduino pin connected to soil moisture sensor
 * 
 * Returns
 *   void
 * 
 */
SoilMoisture::SoilMoisture(byte pin) {
  pinMode(pin, INPUT);
  _pin = pin;
}

/* read
 * 
 * Description
 *  Read soil moisture sensor.
 * 
 *  sensor.sensorRead()
 * 
 * Parameters
 *  none
 * 
 * Returns
 *  byte: Percent soil moisture read (0% ~ 100%)
 */
byte SoilMoisture::read() {
  int sensor = analogRead(_pin);
  return map(sensor,   // analog input
             0, 1023,  // From (analog input range)
             0, 100);  // To (percentual range)
}
