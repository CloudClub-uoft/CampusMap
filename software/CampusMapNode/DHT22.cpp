#include "DHT22.h"
#include "Arduino.h"

DHT22_hum::DHT22_hum(DHT *sensor) : Sensor("Humidity Sensor", "DHT22", "Air Humidity", 2000){
  this->sensor = sensor;
}

float DHT22_hum::read(){
  return sensor->readHumidity();
}

bool DHT22_hum::init(){
  sensor->begin();
  return true;
}

DHT22_temp::DHT22_temp(DHT *sensor) : Sensor("Temperature Sensor", "DHT22", "Air Temperature", 2000){
  this->sensor = sensor;
}

float DHT22_temp::read(){
  return sensor->readTemperature();
}

bool DHT22_temp::init(){
//   sensor->begin();
  return true;
}