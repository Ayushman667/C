//
// Created by ayushmannag on 6/6/26.
//
#include <stdio.h>

int main() {
	int arr[]={1, 2, 3, 4 , 5};
	printf("%d\n", arr[0]);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	printf("%p\n", arr);


	return 0;
}