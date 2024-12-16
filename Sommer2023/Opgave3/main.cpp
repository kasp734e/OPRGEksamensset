#include "func.h"
#include "Samling.h"
#include <string>
#include <iostream>

int main() {

    Wire wire1(0, 2, 1);
    Wire wire2(2, 0, 1);
    Wire wire3(1, 2, 0);

    std::cout << std::to_string(wire1.getModstand())<< std::endl;
    std::cout << std::to_string(wire2.getModstand())<< std::endl;
    std::cout << std::to_string(wire3.getModstand())<< std::endl;

    Wire wireGuld(0.0244e-6, 1, 12e-6);
    Wire wireStaal(0.72e-6, 1, 12e-6);

    std::cout << std::to_string(wireGuld.getModstand())<< std::endl;
    std::cout << std::to_string(wireStaal.getModstand())<< std::endl;

    Samling samling1;

    samling1.addWire(0.0244e-6, 1, 12e-6);
    samling1.addWire(0.72e-6, 1, 12e-6);

    double samling1Gennemsnit = 0;

    samling1Gennemsnit = samling1.gennemsnit();

    std::cout << samling1Gennemsnit << std::endl;

    return 0;
}
