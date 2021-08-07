#include <stdio.h>

int main(void) {
	char c;
	c = getchar();
	while (c != '\n') {
		if (c!= ' ') putchar (c);
		else putchar ('\n');
		c= getchar();
	}
	printf("\n");
	return 0;
}
