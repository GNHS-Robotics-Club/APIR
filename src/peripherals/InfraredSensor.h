#ifndef INFRARED_SENSOR_H
#define INFRARED_SENSOR_H

#include "Arduino.h"
#include "Peripheral.h"

/**
 * An enum that represents the model of the infrared sensor.
 * 
 * @since 1.2
 * @author Gumaca NHS Robotics Club
*/
enum InfraredSensorModel : uint32_t {

    MLE00536,
    
};

/**
 * An Arduino Uno peripheral that 
 * measures the infrared radiation
 * in its surrondings.
 * 
 * @since 1.2
 * @author Gumaca NHS Robotics Club
*/
class InfraredSensor : public Peripheral {

    public:
        InfraredSensor(uint8_t pin, uint8_t model);

        void configure();

        int receive();
};

#endif