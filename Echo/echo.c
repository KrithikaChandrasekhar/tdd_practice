# include <stdio.h>

int main(int argc, char* argv[]) {
   int i;
   if (argc > 1) {
       for (i = 1; i < argc; i++)
       puts(argv[i]);
       }
    else
    puts(" ");
}
