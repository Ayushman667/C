//
// Created by ayushmannag on 6/12/26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	struct student {
		char name[50];
		int age;
	};
	struct student *p;
	p=malloc(sizeof(struct student));
	strcpy(p->name, "ayushman");
	p->age=10;
	printf("%s\n", p->name);
	printf("%d", p->age);
	free(p);

	return 0;
}