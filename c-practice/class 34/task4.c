//
// Created by ayushmannag on 6/9/26.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;

	printf("Enter the number of elements: ");
	scanf("%d", &size);
	int *p=malloc(size*sizeof(int));
	for (int i=0;i<size;i++) {
		printf("Enter the number: ");
		scanf("%d", &p[i]);
	}
	for (int i=0;i<size;i++) {
		printf("%d ", p[i]);
	}
	printf("\n");
	for (int i=0;i<size/2;i++) {
		int temp=p[i];
		p[i]=p[size-i-1];
		p[size-i-1]=temp;
	}
	for (int i=0;i<size;i++) {
		printf("%d ", p[i]);
	}
	free(p);

	return 0;
}