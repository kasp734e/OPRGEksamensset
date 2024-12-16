#include "lotto.h"
#include <iostream>
int main()
{
	//Opgave 1 c)
	int r = 4000000;
	std::cout << lottoRowProbability(r) << std::endl;


	//Opgave 1 f)
	double r2 =30000000;
	std::cout << vikingLottoRowProbability(r2)<< std::endl;
}
