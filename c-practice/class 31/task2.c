//
// Created by ayushmannag on 6/6/26.
//
#include <stdio.h>

int change(int *p) {
	*p = *p + 10;
	return *p;
}

int main() {
	int x=5;
	int value=change(&x);
	printf("%d", value);

	return 0;
}