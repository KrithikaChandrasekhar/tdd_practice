# include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
   int i;
   char str1[]= "Implementing echo";
   char str2[] = " in c ";
   
   if (argc > 1) {
       for (i = 1; i < argc; i++) {
            if(argv[i] != NULL)
	    printf("%li\n",strlen(argv[i]));
       }
   }
   else printf("\n");
//   printf("%s\n",strcat(str1, str2));
}
