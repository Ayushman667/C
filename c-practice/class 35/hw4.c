//
// Created by ayushmannag on 6/11/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char p[1000];
	printf("Enter the string: ");
	fgets(p, 1000, stdin);
	p[strcspn(p, "\n")] = '\0';
	char *a=calloc((strlen(p)+1), sizeof(char));
	int size = strlen(p);
	int i=0;
	while (i<size) {
		a[i]=p[size - i - 1];
		i++;
	}
	a[size]='\0';
	printf("%s", a);
	free(a);

	return 0;
}