#include "func.h"
#include <iostream>

int main() {
    std::cout << potens(-1, -2)<< std::endl;
    std::cout << potens(-1, 3)<< std::endl;
    std::cout << potens(4, -1)<< std::endl;
    std::cout << potens(0, 0)<< std::endl;
    std::cout << potens(5, 0)<< std::endl;
    std::cout << potens(0, 3)<< std::endl;
    std::cout << potens(3, 1)<< std::endl;
    std::cout << potens(1, 3)<< std::endl;
    std::cout << potens(2, 8)<< std::endl;
    std::cout << potens(1000, 3)<< std::endl;
    std::cout << potens(3, 19)<< std::endl;
    std::cout << potens(4, 19) << std::endl;
}
