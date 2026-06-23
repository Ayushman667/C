//
// Created by ayushmannag on 6/8/26.
//
#include<stdio.h>
#include <stdlib.h>

int main() {
	int *p = malloc(5);
	*p = 20;
	printf("%d", *p);
	free(p);

	return 0;
}
