#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 100

int main(int argc, char* argv[]) {
    char data[DATA_SIZE];
    FILE * fPtr;
    fPtr = fopen(argv[1], "r");
    if (!fPtr || argc != 2) {
        printf(" Error\n");
        return EXIT_FAILURE;
    }
    if (fgets (data, DATA_SIZE, fPtr) != NULL) {
        puts(data);
        fclose(fPtr);
        return EXIT_SUCCESS;
    }
}
