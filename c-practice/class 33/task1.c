//
// Created by ayushmannag on 6/8/26.
//
#include <stdio.h>

int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p = arr;
	int sum=0;
	while (*p<=9) {
		sum = sum + *p;
		p++;
	}
	printf("%d", sum);

	return 0;
}