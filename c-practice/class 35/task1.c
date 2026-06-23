//
// Created by ayushmannag on 6/10/26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *p) {
	int sum=0;
	while (*p!='\0') {
		sum++;
		p++;
	}
	return sum-1;
}

int main() {
	char *p=malloc(100*sizeof(char));
	char arr[100];
	printf("Enter the name: ");
	fgets(p, 100, stdin);
	int length = mystrlen(p);
	printf("The length of the string is: %d", length);
	free(p);

	return 0;
}