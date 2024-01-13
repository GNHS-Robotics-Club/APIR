#ifndef PERIPHERAL_H
#define PERIPHERAL_H

#include "Arduino.h"

/**
 * Represents an Arduino Uno peripheral.
 * 
 * @since 1.0
 * @author Gumaca NHS Robotics Club
*/
class Peripheral {

    /**
     * The pin of the peripheral.
    */
    uint8_t pin;

    /**
     * The model of the peripheral.
    */
    uint8_t model;


    public:

        Peripheral(uint8_t pin, uint8_t model);

        virtual ~Peripheral() = default;

        /**
        * Returns the peripheral's pin.
        * 
        * @since 1.0
        * @return Returns the peripheral's pin.
        */
        uint8_t getPin();

        /**
         * Returns the peripheral's model.
         * 
         * @since 1.0
         * @return Returns the peripheral's model.
        */
        uint8_t getModel();

        /**
        * Configures the peripheral before the 
        * peripheral performs any actions.
        * 
        * @since 1.0
        */
        virtual void configure() = 0;

        /**
        * Receive the data from the
        * peripheral's pin.
        * 
        * @since 1.0
        * @return Returns the data from the peripheral's pin.
        */
        virtual int receive() = 0;

};

#endif