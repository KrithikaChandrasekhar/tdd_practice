#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void filecopy(FILE* ifd, FILE* ofd);

int main(int argc, char* argv[]) {
	FILE* fd;
	char *programName = argv[0];

	if (argc == 1)
		filecopy(stdin, stdout);
	else
		while (--argc > 0)
			if ((fd = fopen(*++argv, "r")) == NULL) {
				fprintf(stderr, "%s: %s: Error:No such file or directory\n", programName, *argv);
			}
			else {
				filecopy(fd, stdout);
				fclose(fd);
			}
	/*    buffersize = atoi(argv[1]);
	      if (buffersize > BUFFER_SIZE) {
	      fprintf(stderr,"Error: %s: max. buffer size is %d\n",argv[0], BUFFER_SIZE);
	      }*/
}

void filecopy(FILE* ifd, FILE*ofd) {
	char buffer[BUFFER_SIZE];
	int numread;
	while ((fread(buffer, 1, sizeof(char), ifd)))
		fwrite(buffer, 1, sizeof(char), ofd);
}
