#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	int n = 10;

	if (file = fopen(argv[1], "r")) {
		while (getline(&line, &len, file) != -1 && n != 0) {
			printf("%s", line);
			n--;
		}
		fclose(file);
	}
	else fprintf(stderr, "%s: %s: No such file or directory\n", argv[0], argv[1]);
}

