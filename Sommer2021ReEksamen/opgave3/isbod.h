#pragma once
#include "isvaffel.h"
#include <vector>
class IsbodsOrdre {
    private:
    std::vector<isvaffel> vafler_;
    int antalVafler_;

    public:
    bool indsaetVaffel(isvaffel v);
    void print();
    double beregnPris();

};
