//
// Created by ayushmannag on 6/10/26.
//
#include <stdio.h>
#include <stdlib.h>

int mystrcmp(char *a, char *b) {
	int i=0;
	while (*a!='\0' && *b!='\0') {
		if (*a!=*b) {
			i=1;
			break;
		}
		a++;
		b++;
	}
	return i;
}

int main() {
	char *a=malloc(100*sizeof(char));
	char *b=malloc(100*sizeof(char));
	printf("Enter the first string: ");
	fgets(a, 100, stdin);
	printf("Enter the second string: ");
	fgets(b, 100, stdin);
	int final=mystrcmp(a, b);
	if (final==0) {
		printf("identical");
	}else {
		printf("Different");
	}
	free(a);
	free(b);

	return 0;
}