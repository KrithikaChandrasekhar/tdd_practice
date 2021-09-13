#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void headfile(int count, int argc, char *filename);
void filecopy(FILE *ifd, FILE *ofd);

char *programName;
int linenum = 10;

int main(int argc, char *argv[]) {
	programName = argv[0];
	if (argc == 1)
		filecopy(stdin, stdout);
	else
		for (int count = 1; count < argc; count++) {
			headfile(count, argc, argv[count]);
			if ((count < argc - 1) && (fopen(argv[count+1], "rb")) && fopen(argv[count], "rb")) printf("\n");
			linenum = 10;
		}
}

void headfile(int count, int argc, char *filename) {
	FILE *fd;
	if ((fd = fopen(filename, "rb")) == NULL) {
		fprintf(stderr, "%s: cannot open '%s' for reading: %s\n", programName, filename, strerror(errno));
		return;
	}
	if (argc > 2)
		printf("==> %s <==\n", filename);
	filecopy(fd, stdout);
	fclose(fd);
}

void filecopy(FILE *ifd, FILE *ofd) {
	size_t len = 0;
	char *line = NULL;
	while (linenum != 0 && (getline(&line, &len, ifd) != -1)) {
		printf("%s", line);
		linenum--;
	}
}
