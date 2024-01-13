#include "Math.h"

double math::pow(double base, double exponent) {

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