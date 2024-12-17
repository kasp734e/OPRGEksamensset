#include "kortfunktioner.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    srand(time(0));
    int pokerHaand[5] = {};

    for (int i=0; i<5; i++) {
        pokerHaand[i] = TraekKort();
    }

    for (int i=0; i<5; i++) {
        std::cout << pokerHaand[i] << std::endl;
    }

    printHaand(pokerHaand, 5);

    return 0;
}
