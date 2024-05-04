#include "InfraredSensor.h"

InfraredSensor::InfraredSensor(uint8_t pin, uint8_t model) : Peripheral(pin, model) {}

void InfraredSensor::configure() {
    pinMode(getPin(), INPUT);
}

int InfraredSensor::receive() {
    return (getModel() == InfraredSensorModel::MLE00536) ? digitalRead(getPin()) : 0;
}