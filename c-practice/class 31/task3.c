//
// Created by ayushmannag on 6/6/26.
//
#include<stdio.h>

void swap(int *a, int *b) {
	int store=*a;
	*a=*b;
	*b=store;
}

int main() {
	int num1=10;
	int num2=15;
	printf("%d\n", num1);
	printf("%d\n", num2);
	swap(&num1, &num2);
	printf("%d\n", num1);
	printf("%d", num2);

	return 0;
}