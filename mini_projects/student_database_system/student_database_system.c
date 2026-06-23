//
// Created by ayushmannag on 6/13/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count =0;

FILE *fp;


struct student {
	char name[20];
	int roll;
	int marks;
};



void add_student(struct student *s,int i) {
	fp = fopen("student.txt", "a");
		printf("Enter the name: ");
		fgets(s[i].name, 20, stdin);
		s[i].name[strcspn(s[i].name, "\n")] = '\0';
	fprintf(fp, "%s ", s[i].name);
		printf("Enter the roll: ");
		scanf("%d", &s[i].roll);
		getchar();
	fprintf(fp, "%d ", s[i].roll);
		printf("Enter the marks for the student: ");
		scanf("%d", &s[i].marks);
		getchar();
	fprintf(fp, "%d \n", s[i].marks);
	fclose(fp);
}
void print_all_student(struct student *s, int size) {
	fp = fopen("student.txt", "r");
	for (int i=0;i<size;i++) {
		fscanf(fp, "%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
		printf("%s\n", s[i].name);
	}
	fclose(fp);
}

void topper(struct student *s, int size) {
	int max = s[0].marks;
	for (int i=0;i<size;i++) {
		if (s[i].marks > max) {
			max = s[i].marks;
		}
	}
	for (int i=0;i<size;i++) {
		if (s[i].marks == max) {
			printf("The topper is: %s\n", s[i].name);
		}
	}
}

void search(struct student *s, int roll, int size) {
	for (int i=0;i<size;i++) {
		if (roll == s[i].roll) {
			printf("name: %s\n", s[i].name);
			printf("roll: %d\n", s[i].roll);
			printf("marks: %d\n", s[i].marks);
			break;
		}else {
			printf("Student not found\n");
		}
	}
}

void update_marks(struct student *s, char name[], int size) {
	int marks;
	printf("Enter the marks: ");
	scanf("%d", &marks);
	getchar();
	for (int i=0;i<size;i++) {
		if (strcmp(s[i].name, name) == 0) {
			s[i].marks = marks;
			printf("\n");
			break;
		}
	}
}

void delete_student(struct student *s, int roll, int size) {
	for (int i=0;i<size;i++) {
		if (s[i].roll == roll) {
			for (int j=i;j<size-1;j++) {
				s[j] = s[j+1];
			}
		}
	}
	printf("\n");
}

void average_marks(struct student *s, int size) {
	int sum=0;
	for (int i=0;i<size;i++) {
		sum = sum + s[i].marks;
	}
	float avg = (float)sum / (float)size;
	printf("The average marks is %.2f\n", avg);
}


int print_menu() {
	int result;
	printf("Press 1 to add student\n"
			"Press 2 to print all students\n"
			"Press 3 to find topper\n"
			"Press 4 to search by roll number\n"
			"Press 5 to update marks\n"
			"Press 6 to delete student info\n"
			"Press 7 to find average marks\n"
			"press 8 to exit\n");

	scanf("%d", &result);
	getchar();
	return result;
}


int main() {
	struct student *s = malloc(sizeof(struct student));
	while (1) {
	int num = print_menu();
		if (num == 1) {
			count++;
			struct student* temp = realloc(s, count * sizeof(struct student));
			if(temp == NULL) {
				goto cleanup;
			}
			s = temp;
			add_student(s, count - 1);
		}
		if (num == 2) {
			print_all_student(s, count);
		}
		if (num == 3) {
			topper(s, count);
		}
		if (num == 4) {
			int roll;

			int found = 0;
			do {
				printf("Enter the roll number: ");
				scanf("%d", &roll);
				getchar();
				for (int i=0;i<count;i++) {
					if (roll == s[i].roll) {
						found = 1;
						search(s, roll, count);
						break;
					}
				}
				if (found == 0) {
					printf("Student not found\n");
				}
			}while (!found);
		}
		if (num == 5) {
			char name[20];
			printf("Enter the name: ");
			fgets(name, 20, stdin);
			name[strcspn(name, "\n")] = '\0';
			update_marks(s, name, count);
		}
		if (num == 6) {
			int roll;
			int result = 0;
			do {
				printf("Enter the roll number: ");
				scanf("%d", &roll);
				getchar();
				if (count == 0) {
					printf("No student available.");
				}
				else {
					for (int i=0;i<count;i++) {
						if (roll == s[i].roll) {
							result = 1;
							delete_student(s, roll, count);
							count--;
							break;
						}
					}
				}
				if (result == 0) {
					printf("Roll number not found\n");
				}
			}while (!result);
		}
		if (num == 7) {
			average_marks(s, count);
		}
		if (num == 8) {
			break;
		}
		cleanup:
	}
	free(s);
	return 0;
}