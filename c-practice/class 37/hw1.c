//
// Created by ayushmannag on 6/21/26.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char name[20];
	int age;
	printf("Enter your name: ");
	fgets(name, 20, stdin);
	name[strcspn(name, "\n")] = '\0';
	printf("Enter your age: ");
	scanf("%d", &age);
	getchar();

	FILE *fp;
	fp = fopen("details.txt", "a");
	fprintf(fp, "%s %d", name, age);
	fclose(fp);

	return 0;
}