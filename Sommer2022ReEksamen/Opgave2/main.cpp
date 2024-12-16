#include <cmath>
#include <iostream>
#include <ostream>

int main() {
    double monthsWorked = 0;
    double vacationDaysHeld = 0;

    std::cout << "Hvor mange hele måneder har du arbejdet siden sidste 1. September: ";
    std::cin >> monthsWorked;
    std::cout << std::endl<< "Hvor mange feriedage har du afholdt: ";
    std::cin >> vacationDaysHeld;

    double earnedVacation = monthsWorked*2.08;
    double availableVacation = earnedVacation-vacationDaysHeld;

    int wholeVacationDays = floor(availableVacation);

    std::cout << "Du kan afholde " << wholeVacationDays << " dages ferie nu og har " << availableVacation-wholeVacationDays << " dage til senere."<< std::endl;


    return 0;
}
