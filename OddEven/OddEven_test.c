#include <assert.h>
#include "OddEven.h"

int main(void) {
	assert(isEven(0));
	assert(!isEven(1));
	assert(isEven(2));
	assert(!isEven(3));
}
