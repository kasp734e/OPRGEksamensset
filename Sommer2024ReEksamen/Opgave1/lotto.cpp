//Opgave 1b)
#include "lotto.h"
#include "Binomial.h"
double lottoRowProbability(double r) {
    return r/(binomialCoefficient(36,7));
}


//Opgave 1 e)
double vikingLottoRowProbability(double r) {
    return r/(binomialCoefficient(48, 6)*5.0);
}
