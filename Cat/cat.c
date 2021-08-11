#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 100

int main(int argc, char* argv[]) {
    char data[DATA_SIZE];
    FILE * fPtr;
    int i = 1;
    while (i == 1 && argc < 2) {
        gets(data);
        puts(data);
    }

    for (i=1; i < argc; i++) {
        if (fPtr = fopen(argv[i], "r")){
	  if (fgets (data, DATA_SIZE, fPtr) != NULL) {
	     printf("%s", data);
	     fclose(fPtr);
	  }
	 }
	 else  printf ("cat: No such file or directory\n");
    }
}
