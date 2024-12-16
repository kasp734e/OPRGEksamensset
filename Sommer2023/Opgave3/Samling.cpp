#include "Samling.h"
#include "func.h"
#include <vector>
void Samling::addWire(double SpecModstand, double laengde, double tvaersnit) {
    wires.push_back(Wire(SpecModstand, laengde, tvaersnit));
}

double Samling::gennemsnit() {
    double gennemsnitRetur = 0;
    for (Wire wire : wires) {
        gennemsnitRetur += wire.getModstand();
    }
    return gennemsnitRetur/wires.size();
}
