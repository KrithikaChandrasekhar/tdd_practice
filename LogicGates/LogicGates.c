#include "LogicGates.h"
#include <stdio.h>

bool TestAND (bool a, bool b, bool c) {
	if(a * b == c) {
		printf (" \n %d AND %d = %d\n", a, b, c);
	}
}
