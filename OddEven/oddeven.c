#include <stdio.h>
#include <stdbool.h>
#include "oddeven.h"

bool iseven(int number) {
	if(number != 0 && number % 2 == 0)
	   return(true);
	else
	   return(false);
}
