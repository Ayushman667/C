//
// Created by ayushmannag on 6/6/26.
//
#include <stdio.h>

void swap(int *x, int *y) {
	int change = *x;
	*x = *y;
	*y = change;
}

int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 99};
	int i=0;
	int largest = arr[0], smallest = arr[0];
	while (i<12) {
		if (arr[i]>arr[i+1]) {
			largest = arr[i];
		}else if (arr[i]<arr[i+1]) {
			smallest = arr[i];
		}
		i++;
	}

	swap(&largest, &smallest);

	printf("%d\n", largest);
	printf("%d", smallest);

	return 0;
}