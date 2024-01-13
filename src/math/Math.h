#ifndef MATH_H
#define MATH_H

/**
 * A math library for calculations.
 * 
 * @since 1.0
 * @author Gumaca NHS Robotics Club
*/

namespace math {
    /**
 * A function that returns the base raised
 * to the exponent.
 * 
 * @since 1.0
 * @return Gets the base raised to the exponent .
*/
double pow(double base, double exponent);

/**
 * A function that returns the base raised to 2.
 * 
 * @since 1.0
 * @return Gets the base raised to 2.
*/
double square(double base);

/**
 * A function that returns the base raised to 3.
 * 
 * @since 1.0
 * @return Gets the base raised to 3.
*/
double cubed(double base);

}

#endif