#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void catfile(char *filename);
void filecopy(FILE *ifd, FILE *ofd);

char *programName;

int main(int argc, char *argv[]) {
	programName = argv[0];
	if (argc == 1)
		filecopy(stdin, stdout);
	else 
		while (--argc > 0) 
			catfile(*++argv);
}

void catfile(char *filename) {
	FILE *fd;
	if ((fd = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "%s: %s: %s\n", programName, filename, strerror(errno));
		return;
	}
	filecopy(fd, stdout);
	fclose(fd);
}

void filecopy(FILE *ifd, FILE *ofd) {
	char buffer[BUFFER_SIZE];
	int numread;
	while (numread = (fread(buffer, sizeof(char), BUFFER_SIZE, ifd)))
		fwrite(buffer, sizeof(char), numread, ofd);
}
