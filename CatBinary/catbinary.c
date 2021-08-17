#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    char buffer[BUFFER_SIZE];
    FILE *file;
    int c;


    if (argc == 1) {
        while ((c = read(0, buffer, sizeof(buffer))) != 0)
              write(1, buffer, c);
    }
    else {
          if ((file = open(*++argv, O_RDONLY, 0)) > 0) {
	       while (c = read(file, buffer, sizeof(buffer)) != 0) {
		     printf("%s", buffer);
               }
               close(file);
          }
    }
}
