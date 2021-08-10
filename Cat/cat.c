#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 100

int main()
{
    char data[DATA_SIZE];
    FILE * fPtr;
    fPtr = fopen("new.txt", "w");
    printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);

    fputs(data, fPtr);
    fclose(fPtr);
    printf("File created and saved successfully. \n");

    return 0;
}
