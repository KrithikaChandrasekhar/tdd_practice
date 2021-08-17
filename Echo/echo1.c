#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, int *argv[]) {

    if (argc > 1) {
       int i, n;
       char *arr = malloc(n * sizeof(char));
       for (i = 1; i < argc; i++) {
           strncat(arr, argv[i], 2);
           printf("%s", arr);
       }
       free(arr);
    }
    else printf("\n");
}
