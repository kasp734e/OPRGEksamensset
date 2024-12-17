#include "isvaffel.h"
#include <iostream>

isvaffel::isvaffel() {
    this -> antalKugler_ = 1;
    this -> antalExtras_ = 0;
}
isvaffel::isvaffel(int antalKugler, int antalExtras) {
    if (antalKugler >= 1 and antalKugler <= 5) {
        this -> antalKugler_ = antalKugler;
    } else {
        this ->antalKugler_= antalKugler;
    }

    if (antalExtras >= 0 and antalExtras <=5) {
        this -> antalExtras_ = antalExtras;
    } else {
        this -> antalExtras_ = 0;
    }

}
void isvaffel::print() {
    if (antalKugler_ > 1) {
        std::cout << "Isvaffel med " << antalKugler_ << " kugler og " << antalExtras_ << " extra ting, pris: " << beregnPris() << " kr." << std::endl;
    } else {
        std::cout << "Isvaffel med " << antalKugler_ << " kugle og " << antalExtras_ << " extra ting, pris: " << beregnPris() << " kr." << std::endl;
    }
}
double isvaffel::beregnPris() {
    return 10+10*antalKugler_+5*antalExtras_;
}
bool isvaffel::tilfoejKugle() {
    if (antalKugler_<5) {
        antalKugler_++;
        return true;
    } else {
        return false;
    }

}
bool isvaffel::tilfoejExtra() {
    if (antalExtras_<5) {
        antalExtras_++;
        return true;
    } else {
        return false;
    }

}
int isvaffel::getAntalKugler() {
    return antalKugler_;
}
int isvaffel::getAntalExtras() {
    return antalExtras_;
}
