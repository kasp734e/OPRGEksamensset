#pragma once
#include "led.h"
#include <vector>
class Batch {
    private:
    long id;
    std::vector<Led> leds;

    public:
    Batch(long id);
    void addLed(long id, double forwardVoltage, double current);
    double averageForwardVoltage();
    double standardDeviationForwardVoltage();
};
