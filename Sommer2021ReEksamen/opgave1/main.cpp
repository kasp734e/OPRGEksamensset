#include <iostream>

int main() {
    double morHeight = 0;
    double farHeight = 0;
    char gender = ' ';
    double childHeight = 0;
    bool forfra = true;
    char yn;

while (forfra) {
    std::cout << "Indtast moderens højde i cm: ";
    std::cin >> morHeight;
    std::cout << std::endl << "Indtast faderens højde i cm: ";
    std::cin >> farHeight;

    std::cout << std::endl << "Hvilket køn er barnet? (d/p)";
    std::cin >> gender;

    if (gender == 'd') {
        childHeight = (12*farHeight+12*morHeight)/24;
    } else {
        childHeight = (12*farHeight+13*morHeight)/26;
    }

    std::cout << "Dit barns forventede højde bliver cirka: " << childHeight << " cm" << std::endl;

    std::cout << "Vil du starte forfra? (y/n)";
    std::cin >> yn;

    if (yn == 'y') {
        forfra = true;
    } else {
        forfra = false;
    }
}



}
