//
// Created by ayushmannag on 6/5/26.
//

#include <stdio.h>

int length(char str[]);
int frequency(char str[], char target);

int main() {
	char str[50];
	char target;

	printf("Enter the string: ");
	fgets(str, 50, stdin);

	printf("Enter the target character: ");
	scanf("%c", &target);

	int count = frequency(str, target);

	printf("The frequency of %c in %s is: %d", target, str, count);


	return 0;
}

int length(char str[]) {
	int i=0;

	while (str[i]!='\0') {
		i++;
	}
	return i;
}

int frequency(char str[], char target) {
	int i=0;
	int count=0;
	length(str);

	while (str[i]!='\0') {
		if (str[i]==target) {
			count++;
		}
		i++;
	}


	return count;
}