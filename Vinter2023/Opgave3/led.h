#pragma once

#include <string>
class Led {

    private:
    long id;
    double forwardVoltage;
    double current;

    public:
    Led(long id, double forwardVoltage, double current);
    std::string getId();
    double getForwardVoltage();
    double getCurrent();
    std::string toString();
};
