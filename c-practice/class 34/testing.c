//
// Created by ayushmannag on 6/10/26.
//
#include<stdio.h>
#include<stdlib.h>
int main() {
	int *p = malloc(5 * sizeof(int));

	for(int i = 0; i < 5; i++)
	{
		p[i] = 999;
	}

	free(p);

	int *z = malloc(5 * sizeof(int));

	for(int i = 0; i < 5; i++)
	{
		printf("%d ", z[i]);
	}
	free(z);

	return 0;
}