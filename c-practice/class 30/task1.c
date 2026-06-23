//
// Created by ayushmannag on 6/5/26.
//

#include <stdio.h>

//string copy

void myCopy(char dest[], char src[]);

int main() {
	char src[100];
	char dest[100];

	printf("Enter the source string: ");
	fgets(src, 100, stdin);

	printf("Enter the destination string: ");
	fgets(dest, 100, stdin);

	myCopy(dest, src);

	printf("Both the strings are changed: %s, %s", src, dest);

	return 0;
}

void myCopy(char dest[], char src[]) {
	int i=0;
	while (src[i]!='\0') {
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
}