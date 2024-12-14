#include "Binomial.h"
unsigned long long binomialCoefficient(const unsigned int n, unsigned int k)
{
	if (k > n) return 0;
	if (k == 0 || k == n) return 1;

	unsigned long long result = 1;
	if (k > n - k)
	{
		k = n - k; // C(n, k) == C(n, n-k)
	}

	for (unsigned int i = 0; i < k; ++i)
	{
		result *= (n - i);
		result /= (i + 1);
	}

	return result;
}