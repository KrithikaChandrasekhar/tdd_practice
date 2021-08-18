#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1024

int main (int argc, char* argv[]) {
    FILE *file;
    char data[DATA_SIZE];
    int n = 10;

    while (argc != 2) {
           if (gets(data, stdin) != NULL) {
	       puts(data);
	   }
	   else break;
    }
    if (file = fopen(argv[1],"r")) {
        while (fgets(data, sizeof(data),file)) {
              if (n == 0) break;
              printf("%s", data);
              n--;
        }
        fclose(file);
    }
    else fprintf (stderr, "%s: %s: No such file or directory\n", argv[0], argv[1]);
}



