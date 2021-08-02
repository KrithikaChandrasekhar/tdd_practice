#include <assert.h>
#include "LogicGates.h"

int main(void) {
	assert(TestAND(0, 0, 0));
	assert(TestAND(0, 1, 0));
	assert(TestAND(1, 0, 0));
	assert(TestAND(1, 1, 1));
}
