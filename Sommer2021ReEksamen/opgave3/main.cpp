#include "isvaffel.h"
#include <iostream>

int main() {
    // Step 1: Create the first object using the default constructor
    isvaffel vaffel1;
    std::cout << "Vaffel 1 (Default constructor):" << std::endl;
    vaffel1.print();

    // Step 2: Create the second object using the parameterized constructor
    isvaffel vaffel2(2, 1); // Different values: 2 scoops, 1 extra
    std::cout << "\nVaffel 2 (Parameterized constructor):" << std::endl;
    vaffel2.print();

    // Step 3: Add scoops and extras until maximum is reached
    std::cout << "\nTilføjer kugler og extras til Vaffel 2..." << std::endl;

    // Add scoops (kugler) until max (5) is reached
    while (vaffel2.tilfoejKugle()) {
        std::cout << "Tilføjet en kugle." << std::endl;
    }
    std::cout << "Maksimum kugler nået." << std::endl;

    // Add extras until max (5) is reached
    while (vaffel2.tilfoejExtra()) {
        std::cout << "Tilføjet en extra." << std::endl;
    }
    std::cout << "Maksimum extras nået." << std::endl;

    // Step 4: Print the object to confirm maximum limits are not exceeded
    std::cout << "\nVaffel 2 efter tilføjelser (maksimum test):" << std::endl;
    vaffel2.print();

    return 0;
}