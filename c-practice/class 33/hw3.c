//
// Created by ayushmannag on 6/8/26.
//
#include <stdio.h>

int main() {
	char ch1[]="Ayush";
	char ch2[]="Harsh";
	printf("%s\n", ch1);
	printf("%s\n", ch2);
	for (int i=0;i<5;i++) {
		char ch3=*(ch1+i);
		*(ch1+i)=*(ch2+i);
		*(ch2+i)=ch3;
	}
	printf("%s\n", ch1);
	printf("%s", ch2);

	return 0;
}