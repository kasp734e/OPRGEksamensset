#include "func.h"
#include <iostream>

int main() {
    std::cout << "Skriv to kommatal: " << std::endl;

    double middle = 0;
    double min = 0;
    double max = 0;
    double* middle_p = &middle;
    double* min_p = &min;
    double* max_p = &max;

    double input1 = 0;
    double input2 = 0;
    double* input1_p = &input1;
    double* input2_p = &input2;

    std::cin >> input1;
    std::cin >> input2;

    mid_value(input1_p, input2_p, middle_p);
    min_max_value(input1, input2, min_p, max_p);

    std::cout << "Mid value: " << *middle_p << std::endl;
    std::cout << "Min: " << *min_p << " Max: "<< *max_p << std::endl;
    return 0;
}
