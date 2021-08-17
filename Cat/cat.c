#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int buffersize;

int main(int argc, char* argv[]) {
   void filecopy(int ifd, int ofd);
   int fd;
   char *file_name = argv[0];

   if (argc == 1)
      filecopy(0, 1);
   else
       while (--argc > 0)
            if ((fd = open(*++argv, O_RDONLY, 0)) == -1) {
                fprintf(stderr, "%s: %s: No such file or directory\n", file_name, *argv);
            } else {
                    filecopy(fd, 1);
                    close(fd);
            }
    buffersize = atoi(argv[1]);
    if (buffersize > BUFFER_SIZE) {
        fprintf(stderr,"Error: %s: max. buffer size is %d\n",argv[0], BUFFER_SIZE);
    }
}

void filecopy(int ifd, int ofd)
{
    char buffer[BUFFER_SIZE];
    int c;
    while ((c = read(ifd, buffer, sizeof(buffer))) != 0)
            write(ofd, buffer, c);
}
