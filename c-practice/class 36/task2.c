//
// Created by ayushmannag on 6/12/26.
//
#include <stdio.h>
#include <string.h>

int main() {
	struct student {
		char name[50];
		int rollNumber;
		float marks;
	};
	struct student student[3];
	student[0].marks=50;
	student[1].marks=65;
	student[2].marks=80;
	student[0].rollNumber=1;
	student[1].rollNumber=2;
	student[2].rollNumber=3;
	printf("%f %f %f %d %d %d", student[0].marks, student[1].marks, student[2].marks, student[0].rollNumber, student[1].rollNumber, student[2].rollNumber);
	strncpy(student[0].name, "ayushman", sizeof(student[0].name));


	return 0;
}