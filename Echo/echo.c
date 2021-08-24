#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char *buffer;
	int n;
	buffer = malloc((n + 1) * sizeof(char));

	if (argc > 1) {
		for(int i = 1; i < argc; i++) {
			n = strlen(argv[i]);
			printf("%d", n);
		}
		for(int i = 1; i < argc; i++) {
			strncat(buffer, argv[i], n);
			if( i < argc - 1) strncat(buffer, " ", n);
		}
		printf("%s\n", buffer);
		free(buffer);
	}
	else printf("\n");
}

