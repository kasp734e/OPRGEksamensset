#pragma once
#include "func.h"

#include <vector>
class Samling {
    private:
    std::vector<Wire> wires;

    public:
    void addWire(double SpecModstand, double laengde, double tvaersnit);
    double gennemsnit();
};
