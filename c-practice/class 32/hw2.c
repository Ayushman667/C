//
// Created by ayushmannag on 6/7/26.
//
#include <stdio.h>

int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i=0, count=0;
	while (i<9) {
		if (*(arr+i)%2==0) {
			count++;
		}
		i++;
	}
	printf("%d", count);

	return 0;
}