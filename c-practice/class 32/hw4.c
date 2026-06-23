//
// Created by ayushmannag on 6/7/26.
//
#include <stdio.h>

int main() {
	int a[]={1, 2, 3, 4};
	int b[]={10, 20, 30, 40};
	for (int i=0;i<4;i++) {
		printf("%d ", b[i]);
	}
	printf("\n");
	int i=0;
	while (i<4) {
		*(b+i)=*(a+i);
		printf("%d ", b[i]);
		i++;
	}


	return 0;
}