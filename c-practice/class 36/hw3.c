//
// Created by ayushmannag on 6/12/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
	char name[50];
	int rollNumber;
	int marks;
};

int main() {
	struct student *student;
	student=malloc(3*sizeof(struct student));

	for (int i=0;i<3;i++) {
		printf("Enter the name: ");
		fgets(student[i].name, 50, stdin);
		student[i].name[strlen(student[i].name)-1] = '\0';
		printf("Enter the roll number: ");
		scanf("%d", &student[i].rollNumber);
		getchar();
		printf("Enter the marks: ");
		scanf("%d", &student[i].marks);
		getchar();
	}

	for (int i=0;i<3;i++) {
		printf("%s", student[i].name);
		printf("%d\n", student[i].rollNumber);
		printf("%d\n", student[i].marks);
	}

	free(student);

	return 0;
}