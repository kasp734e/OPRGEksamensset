#include "func.h"
#include <iostream>

int main() {
    int myArray1[6] = {5,6,3,7,9,3};
    int printvar = 0;
    int* p_printvar = &printvar;
    findMax(myArray1,6, p_printvar);
    std::cout << printvar;
}
