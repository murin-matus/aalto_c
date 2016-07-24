#include <math.h>

// Calculate length of vector in three dimensional Euclidean space
int vectorlength(double a, double b, double c) {
    double a_pow = pow(a, 2);
    double b_pow = pow(b, 2);
    double c_pow = pow(c, 2);

    // Distance in three dimensional Euclidean space
    double result = sqrt(a_pow + b_pow + c_pow);
    return result;
}
