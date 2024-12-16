#include <iostream>
#include <ostream>
#include <string>
int main() {

    std::cout << "Skriv dit køn: m for hankøn, f for hunkøn: ";
    std::string gender = "";
    std::cin >> gender;
    std::cout << std::endl;

    if (gender == "f" or gender == "m") {
        if (gender == "f") {
            std::cout << "Dit køn er indstillet til: Kvinde";
        } else{
            std::cout << "Dit køn er indstillet til: Mand";
        }
    } else {
        std::cout << "Det du har skrevet er ugyldigt. Dit køn er indstillet til kvinde" << std::endl;
        gender = "f";
    }

    double weight = 0;
    double height = 0;
    double age = 0;

    std::cout << "Indtast venligst din vægt (kg), højde(cm) og alder(år)" << std::endl;

    std::cin >> weight;
    std::cin >> height;
    std::cin >> age;

    double bmr = 0;

    if (gender == "f") {
        bmr = 88.362+13.397*weight+4.799*height-5.677*age;
    } else if (gender == "m") {
        bmr = 447.593+9.247*weight+3.098*height-4.330*age;
    }
    std::cout << "Din BMR er: " << std::to_string(bmr) << std::endl;

}
