#include "Peripheral.h"

Peripheral::Peripheral(uint8_t pin, uint8_t model): pin(pin), model(model) {}

uint8_t Peripheral::getPin() {
    return this->pin;
}

uint8_t Peripheral::getModel() {
    return this->model;
}