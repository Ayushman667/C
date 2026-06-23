//
// Created by ayushmannag on 6/8/26.
//
#include <stdio.h>

int main() {
	int arr[]={1, 2, 3, 4, 5};
	int *p=arr;
	int i=0;
	while (i<5) {
		*p=0;
		i++;
		p++;
	}
	for (int i=0;i<5;i++) {
		printf("%d ", *(arr+i));
	}

	return 0;
}