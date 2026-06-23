//
// Created by ayushmannag on 6/5/26.
//

#include <stdio.h>

int length(char str[]);


int main() {
	char str[]="Table";
	int size = length(str);
	for (int i=0;i<size/2;i++) {
		char x = str[i];
		str[i]=str[size-i-1];
		str[size-i-1]=x;
	}
	printf("%s\n", str);

	return 0;
}

int length(char str[]) {
	int i=0;

	while (str[i]!='\0') {
		i++;
	}
	return i;
}