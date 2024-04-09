#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "Arduino.h"
#include "Peripheral.h"

/**
 * All of the supported temperature sensor models.
 * 
 * @since 1.0
 * @author Gumaca NHS Robotics Club
*/
enum TemperatureSensorModel : uint8_t {
    TMP_36,
};

/**
 * All of the supported temperature measurement types.
 * 
 * @since 1.0
 * @author Gumaca NHS Robotics Club
*/
enum TemperatureMeasurement {
    CELSIUS,
    FAHRENHEIT,
};

/**
 * An Arduino Uno peripheral that measures the temperature.
 * 
 * @since 1.0
 * @author Gumaca NHS Robotics Club
*/
class TemperatureSensor : public Peripheral {

    public:
        TemperatureSensor(uint8_t pin, uint8_t model);

        void configure();

        int receive();

        int calculateTemperature(TemperatureMeasurement measurementType);
};

#endif