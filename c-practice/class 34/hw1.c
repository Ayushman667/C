//
// Created by ayushmannag on 6/9/26.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	printf("Enter the number of elements: ");
	scanf("%d", &size);
	int* p=malloc(size*sizeof(int));
	for (int i=0;i<size;i++) {
		printf("Enter the number: ");
		scanf("%d", &p[i]);
	}
	int max=p[0];
	for (int i=0;i<size;i++) {
		if (p[i]>max) {
			max=p[i];
		}
	}
	printf("The maximum number from the array you entered is: %d", max);
	free(p);

	return 0;
}