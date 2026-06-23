//
// Created by ayushmannag on 6/5/26.
//

#include <stdio.h>

int length(char str[]) {
	int i=0;
	int count=0;
	while (str[i]!='\0') {
		count++;
		i++;
	}
	return count;
}

int main() {
	char str[50]="ayushman";
	int i=0;
	int size = length(str);

	while (i<size) {
		if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
			int x=i;
			while (str[x]!='\0') {
				str[x]=str[x+1];
				x++;
			}
			i--;
		}
		i++;
	}

	printf("%s",str);

	return 0;
}