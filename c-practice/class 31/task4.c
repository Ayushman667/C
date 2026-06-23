//
// Created by ayushmannag on 6/6/26.
//
#include <stdio.h>

void updateFirst(int arr[9]) {
	arr[0]=999;
}

int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	updateFirst(arr);
	printf("%d", arr[0]);

	return 0;
}