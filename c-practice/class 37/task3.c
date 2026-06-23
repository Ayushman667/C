//
// Created by ayushmannag on 6/21/26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char name[20];
	int marks;
};


int main() {
	struct student s;

	printf("Enter the name: ");
	fgets(s.name, sizeof(s.name), stdin);
	s.name[strcspn(s.name, "\n")] = '\0';

	printf("Enter the marks: ");
	scanf("%d", &s.marks);
	getchar();

	FILE *fp;
	fp = fopen("student.txt", "a");
	if (fp == NULL) {
		printf("Error opening the file.\n");
		return 1;
	}
	fprintf(fp,"%s, %d\n", s.name, s.marks);
	fclose(fp);

	return 0;
}