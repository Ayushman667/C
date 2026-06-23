//
// Created by ayushmannag on 6/9/26.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	printf("enter the number of elements: ");
	scanf("%d", &size);
	int *p=malloc(sizeof(int)*size);
	for (int i=0;i<size;i++) {
		printf("Enter the number: ");
		scanf("%d", &p[i]);
	}
	int sum=0;
	for (int i=0;i<size;i++) {
		sum=sum+p[i];
	}
	printf("%d", sum);
	free(p);


	return 0;
}