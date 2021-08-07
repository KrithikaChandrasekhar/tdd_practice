#include <stdio.h>

int main(void) {
	char c;
	c = getchar();
	while (c != '\n') {
		putchar (c);
		c = getchar();
	}
	printf("\n");
	return 0;
}
