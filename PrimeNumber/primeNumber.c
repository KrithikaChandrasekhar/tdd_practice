#include "PrimeNumber.h"

bool isPrimeNumber(int Number) {
	int i, status_flag = 0;
	for (i = 2; i<= Number / 2; ++ i) {
	if (Number % i == 0) {
	status_flag = 1;
	}
      }
	if (Number == 0 || Number == 1) return (false);
	else if (status_flag == 1) return (false);
	else return (true);
}



