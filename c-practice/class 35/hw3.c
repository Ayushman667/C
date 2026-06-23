//
// Created by ayushmannag on 6/11/26.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *str=malloc(1000*sizeof(char));
	char *str1=str;
	printf("Enter anything: ");
	fgets(str, 1000, stdin);
	printf("The string: %s has \n", str);
	int uc=0, lc=0, digits=0, spaces=0;
	while (*str!='\0') {
		if (*str==' ') {
			spaces++;
		}else if (*str >= 'A' && *str <= 'Z') {
			uc++;
		}else if (*str >= 'a' && *str <= 'z') {
			lc++;
		}else if (*str >= '0' && *str <= '9') {
			digits++;
		}
		str++;
	}
	printf("Digits: %d\n", digits);
	printf("Uppercase letter: %d\n", uc);
	printf("Lowercase letter: %d\n", lc);
	printf("spaces: %d", spaces);
	free(str1);

	return 0;
}