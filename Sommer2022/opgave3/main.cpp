#include "adresse.h"
#include <iostream>

int main() {
    // 1. Opret to Adresse-objekter
    // Første objekt med bogstav
    Adresse adresse1("Hovedgaden", 42, 'B', 1234);

    // Andet objekt uden bogstav
    Adresse adresse2("Brogade", 12, 5678);

    // 2. Udskriv objekternes indhold med print()
    std::cout << "Adresse 1:" << std::endl;
    adresse1.print();
    std::cout << std::endl;

    std::cout << "Adresse 2 (før ændringer):" << std::endl;
    adresse2.print();
    std::cout << std::endl;

    // 3. Brug set-metoderne til at ændre værdier på det andet objekt
    adresse2.setGadenavn("Nyvej");
    adresse2.setHusnummer(99);
    adresse2.setBogstav('C');
    adresse2.setPostnummer(4321);

    // 4. Udskriv objektet igen efter ændringer
    std::cout << "Adresse 2 (efter ændringer):" << std::endl;
    adresse2.print();

    return 0;
}
