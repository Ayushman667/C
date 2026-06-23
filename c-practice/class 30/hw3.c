//
// Created by ayushmannag on 6/5/26.
//

#include <stdio.h>

int main() {
	char str[]="apple";
	int i=0;
	char ch;

	printf("Enter the character: ");
	scanf("%c", &ch);

	while (str[i]!='\0') {
		if (str[i]==ch) {
			break;
		}
		i++;
	}

	printf("%d", i+1);

	return 0;
}