#include "Math.h"

// TODO: Needs improvement.
double math::pow(double base, double exponent) {

    /**
     * According to the Law of Exponents,
     * 
     * any nonzero number raised to the 
     * power of 0 is equal to 1.
     * 
    */
    if(exponent == 0.0) return 1;

    double output = base;

    int count = 1;

    while(count < exponent) {
        output *= base;
        count++;
    }
    return output;
}

double math::square(double base) {
    return base * base;
}

double math::cubed(double base) {
    return base * base * base;
}