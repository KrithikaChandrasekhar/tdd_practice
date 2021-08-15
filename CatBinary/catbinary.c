#include <stdio.h>

unsigned char buffer [20];
FILE *Ptr;
int i = 1;

int main( int argc, char *argv[]) {
      Ptr = fopen(argv[i],"rb");
      if(fread(buffer, sizeof(buffer), 1, Ptr) != EOF){
        for(i = 0; i< 20; i++){
            printf("%x", buffer[i]);
        }
      printf("\n");
      }
      fclose(Ptr);
}

