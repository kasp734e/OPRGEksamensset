#include "Statistik.h"
#include <cmath>
#include <iostream>
#include <vector>
double variansLang(double xi[], double n, double g) {
    double sum = 0.0;
    for (int i=0; i<n; i++) {
        sum += pow((xi[i]-g),2);
    }
    return sum/n;
}

double gennemsnit(double x[], double n) {
    double sum;
    for (int i = 0; i<n; i++) {
        sum += x[i];
    }
    return sum/n;
}
