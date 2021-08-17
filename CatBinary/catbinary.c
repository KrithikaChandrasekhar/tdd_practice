#include <stdio.h>

int main( int argc, char *argv[]) {
    unsigned char buffer [4096];
    FILE *file;
    int i = 1;
    file = fopen(argv[i],"rb");
       if(fread(buffer, sizeof(buffer), 1, file) != EOF){
          for(i = 0; i < 4096 ; i++){
              printf("%x", buffer[i]);
          }
          printf("\n");
       }
    fclose(file);
}

