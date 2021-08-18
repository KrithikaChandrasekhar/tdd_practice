#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int i, n;

    if (argc > 1) {
	for (i = 1; i < argc; i++) {
	     n = strlen(argv[i]);
	     char *arr = malloc(n* sizeof(char));
	     if (argv[i] != NULL) {
		 strncat (arr, argv[i], n);
		 printf("%s", arr);
	     }
	}
	printf("\n");
    }
    else printf("\n");
}
