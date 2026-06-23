//
// Created by ayushmannag on 6/12/26.
//
#include <stdio.h>

int main() {
	struct student {
		char name[50];
		int rollNumber;
		float marks;
	};
	struct student s1;
	printf("Enter the name: ");
	fgets(s1.name, 50, stdin);
	printf("Enter the roll number: ");
	scanf("%d", &s1.rollNumber);
	printf("Enter the marks: ");
	scanf("%f", &s1.marks);
	printf("The name, roll number and marks of the student is: %s, %d, %f", s1.name, s1.rollNumber, s1.marks);

	return 0;
}