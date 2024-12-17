#include "kortfunktioner.h"
#include <cstdlib>
#include <iostream>
#include <string>

int TraekKort() {
    return (rand() % 13) +1;
}

void printKort(int kort) {
    switch (kort) {
        case 1: std::cout << "Es" << std::endl; break;
        case 2: std::cout << "2" << std::endl; break;
        case 3: std::cout << "3" << std::endl; break;
        case 4: std::cout << "4" << std::endl; break;
        case 5: std::cout << "5" << std::endl; break;
        case 6: std::cout << "6" << std::endl; break;
        case 7: std::cout << "7" << std::endl; break;
        case 8: std::cout << "8" << std::endl; break;
        case 9: std::cout << "9" << std::endl; break;
        case 10: std::cout << "10" << std::endl; break;
        case 11: std::cout << "Knaegt" << std::endl; break;
        case 12: std::cout << "Dame" << std::endl; break;
        case 13: std::cout << "Konge" << std::endl; break;

        deafault:
        std::cout << std::to_string(kort) << " er ikke en rigtig værdi";

    }
}

void printHaand(int haand[], int size) {
    for (int i = 0; i<size; i++) {
        printKort(haand[i]);
    }
}
