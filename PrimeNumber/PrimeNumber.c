#include "PrimeNumber.h"

bool isPrimeNumber(int number) {
	int i, notprime_flag = 0;
	for (i = 2; i <= number / 2; ++ i) {
	if (number % i == 0) notprime_flag = 1;
	}
	if (number == 0 || number == 1) return false;
	else if (notprime_flag == 1) return false;
	else return true;
}



