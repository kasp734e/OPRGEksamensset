#include <iostream>
#include "func.h"
int main() {

    int first = 2;
    int second = 3;

    int* Pfirst = &first;
    int* Psecond = &second;

    addSecondToFirst(Pfirst, Psecond);

    std::cout << first;
}
