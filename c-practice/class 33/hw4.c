//
// Created by ayushmannag on 6/8/26.
//
#include <stdio.h>

int main() {
	char ch[]="Ayush";
	int size=5;
	char *p=ch;
	int length=0;
	while (*p!='\0') {
		length++;
		p++;
	}
	printf("%d", length);

	return 0;
}