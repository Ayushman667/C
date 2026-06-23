//
// Created by ayushmannag on 6/9/26.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p=malloc(5*sizeof(int));
	for (int i=0;i<5;i++) {
		printf("%d ", p[i]);
	}
	free(p);
	printf("\n");
	int *z=calloc(5, sizeof(int));
	for (int i=0; i<5; i++) {
		printf("%d ", z[i]);
	}
	free(z);

	return 0;
}