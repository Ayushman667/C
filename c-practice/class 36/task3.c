//
// Created by ayushmannag on 6/12/26.
//
#include <stdio.h>
#include <string.h>

struct student {
	int marks;
};

void increaseMarks(struct student *s) {
	s->marks+=10;
}

int main() {

	struct student s1;
	struct student *p=&s1;
	printf("Enter the marks: ");
	scanf("%d", &p->marks);
	increaseMarks(p);
	printf("%d", s1.marks);

	return 0;
}