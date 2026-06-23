//
// Created by ayushmannag on 6/9/26.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	printf("Enter the max size of string: ");
	scanf("%d", &size);
	getchar();
	char *p=malloc(size*sizeof(char));
	printf("Enter the string: ");
	fgets(p, size+1, stdin);
	puts(p);
	free(p);

	return 0;
}