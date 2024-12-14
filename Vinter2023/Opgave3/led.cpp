#include "led.h"
#include <string>


Led::Led(long id, double forwardVoltage, double current) {
    this -> id = id;
    this -> forwardVoltage = forwardVoltage;
    this -> current = current;
}

std::string Led::getId() {
    return std::to_string(id);
}

double Led::getForwardVoltage() {
    return forwardVoltage;
}

double Led::getCurrent() {
    return current;
}

std::string Led::toString() {
    std::string returStreng = "ID: " + std::to_string(id) + " ForwardVoltage: " + std::to_string(forwardVoltage) + " Current: " + std::to_string(current);
    return returStreng;
}
