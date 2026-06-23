//
// Created by ayushmannag on 6/6/26.
//
#include <stdio.h>

int main() {
	int a = 10;
	int *p=&a;
	printf("%d\n", a);
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%d", *p);


	return 0;
}