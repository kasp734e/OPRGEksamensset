#include <cmath>
#include <iostream>
#include <ostream>
#include <string>

void fradragPrint(double distance) {

    if (distance<=0) {
            std::cout << "Dit fradrag er ugyldigt: Afstand < 0" << std::endl;
        } else if (distance>0 and distance<=12) {
            std::cout << "0 kr. Intet fradrag" << std::endl;
        } else if (distance > 12 and distance <=60) {
            std::cout << "Dit fradrag er " << std::to_string((distance+distance-24)*2.16) << "kr." << std::endl;
        } else if (distance > 60) {
            double fradrag = 207.36;
            fradrag += (distance+distance-120)*1.08;
            std::cout << "Dit fradrag er " << std::to_string(fradrag) << "kr." << std::endl;
        }
}

int main() {

    std::cout << "Indstast venligt afstanden fra dit hjem til dit arbejde." << std::endl;
    double distance = -1;

    while (distance < 0) {
        std::cin >> distance;
        if (distance < 0) {
            std::cout << "Afstanden skal være større end 0" << std::endl;
        }
    }

    fradragPrint(0);
    fradragPrint(12);
    fradragPrint(12.5);
    fradragPrint(13);
    fradragPrint(59);
    fradragPrint(60);
    fradragPrint(60.5);
    fradragPrint(75);
    fradragPrint(-1);

    return 0;
}
