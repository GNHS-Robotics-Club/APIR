#include "TemperatureSensor.h"

TemperatureSensor::TemperatureSensor(uint8_t pin, uint8_t model): Peripheral(pin, model) {}

void TemperatureSensor::configure() {

    pinMode(getPin(), INPUT);

}

int TemperatureSensor::receive() {
    return (getModel() == TemperatureSensorModel::TMP_36) ? analogRead(getPin()) : 0;
}

int TemperatureSensor::calculateTemperature(TemperatureMeasurement measurementType) {
    const int celcius = ((receive() / 1023.0 * 5.0 * 1000) - 500) / 10;

    return (measurementType == TemperatureMeasurement::CELSIUS) ? celcius : celcius * 1.8 + 32;
}