//
// Created by ayushmannag on 6/12/26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char name[50];
	int marks;
};

void swap(struct student *a, struct student *b) {
	char temp[50];
	strcpy(temp, a->name);
	strcpy(a->name, b->name);
	strcpy(b->name, temp);
	int temp_marks = a->marks;
	a->marks = b->marks;
	b->marks = temp_marks;
}

int main() {
	struct student *student;
	student=malloc(2*sizeof(struct student));

	for (int i=0;i<2;i++) {
		printf("Enter the name: ");
		fgets(student[i].name, 50, stdin);
		student[i].name[strlen(student[i].name)-1] = '\0';
		printf("Enter the marks: ");
		scanf("%d", &student[i].marks);
		getchar();
	}
	printf("%s %d\n", student[0].name, student[0].marks);
	printf("%s %d\n", student[1].name, student[1].marks);

	swap(&student[0], &student[1]);

	printf("%s %d\n", student[0].name, student[0].marks);
	printf("%s %d", student[1].name, student[1].marks);

	free(student);

	return 0;
}