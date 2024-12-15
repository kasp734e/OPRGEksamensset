#include <iostream>
int main() {

    // a
    double vaegt;
    double hoejde;

    std::cout << "Indtast vægt i kg og højde i m: " << std::endl;
    std::cin >> vaegt;
    std::cin >> hoejde;

    // b
    double bmi = vaegt/(hoejde*hoejde);

    if (bmi < 18.5) {
        std::cout << "Undervægtig: "<< std::to_string(bmi) << std::endl;
    } else if (bmi >18.5 and bmi <=25.0) {
        std::cout << "Normalvægtig: "<< std::to_string(bmi) << std::endl;
    } else if (bmi > 25.0 and bmi <=30) {
        std::cout << "Overvægtig: "<< std::to_string(bmi) << std::endl;
    } else if (bmi > 30) {
        std::cout << "Svært overvægtig: "<< std::to_string(bmi) << std::endl;
    } else {
        std::cout << "error BMI: "<< std::to_string(bmi) << std::endl;
    }

    return 0;
}
