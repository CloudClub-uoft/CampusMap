#ifndef DHT22_H
#define DHT22_H

#include "Arduino.h"
#include "Sensor.h"
#include <DHT.h>

/**
 * Driver for the Adafruit DHT22 Temperature and Humidity sensor.
 */

class DHT22_temp : public Sensor{
  private:
    DHT *sensor;
    float read() override;
    bool init() override;
  public:
    DHT22_temp(DHT *sensor);
};

class DHT22_hum : public Sensor{
  private:
    DHT *sensor;
    float read() override;
    bool init() override;
  public:
    DHT22_hum(DHT *sensor);
};

#endif