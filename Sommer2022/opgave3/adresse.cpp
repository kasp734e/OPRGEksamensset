#include "adresse.h"
#include <iostream>
#include <string>

    Adresse::Adresse(std::string gadenavn, int husnummer, char bogstav, int postnummer) {
        this -> gadenavn_=gadenavn;
        if (husnummer > 0 and husnummer < 1000) {
            this -> husnummer_=husnummer;
        } else {
            this -> husnummer_=1;
        }

        this -> bogstav_ = bogstav;

        if (postnummer >=1000 and postnummer <= 9999) {
            this -> postnummer_ = postnummer;
        } else {
            this -> postnummer_ = 0;
        }


    }
    Adresse::Adresse(std::string gadenavn, int husnummer, int postnummer) {
        this -> gadenavn_ = gadenavn;
        if (husnummer > 0 and husnummer < 1000) {
            this -> husnummer_=husnummer;
        } else {
            this -> husnummer_=1;
        }
        if (postnummer >=1000 and postnummer <= 9999) {
            this -> postnummer_ = postnummer;
        } else {
            this -> postnummer_ = 0;
        }
        this -> bogstav_ = ' ';
    }

    Adresse::Adresse() {
        this -> gadenavn_ = "";
        this -> husnummer_ = 1;
        this -> bogstav_ = ' ';
        this -> postnummer_ = 0;
    }

    void Adresse::print() {
        if (bogstav_ == ' ') {
            std::cout << gadenavn_ << " " << husnummer_ << ", " << postnummer_ << std::endl;
        } else {
            std::cout << gadenavn_ << " " << husnummer_ << bogstav_ <<", " << postnummer_ << std::endl;
        }
    }
    void Adresse::setGadenavn(std::string gadenavn) {
        this -> gadenavn_= gadenavn;
    }
    void Adresse::setHusnummer(int husnummer) {
        if (husnummer > 0 and husnummer < 1000) {
            this -> husnummer_=husnummer;
        } else {
            this -> husnummer_=1;
        }
    }
    void Adresse::setBogstav(char bogstav) {
        this -> bogstav_ = bogstav;
    }
    void Adresse::setPostnummer(int postnummer) {
        if (postnummer >=1000 and postnummer <= 9999) {
            this -> postnummer_ = postnummer;
        } else {
            this -> postnummer_ = 0;
        }
    }

    std::string Adresse::getGadenavn() {
        return gadenavn_;
    }
    int Adresse::getHusnummer() {
        return husnummer_;
    }
    char Adresse::getBogstav() {
        return bogstav_;
    }
    int Adresse::getPostnummer() {
        return postnummer_;
    }
