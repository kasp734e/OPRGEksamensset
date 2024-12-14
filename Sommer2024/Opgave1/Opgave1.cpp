#include <iostream>
#include "quadratic_equation.h"

int main () {
// discriminant test
std::cout << discriminant(1,1,1) << std::endl;
std::cout << discriminant(1,4,1) << std::endl;
std::cout << discriminant(1,2,1) << std::endl;

// roots test

std::cout << roots(1,1,1) << std::endl;
std::cout << roots(1,4,1) << std::endl;
std::cout << roots(1,2,1) << std::endl;
return 0;
}