#ifndef WATER_SENSOR_H
#define WATER_SENSOR_H

#include "Arduino.h"
#include "Peripheral.h"

/**
 * An enum that represents the water level.
 * 
 * @since 1.1
 * @author Gumaca NHS Robotics Club
*/
enum WaterLevel {

    EMPTY,
    SMALL,
    MEDIUM,
    LARGE

};

/**
 * An enum that represents the model of the water sensor.
 * 
 * @since 1.1
 * @author Gumaca NHS Robotics Club
*/
enum WaterSensorModel: uint32_t {
    SOLU_SL067,
};

/**
 * An Arduino Uno peripheral that 
 * senses/detects water and determines
 * the water level.
 * 
 * @since 1.1
 * @author Gumaca NHS Robotics Club
*/
class WaterSensor: public Peripheral {

    public:
        WaterSensor(uint8_t pin, uint8_t model);

        void configure();

        int receive();

        /**
         * Gets the water level.
         * 
         * @since 1.1
         * @author Gumaca NHS Robotics CLub
        */
        WaterLevel getWaterLevel();
};

#endif