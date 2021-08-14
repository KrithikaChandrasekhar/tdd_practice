#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 100

int main(int argc, char* argv[]) {
    char data[DATA_SIZE];
    FILE * fPtr;
    int i = 1;

    while (argc <  2) {
       if (gets(data, stdin) != NULL) {
           puts(data);
       }
       else break;
   }

    for (i=1; i < argc; i++) {
       if (fPtr = fopen(argv[i], "rb")) {
          if (fgets(data, DATA_SIZE, fPtr) != NULL) {
	      printf("%s", data);
	      fclose(fPtr);
	  }
	}
       else fprintf(stderr,"%s: %s: No such file or directory\n", argv[0],argv[i]);
     }
}
