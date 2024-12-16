#include "Bloddonor.h"
#include <iostream>

Bloddonor::Bloddonor() {
    this -> navn_ = "Ukendt";
    this -> BMI_ = 22.5;
    this -> blodtype_ = "Ukendt";
    this -> rhesustype_ = false;
}
Bloddonor::Bloddonor(std::string navn, double bmi, std::string blodtype, bool rhesus) {
    this -> navn_ = navn;
    this -> BMI_ = bmi;
    this -> blodtype_ = blodtype;
    this -> rhesustype_ = rhesus;
}

void Bloddonor::print() {
    if (rhesustype_){
        std::cout << navn_ << ", " << blodtype_ << "+, BMI: "<< BMI_ << std::endl;
    } else {
        std::cout << navn_ << ", " << blodtype_ << "-, BMI: "<< BMI_<< std::endl;
    }
}
void Bloddonor::setNavn(std::string x) {
    this -> navn_ = x;
}
void Bloddonor::setBMI(double x) {
    this -> BMI_ = x;
}
void Bloddonor::setBlodtype(std::string x) {
    this -> blodtype_ = x;
}
void Bloddonor::setRhesustype(bool x) {
    this -> rhesustype_= x;
}
std::string Bloddonor::getNavn() {
    return navn_;
}
double Bloddonor::getBMI() {
    return BMI_;
}
std::string Bloddonor::getBlodtype() {
    return blodtype_;
}
bool Bloddonor::getRhesustype() {
    return rhesustype_;
}
