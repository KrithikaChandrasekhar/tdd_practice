#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int result = printf("testing echo");
    if (result > 0) {
        printf("\n%d: characters written\n", result);
	return EXIT_SUCCESS;
    }
    else return EXIT_FAILURE;
}*/

int main() {
    printf(" \n %s \n", __FILE__);
    printf("printing line %d of file \"%s\".\n", __LINE__,__FILE__);
}
