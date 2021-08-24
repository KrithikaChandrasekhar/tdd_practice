#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

void headfile(char *filename);
void filecopy(FILE *ifd, FILE *ofd);

char *programName;
int linenum = 10;

int main(int argc, char *argv[]) {
	programName = argv[0];
	if (argc == 1)
		filecopy(stdin, stdout);
	else
		while (--argc > 0)
			headfile(*++argv);
}

void headfile(char *filename) {
	FILE *fd;
	if ((fd = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "%s: %s: %s\n", programName, filename, strerror(errno));
		return;
	}
	filecopy(fd, stdout);
	fclose(fd);
	linenum = 10;
}

void filecopy(FILE *ifd, FILE *ofd) {
	char buffer[BUFFER_SIZE];
	ssize_t numread;
	size_t len = 0;
	char *line = NULL;
	while (numread = (fread(buffer, sizeof(char), BUFFER_SIZE, ifd))) {
		fwrite(buffer, sizeof(char), BUFFER_SIZE, ofd);
		linenum--;
	}
}


