//
// Created by ayushmannag on 6/12/26.
//
#include <stdio.h>
#include <stdlib.h>

struct date {
	int day;
	int month;
	int year;
};

struct student {
	char name[20];
	struct date dob;
};

int main() {
	struct student s1;
	printf("Enter you name: ");
	fgets(s1.name, 20, stdin);
	printf("Enter your day of birth: ");
	scanf("%d", &s1.dob.day);
	getchar();
	printf("Enter your month: ");
	scanf("%d", &s1.dob.month);
	getchar();
	printf("Enter your year: ");
	scanf("%d", &s1.dob.year);
	getchar();
	printf("%s, your dob is: %d/%d/%d", s1.name, s1.dob.day, s1.dob.month, s1.dob.year);

	return 0;
}