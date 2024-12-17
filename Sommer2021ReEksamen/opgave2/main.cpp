#include "Statistik.h"
#include <iostream>

int main() {
    double array1[8] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
    double array1Gennemsnit = gennemsnit(array1, 8);
    double array1Varians = variansLang(array1, 8, array1Gennemsnit);
    std::cout << "Gennemsnit: " << array1Gennemsnit << ". Varians: " << array1Varians << std::endl;

    double array2[5] = {-2,-1,0,1,2};

    std::cout << "Gennemsnit: " << gennemsnit(array2, 5) << ". Varians: " << variansLang(array2, 5, gennemsnit(array2, 5)) << std::endl;
}
