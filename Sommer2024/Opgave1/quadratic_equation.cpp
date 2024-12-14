#include <iostream>
#include <cmath>

#include "quadratic_equation.h"

float discriminant(float a, float b, float c) {
    return b*b-4*a*c; 
}

std::string roots(float a, float b, float c) {

    float d = discriminant(a , b , c);
    if (d==0) {
        return std::to_string(-b/(2*a));
    } else if (d>0) {
        float plusval = (-b+sqrt(d))/2*a;
        float minusval = (-b-sqrt(d))/2*a;
        std::string returVal = std::to_string(plusval) +" og "+  std::to_string(minusval);
        return returVal;
    } else {
        float realDel = (-b/2*a);
        float imagDel = sqrt(abs(d))/2*a;
        return std::to_string(realDel)+"+i"+std::to_string(imagDel) + " og " +std::to_string(realDel)+"-i"+std::to_string(imagDel);

    }
}