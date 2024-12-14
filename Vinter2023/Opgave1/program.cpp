#include "capacitance.h"
#include <iostream>
#include <string>

int main() {
    //b1
    std::cout << "Dette program beregner kapacitans mellem to paralelle plader med et givet materiale." << std::endl;
    std::cout << "Indtast materiale, areal (i enheden kvadratmeter) og afstand (i enheden meter)."<< std::endl << " Materialet kan være: vakuum, polyethelene, mica eller keramik:"<< std::endl;

    //b2
    double afstand;
    double areal;
    std::string materiale;
    double epsilon;

    std::cin >> materiale;
    std::cin >> areal;
    std::cin >> afstand;


    if (materiale == "vakuum" or materiale == "polythelene" or materiale == "mica" or materiale == "keramik") {
        if (areal && afstand > 0) {
            if (materiale=="vakkum") {
              epsilon = 8.85e-12;
            }
            if (materiale=="polythelene") {
                epsilon = 2.23;
            }
            if (materiale == "mica") {
                epsilon = 7.0;
            }
            if (materiale== "keramik") {
                epsilon = 9.0;
            }

            std::cout << "Kapasitansen er: " << std::to_string(capacitance(epsilon, areal, afstand)) << std::endl;

        } else {
            std::cout << "Areal og afstand skal være større end 0" << std::endl;
        }
    } else {
        std::cout << "Du skal skrive en af de mulige materialer." << std::endl;
    }

    return 0;
}
