#include<stdio.h>

void main() {
	FILE *f;
	char s;
	f = fopen("new.txt","r");
	while ((s = getc(f)) != EOF) {
		printf("%c",s);
	}
}
