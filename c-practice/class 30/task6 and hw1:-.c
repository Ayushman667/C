//
// Created by ayushmannag on 6/5/26.
//

#include <stdio.h>

int main() {
	char str[100];
	int i=0;
	int lc=0, uc=0, digit=0;

	printf("Enter the string: ");
	fgets(str, 100, stdin);

	while (str[i]!='\0') {
		if (str[i]>='a'&&str[i]<='z') {
			lc++;
		}else if (str[i]>='A'&&str[i]<='Z') {
			uc++;
		}else if (str[i]>='0'&&str[i]<='9') {
			digit++;
		}
		i++;
	}

	printf("The number of lowercase characters in %s is: %d\n", str, lc);
	printf("The number of uppercase characters in %s is: %d\n", str, uc);
	printf("The number of digits in %s is: %d\n", str, digit);


	return 0;
}