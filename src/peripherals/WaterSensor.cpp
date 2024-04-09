#include "WaterSensor.h"

WaterSensor::WaterSensor(uint8_t pin, uint8_t model): Peripheral(pin, model) {}

void WaterSensor::configure() {
    pinMode(getPin(), INPUT);
}

int WaterSensor::receive() {
    return analogRead(getPin());
}

WaterLevel WaterSensor::getWaterLevel() {
    return (receive() > 100 && receive() < 300) ? WaterLevel::SMALL : 
           (receive() > 300 && receive() < 330) ? WaterLevel::MEDIUM :
           (receive() > 330) ? WaterLevel::LARGE : WaterLevel::EMPTY;
}