//
// Created by ayushmannag on 6/6/26.
//
#include <stdio.h>

void twice(int *p){
	*p = *p * 2;
}

int main() {
	int a = 9;
	int *p = &a;
	twice(p);
	printf("%d", *p);

	return 0;
}