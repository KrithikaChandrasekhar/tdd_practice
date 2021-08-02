#include "PrimeNumber.h"

bool isPrimeNumber(int number) {
	int i;
	bool isPrime = 1;
	for (i = 2; i <= number / 2; ++ i) {
		if (number % i == 0) isPrime = 0;
	}
	if (number == 0 || number == 1) return false;
	else if (isPrime == 0) return false;
	else return true;
}



