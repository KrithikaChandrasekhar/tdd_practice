#include "PrimeNumber.h"

bool isPrimeNumber(unsigned int number)
{
    unsigned int i;
    if (number <= 1)
	return false;
    for (i = 2; i <= number / 2; ++i)
	if (number % i == 0)
	    return false;
    return true;
}
