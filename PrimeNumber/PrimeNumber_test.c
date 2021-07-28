#include <assert.h>
#include "PrimeNumber.h"

int main(void) {
	assert(!isPrimeNumber(0));
	assert(!isPrimeNumber(1));
	assert(isPrimeNumber(2));
	assert(isPrimeNumber(3));
	assert(!isPrimeNumber(4));
	assert(isPrimeNumber(5));
}
