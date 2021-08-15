# include <stdio.h>

int main(int argc, char* argv[]) {
   int i;
   if (argc > 1) {
       for (i = 1; i < argc; i++) {
            if(argv[i] != NULL)
	    printf("%s\n", argv[i]);
            //puts(argv[i]);
       }
   }
    else printf("\n");
}
