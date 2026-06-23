//
// Created by ayushmannag on 6/8/26.
//
#include <stdio.h>

int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i=0;
	int size=9;
	while (i<=size/2) {
		int temp=*(arr+i);
		*(arr+i)=*(arr+size-i-1);
		*(arr+size-i-1)=temp;
		i++;
	}
	for (int i=0;i<size;i++) {
		printf("%d ", *(arr+i));
	}

	return 0;
}