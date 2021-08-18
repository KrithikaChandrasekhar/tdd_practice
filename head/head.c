#include<stdio.h>

#define DATA_SIZE 1024

int main(int argc, char* argv[]) {
    FILE *file;
    int line_number = 1;
    int input_char;
    
    file = fopen(argv[1], "r");
    while (fgetc(file) != NULL && line_number != 10) {
          fprintf (file, "%c", input_char);
	  line_number++;
    }
}

