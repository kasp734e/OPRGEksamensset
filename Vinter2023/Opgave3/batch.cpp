#include "batch.h"
#include "led.h"
#include <cmath>

Batch::Batch(long id) {
    this -> id = id;
}

void Batch::addLed(long id, double forwardVoltage, double current) {
    Led led(id, forwardVoltage, current);
    leds.push_back(led);
}
double Batch::averageForwardVoltage() {
    double forwardVSum = 0;
    for (Led led : leds) {
        forwardVSum += led.getForwardVoltage();
    }
    return forwardVSum/leds.size();
}
double Batch::standardDeviationForwardVoltage() {
    double standarddevsum = 0;
    double average = averageForwardVoltage();

    for (Led led : leds) {
        standarddevsum += (led.getForwardVoltage()-average)*(led.getForwardVoltage()-average);
    }
    return std::sqrt(standarddevsum/(leds.size()-1));
}
