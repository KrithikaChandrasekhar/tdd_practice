#include <stdio.h>

int odd_even(int number);

void main() {
	int x = odd_even(4);
	if(x == 0) printf("even number\n");
	else printf("odd number\n");
}

int odd_even(int number) {
	if(number % 2 == 0) return 0;
	else return 1;
}
