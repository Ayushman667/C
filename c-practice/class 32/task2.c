//
// Created by ayushmannag on 6/7/26.
//
#include<stdio.h>

int max(int *arr, int size) {
	int max = arr[0];
	for (int i=0;i<size-1;i++) {
		if (arr[i]>max) {
			max=arr[i];
		}
	}
	return max;
}

int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 9, 8};
	printf("%d", max(arr, 9));

	return 0;
}