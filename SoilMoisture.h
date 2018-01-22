/* SoilMoisture.h - Soil moisture sensor library
 *
 * Author: Márcio Pessoa <marcio.pessoa@sciemon.com>
 * Contributors: none
 * 
 * Change log
 * 
 * 2015-12-30
 *         Removed unnecessary calibration function.
 * 
 * 2014-07-29
 *         Experimental version.
 */

#ifndef SoilMoisture_h
#define SoilMoisture_h

#include "Arduino.h"

class SoilMoisture
{
  public:
    SoilMoisture(byte pin);
    byte read();
  private:
    byte _pin;
};

#endif
