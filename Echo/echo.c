#include <stdio.h>

int main (int argc, char *argv[]) {
    int i;
    if (argc <= 1) {
        printf("Enter argument\n");
    } else {
        for (i=1; i<argc; i++) {
	    printf( "%s", argv[i]);
	}
	printf ("\n");
     }
}
