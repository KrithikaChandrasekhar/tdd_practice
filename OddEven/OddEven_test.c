#include <assert.h>
#include "OddEven.h"

int main(void) {
	assert(!iseven(0));
	assert(!iseven(1));
	assert(iseven(2));
	assert(!iseven(3));
}
