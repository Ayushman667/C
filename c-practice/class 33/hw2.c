//
// Created by ayushmannag on 6/8/26.
//
#include <stdio.h>

int main() {
	int arr[]={1, 2, 3, 4, 5};
	int *p=arr;
	int i=0;
	int min=arr[0];
	while (i<5) {
		if (*p<min) {
			min=*p;
		}
		i++;
		p++;
	}
	printf("The minimum value is: %d", min);

	return 0;
}