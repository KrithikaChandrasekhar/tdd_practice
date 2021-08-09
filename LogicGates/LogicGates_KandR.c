 #include "LogicGates.h"
#include <stdio.h>

bool TestAND (bool a, bool b, bool c)
{
	if (a * b == c) {
		printf (" \n %d AND %d = %d\n", a, b, c);
	}
}

bool TestOR(bool a, bool b, bool c)
{
	if(a + b > 0) c = 1;
	else c = 0;
	printf (" \n %d OR %d = %d\n", a, b, c);
}
