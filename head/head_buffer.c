#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define DATA_SIZE 1024

int main (int argc, char* argv[]) {
	FILE *file;
	char data[DATA_SIZE];
	int linenum = 10;

	if (argc == 1) {
		while (linenum != 0 && (fgets(data, sizeof(data), stdin)) != NULL) {
			fputs(data, stdout);
			linenum--;
		}
	}
	else
		for(int i = 1; i < argc; i++) {
			if (file = fopen(argv[i], "r")) {
				if (argc > 2) printf("==> %s <==\n", argv[i]);
				while ((fgets(data, sizeof(data), file) != NULL) && linenum != 0) {
					printf("%s", data);
					linenum--;
				}
				fclose(file);
				if ((i < argc - 1) && (file = fopen(argv[i+1], "r"))) printf("\n");
				linenum = 10;
			}
			else fprintf (stderr, "%s: cannot open '%s' for reading: %s\n", argv[0], argv[i], strerror(errno));
		}
}
