#include "adresse.h"
#include <iostream>
#include "kontakt.h"

Kontakt::Kontakt(std::string navn, int telefonnummer, std::string gadenavn, int husnummer, char bogstav, int postnummer) {
    this -> adresse_ = Adresse(gadenavn, husnummer, bogstav, postnummer);
    this -> navn_ = navn;
    this -> telefonnummer_ = telefonnummer;
}
Kontakt::Kontakt(std::string navn, int telefonnummer, std::string gadenavn, int husnummer, int postnummer) {
    this -> adresse_ = Adresse(gadenavn, husnummer, postnummer);
    this -> navn_ = navn;
    this -> telefonnummer_ = telefonnummer;
}

void Kontakt::print() {
    std::cout << "Kontakt: " << navn_ << std::endl;
    std::cout << "Telefonnummer: " << telefonnummer_ << std::endl;
    std::cout << "Adresse: ";
    adresse_.print();
}
void Kontakt::setNavn(std::string navn) {
    this ->navn_ = navn;
}
void Kontakt::setTelefonnummer(int telefonnummer) {
    this -> telefonnummer_ =telefonnummer;
}
void Kontakt::setAdresse(Adresse adresse) {
    this -> adresse_ = adresse;
}

std::string Kontakt::getNavn() {
    return navn_;
}
int Kontakt::getTelefonnummer() {
    return  telefonnummer_;
}
Adresse Kontakt::getAdresse() {
    return adresse_;
}
