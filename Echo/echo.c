#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int i, n;
	char *buffer;
	if (argc > 1) {
		for(int i = 1; i < argc; i++) {
			n = strlen(argv[i]);
			buffer = malloc((n + 1) * sizeof(char));
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

