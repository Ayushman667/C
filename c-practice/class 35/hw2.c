//
// Created by ayushmannag on 6/11/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mystrcat(char *c1, char *c2) {
	while (*c1 != '\0') {
		c1++;
	}
	while (*c2 != '\0') {
		*c1 = *c2;
		c1++;
		c2++;
	}
	*c1='\0';
}

int main() {
	char c1[100]="hello";
	char c2[100]="world";
	mystrcat(c1, c2);

	int length = strlen(c1);

	for (int i=0;i<length;i++) {
		printf("%c", c1[i]);
	}

	return 0;
}