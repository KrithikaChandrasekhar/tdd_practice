#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
	size_t buf_size = 0;
	for (int i = 1; i < argc; i++) {
		buf_size += strlen (argv[i]) + 1;
	}
	char *buffer = malloc (buf_size + 1);
	if (buffer != NULL) {
		for (int i = 1; i < argc; i++) {
			if (i > 1)
				strncat (buffer, " ", buf_size);
			strncat (buffer, argv[i], buf_size);
		}
		puts (buffer);
		free (buffer);
	}
	else
		printf ("memory not available");
}
