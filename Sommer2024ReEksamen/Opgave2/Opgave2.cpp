#include "functions.h"
#include <iostream>
int main()
{
	//Opgave 2 c-1)
	double mitArray[6] = {3.9,4.8,2.9,9.3,5.3,6.2};
	double min = 0.0;
	double max = 0.0;

	// jeg har nu to doubles og et array meget normalt.
	// Arrayet er det samme som en pointer der pointer til den første værdi.

	double* minP = &min;
	double* maxP = &max;

	// Nu har jeg to pointere der pointer til memory adressen til min og max.

	minmax(mitArray, 6, minP, maxP);
	//Opgave 2 c-2)
	std::cout << *minP << std::endl;
	//Opgave 2 c-3)
	std::cout << *maxP << std::endl;
	// jeg derefererer minP og maxP
	return 0;
}
