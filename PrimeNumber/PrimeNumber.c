#include "PrimeNumber.h"

bool isPrimeNumber(int number) {
	int i;
	bool isPrime = true;
	for (i = 2; i <= number / 2; ++ i) {
		if (number % i == 0) isPrime = false;
	}
	return number > 1 && isPrime == true;
}



