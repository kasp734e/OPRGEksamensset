#include "MineralSample.h"
#include <cmath>
MineralSample::MineralSample(double weight, double volume) {
    if (weight > 0 and volume > 0) {
        this -> weight = weight;
        this -> volume = volume;
    } else {
        this -> weight = 0;
        this -> volume = 1;
    }
}

bool MineralSample::is_gold() {
    double rhoGold = 19.3;
    double rhoSample = weight/volume;

    if (std::abs(rhoSample-rhoGold)<5.0e-2) {
        return true;
    } else {
        return false;
    }
}

bool MineralSample::is_silver() {
    double rhoSilver = 10.5;
    double rhoSample = weight/volume;

    if (std::abs(rhoSample-rhoSilver)<5.0e-2) {
        return true;
    } else {
        return false;
    }
}
