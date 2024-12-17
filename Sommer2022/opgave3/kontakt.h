#include "adresse.h"
#include <string>

class Kontakt {
    private:
    std::string navn_;
    int telefonnummer_;
    Adresse adresse_;

    public:
    Kontakt(std::string navn, int telefonnummer, std::string gadenavn, int husnummer, char bogstav, int postnummer);
    Kontakt(std::string navn, int telefonnummer, std::string gadenavn, int husnummer, int postnummer);
    void print();
    void setNavn(std::string navn);
    void setTelefonnummer(int telefonnummer);
    void setAdresse(Adresse adresse);

    std::string getNavn();
    int getTelefonnummer();
    Adresse getAdresse();
};
