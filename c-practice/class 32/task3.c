//
// Created by ayushmannag on 6/7/26.
//
#include<stdio.h>

void reverse(int *arr, int size) {
	for (int i=0;i<(size+1)/2;i++) {
		int store = arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i]=store;
	}
}

int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	reverse(arr, 9);
	for (int i=0;i<9;i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}