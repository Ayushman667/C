//
// Created by ayushmannag on 6/21/26.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	FILE *fp;

	for (int i=0;i<3;i++) {
		char name[20];
		fp = fopen("hw2.txt", "a");
		printf("Enter the name: ");
		fgets(name, 20, stdin);
		name[strcspn(name, "\n")] = '\0';
		fprintf(fp, "%s \n", name);
		fclose(fp);
	}


	return 0;
}