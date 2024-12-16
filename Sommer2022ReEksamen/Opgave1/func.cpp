#include "func.h"
int potens(int a, int b) {
    int returSum=1;
    if (a < 0 or b <0) {
        return -1;
    } else if (a>0 and b==0) {
        return 1;
    } else {
        for (int i=0; i<b; i++) {
            returSum = returSum*a;
        }
        return returSum;
    }
}

void erstatMedPotens(int talDerSkalErstattes, int potens) {
    int returSum=1;
    if (talDerSkalErstattes < 0 or potens <0) {
        talDerSkalErstattes=-1;
    } else if (talDerSkalErstattes>0 and potens==0) {
        talDerSkalErstattes = 1;
    } else {
        for (int i=0; i<potens; i++) {
            returSum = returSum*talDerSkalErstattes;
        }
        talDerSkalErstattes = returSum;
    }
}

