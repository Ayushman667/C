//
// Created by ayushmannag on 6/5/26.
//

#include <stdio.h>

//string compare

int isEqual(char str1[], char str2[]);

int main() {
	char str1[100], str2[100];

	printf("Enter the first string: ");
	fgets(str1, 100, stdin);

	printf("Enter the second string: ");
	fgets(str2, 100, stdin);

	int count = isEqual(str1, str2);

	if (count == 1) {
		printf("The first string is equal to the second string.");
	}else {
		printf("The first string is not equal to the second string.");
	}


	return 0;
}

int isEqual(char str1[], char str2[]) {
	int i=0;
	int  count = 0;

	while (str1[i]!='\0') {
		if (str1[i]==str2[i]) {
			count = 1;
		}
	}
	return count;
}