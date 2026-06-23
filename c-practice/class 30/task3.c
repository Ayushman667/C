//
// Created by ayushmannag on 6/5/26.
//

#include <stdio.h>

//palindrome checker

int isPalindrome(char str[]);
int length(char str[]);

int main() {
	char word[50];

	printf("Enter the word: ");
	scanf("%s", word);

	int x = isPalindrome(word);

	if (x==0) {
		printf("The word is palindrome.");
	}else {
		printf("The word is not palindrome.");
	}


	return 0;
}

int length(char str[]) {
	int i=0;

	while (str[i]!='\0') {
		i++;
	}
	return i;
}

int isPalindrome(char str[]) {

	int x=0;
	int size = length(str);
	for (int i=0;i<size/2;i++) {
		if (str[i]!=str[size-i-1]) {
			x=1;
			break;
		}
	}
	return x;
}