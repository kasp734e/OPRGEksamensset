#include "functions.h"
#include <iostream>
#include <cmath>


void average(double* measurements_p, size_t size, double* result) {
    double sum = 0;
    if (size==0) {
        std::cout << "Size cannot be zero" << std::endl;
        *result = NAN;
    } else {
        for (size_t i = 0; i < size; i++)
        {
            
            sum = sum + measurements_p[i];
        }
    }
    *result = sum/size;
}

int main() {
    double measurements[6] = {3.9, 4.8, 2.9, 9.3, 5.3, 6.2};
    double res;

    size_t size = sizeof(measurements)/sizeof(measurements[0]);

    average(measurements, size, &res);

    std::cout << res << std::endl;
    
    double measurements2[0] = {};

    size_t size2 = sizeof(measurements2)/sizeof(measurements2[0]);

    average(measurements, size2, &res);

    std::cout << res << std::endl;


    return 0;
}