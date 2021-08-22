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
				strncat(arr, argv[i], n);
				if (i < argc - 1) strncat(arr, " ", n);
				printf("%s", arr);
			}
			else printf("memory cannot be allocated\n");
		}
		printf("\n");
	}
	else printf("\n");
}
