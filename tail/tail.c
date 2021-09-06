#include <stdio.h>

void main(int argc, char* argv[]) {
    char line[1000];
    if (argc > 1) {
	for (int i = 1; i< argc; i++)
		printf("%s\n", (argv[i]));
    }
    else printf("\n");
}
