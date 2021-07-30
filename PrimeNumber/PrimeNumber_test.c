#include <assert.h>
#include "PrimeNumber.h"
#include <stdlib.h>

int main(void) {
	assert(!isPrimeNumber(0));
	assert(!isPrimeNumber(1));
	assert(isPrimeNumber(2));
	assert(isPrimeNumber(3));
	assert(!isPrimeNumber(4));
	assert(isPrimeNumber(5));
	assert(!isPrimeNumber(6));
	assert(isPrimeNumber(7));
	assert(!isPrimeNumber(8));
	assert(!isPrimeNumber(9));
	assert(isPrimeNumber(11));
	assert(isPrimeNumber(13));
	assert(!isPrimeNumber(14));
	assert(!isPrimeNumber(15));
	assert(isPrimeNumber(23));
	assert(isPrimeNumber(29));
	assert(!isPrimeNumber(49));
	system("echo success");
}

