#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 100

int main()
{
    char data[DATA_SIZE];
    FILE * fPtr;
    fPtr = fopen("text.txt", "r");
    if (fPtr == NULL) {
        printf(" Error in opening file \n");
	return 0;
    }
    else printf("Opening text.txt file to read its contents: \n");
    if (fgets (data, DATA_SIZE, fPtr) != NULL) {
        puts(data);
        fclose(fPtr);
    }
    printf("text.txt file closed. \n");
    return 0;
}
