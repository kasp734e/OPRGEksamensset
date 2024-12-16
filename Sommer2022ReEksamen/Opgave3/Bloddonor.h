#pragma once


#include <string>
class Bloddonor {
    private:
    std::string navn_;
    double BMI_;
    std::string blodtype_;
    bool rhesustype_;

    public:
    Bloddonor(std::string navn, double bmi, std::string blodtype, bool rhesus);
    Bloddonor();
    void print();
    void setNavn(std::string x);
    void setBMI(double x);
    void setBlodtype(std::string x);
    void setRhesustype(bool x);
    std::string getNavn();
    double getBMI();
    std::string getBlodtype();
    bool getRhesustype();
};
