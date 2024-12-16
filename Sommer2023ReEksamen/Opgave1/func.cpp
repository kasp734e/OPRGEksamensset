#include "func.h"

void mid_value(const double* left, const double* right, double* middle) {
    *middle = *left+((*right - *left)/2.0);
}

void min_max_value(double left, double right, double* min, double* max) {
    if (left > right) {
        *max = left;
        *min = right;
    } else {
        *max = right;
        *min = left;
    }
}
