//
// Created by ayushmannag on 6/12/26.
//
#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	int marks;
};

int max(int m1, int m2, int m3, int m4, int m5) {
	int i=0;
	int max=m1;
	if (m2 > max) {
		max = m2;
		i=1;
	}
	if (m3 > max) {
		max = m3;
		i=2;
	}
	if (m4 > max) {
		max = m4;
		i=3;
	}
	if (m5 > max) {
		max = m5;
		i=4;
	}
	return i;
}

int main() {
	struct student student[5];
	for (int i=0;i<5;i++) {
		printf("Enter the name of student: ");
		fgets(student[i].name, 20, stdin);
		printf("Enter the marks: ");
		scanf("%d", &student[i].marks);
		getchar();
	}
	int final = max(student[0].marks, student[1].marks, student[2].marks, student[3].marks, student[4].marks);

	printf("The highest marks is %d and is scored by: %s", student[final].marks, student[final].name);

	return 0;
}