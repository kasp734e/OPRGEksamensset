#pragma once
#include <string>

class Adresse {
    private:
    std::string gadenavn_;
    int husnummer_;
    char bogstav_;
    int postnummer_;

    public:
    Adresse(std::string gadenavn, int husnummer, char bogstav, int postnummer);
    Adresse(std::string gadenavn, int husnummer, int postnummer);
    Adresse();

    void print();
    void setGadenavn(std::string gadenavn);
    void setHusnummer(int husnummer);
    void setBogstav(char bogstav);
    void setPostnummer(int postnummer);

    std::string getGadenavn();
    int getHusnummer();
    char getBogstav();
    int getPostnummer();
};
