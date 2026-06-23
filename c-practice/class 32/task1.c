//
// Created by ayushmannag on 6/7/26.
//
#include <stdio.h>

int sum(int *arr, int size) {
	int total = 0;
	for (int i=0;i<size;i++) {
		total = total + *(arr+i);
	}
	return total;
}

int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	int total = sum(arr, 9);
	printf("%d", total);

	return 0;
}