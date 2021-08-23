#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	int linenum = 10;
	int inputchar;

	if (argc == 1) {
		while (linenum != 0 && (inputchar = fgetc(stdin)) != EOF) {
			if (inputchar == '\n') linenum--;
			fputc(inputchar, stdout);
		}
	}
	else
		for(int i = 1; i < argc; i++) {
			if ((file = fopen(argv[i], "r")) != NULL) {
				while (getline(&line, &len, file) != -1 && linenum != 0) {
					fputs(line, stdout);
					linenum--;
				}
				fclose(file);
				linenum = 10;
			}
			else fprintf(stderr, "%s: %s: %s\n", argv[0], argv[i], strerror(errno));
		}
}

