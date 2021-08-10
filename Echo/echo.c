#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result = printf("testing echo");
    if (result > 0) {
        printf("\n%d: characters written\n", result);
	return EXIT_SUCCESS;
    }
    else return EXIT_FAILURE;
}
