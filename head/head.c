#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void headfile(int argcount, char *filename);
void filecopy(FILE *ifd, FILE *ofd);

char *programName;
int linenum = 10;
int argcount;

int main(int argc, char *argv[]) {
	programName = argv[0];
	if (argc == 1)
		filecopy(stdin, stdout);
	else
		while (--argc > 0)
			headfile(argc, *++argv);
}

void headfile(int argcount, char *filename) {
	FILE *fd;
	if ((fd = fopen(filename, "rb")) == NULL) {
		fprintf(stderr, "%s: %s: %s\n", programName, filename, strerror(errno));
		return;
	}
	if (argcount > 1) printf("==> %s <==\n", filename);
	filecopy(fd, stdout);
	fclose(fd);
	if (argcount > 1 ) printf("\n");
	linenum = 10;
}

void filecopy(FILE *ifd, FILE *ofd) {
	size_t len = 0;
	char *line = NULL;
	while (linenum != 0 && (getline(&line, &len, ifd) != -1)) {
		printf("%s", line);
		linenum--;
	}
}
