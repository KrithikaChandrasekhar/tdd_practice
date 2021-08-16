#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, int *argv[]) {
    if(argc==1) {
       printf("You have not entered anything!\n");
       return 0;
    }
    char *arr=malloc(1000*sizeof(char));
    int i;
    strcat(arr, argv[0]);
    strcat(arr, " ");
    for (i = 0; i < argc - 1; i++) {
         strcat(arr,argv[i+1]);
	 strcat(arr, " ");
    }

    printf("%s\n",arr);
    free(arr);
    return 0;
}
