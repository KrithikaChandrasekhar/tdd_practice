#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void filecopy(FILE *ifd, FILE *ofd);

int main(int argc, char* argv[]) {
	FILE *fd;
	char *programName = argv[0];

	if (argc == 1)
		filecopy(stdin, stdout);
	else
		while (--argc > 0)
			if ((fd = fopen(*++argv, "r")) == NULL) {
				fprintf(stderr, "%s: %s: %s\n", programName, *argv, strerror(errno));
			}
			else {
				filecopy(fd, stdout);
				fclose(fd);
			}
}

void filecopy(FILE *ifd, FILE *ofd) {
	char buffer[BUFFER_SIZE];
	int numread;
	while (numread = (fread(buffer, sizeof(char), BUFFER_SIZE, ifd)))
		fwrite(buffer, numread, sizeof(char), ofd);
}
