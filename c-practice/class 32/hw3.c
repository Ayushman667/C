//
// Created by ayushmannag on 6/7/26.
//
#include <stdio.h>

int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i=0;
	while (i<9) {
		arr[i]=arr[i]*2;
		printf("%d ", arr[i]);
		i++;
	}


	return 0;
}