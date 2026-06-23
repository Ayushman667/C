//
// Created by ayushmannag on 6/10/26.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* p=calloc(10,sizeof(int));

	for (int i=0;i<10;i++) {
		if (i%2==0) {
			p[i]=2;
		}
	}
	for (int i=0;i<10;i++) {
		printf("%d ", p[i]);
	}
	free(p);

	return 0;
}