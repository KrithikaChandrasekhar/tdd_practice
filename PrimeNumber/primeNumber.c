#include "PrimeNumber.h"

bool isPrimeNumber(int Number) {
	return (Number == 2 || (Number % 2 == 1 && (Number % 4 == 1 || Number % 4 == 3) && Number > 2));
}
