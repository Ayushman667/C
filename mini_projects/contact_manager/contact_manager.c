//
// Created by ayushmannag on 6/13/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct contact
{
	char name[20];
	char email[30];
	char phone[20];
};

int count = 0;

void inputContact(struct contact *c)
{
	printf("Enter the name: ");
	fgets(c->name, 20, stdin);
	c->name[strcspn(c->name, "\n")] = '\0';
	printf("Enter the email: ");
	fgets(c->email, 30, stdin);
	c->email[strcspn(c->email, "\n")] = '\0';
	printf("Enter the phone: ");
	fgets(c->phone, 20, stdin);
	c->phone[strcspn(c->phone, "\n")] = '\0';
}


void searchContact(struct contact *c,char name[20], int size) {
	for (int i=0;i<size;i++) {
		if (strcmp(name, c[i].name)==0) {
			printf("name:- %s\n", c[i].name);
			printf("email:- %s\n", c[i].email);\
			printf("phone:- %s\n", c[i].phone);
		}
	}
}


void delete_contact(struct contact *c, char phone[20], int size) {
	for (int i=0;i<size;i++) {
		if (strcmp(phone, c[i].phone) == 0) {
			for (int j=i;j<size-1;j++) {
				c[j]=c[j+1];
			}
		}
	}
}


void modify_contact(struct contact *c, char phone[20], int size, char field_name[20]) {
	for (int i=0;i<size;i++) {
		if (strcmp(phone, c[i].phone) == 0) {
			if (strcmp(field_name, "name") == 0) {
				printf("Enter the name: ");
				fgets(c[i].name, 20, stdin);
			}
			if (strcmp(field_name, "email") == 0) {
				printf("Enter the email: ");
				fgets(c[i].email, 20, stdin);
			}
			if (strcmp(field_name, "phone") == 0) {
				printf("Enter the phone: ");
				fgets(c[i].phone, 20, stdin);
			}
			if (strcmp(field_name, "all") == 0) {
				printf("Enter the name: ");
				fgets(c[i].name, 20, stdin);
				printf("Enter the email: ");
				fgets(c[i].email, 20, stdin);
				printf("Enter the phone: ");
				fgets(c[i].phone, 20, stdin);
			}
		}
	}
}


void print_contacts(struct contact *c, int size) {
	for (int i=0;i<size;i++) {
		printf("Name: %s\n", c[i].name);
		printf("Email: %s\n", c[i].email);
		printf("Phone: %s\n", c[i].phone);
	}
}


int print_menu() {
	int num;
	printf("press 1 to add contacts\n"
				"press 2 to search by name\n"
				"press 3 to delete contact\n"
				"press 4 to modify contact\n"
				"press 5 to print all contacts\n"
				"press 6 to exit\n");
	scanf("%d", &num);
	getchar();
	return num;
}


int main()
{
	struct contact *c = NULL;
	c = malloc(count * sizeof(struct contact));
	if(c == NULL)
	{
		goto cleanup;
	}
	while (1) {
		int num = print_menu();
		if(num == 1)
		{
			count++;
			struct contact* temp = realloc(c, count * sizeof(struct contact));
			if(temp == NULL) {
				goto cleanup;
			}
				c = temp;
			inputContact(&c[count - 1]);
		}
		if(num == 2) {
			char input[20];
			printf("Enter the name: ");
			fgets(input, 20, stdin);
			input[strcspn(input, "\n")] = '\0';
			searchContact(&c[0],input, count);
		}
		if (num == 3) {
			count--;
			char phone[20];
			printf("Enter the phone: ");
			fgets(phone, 20, stdin);
			delete_contact(c, phone, count);
		}
		if (num == 4) {
			char phone[20], field_name[20];
			printf("Enter the phone: ");
			fgets(phone, 20, stdin);
			printf("Enter the field name(name/phone/email/all): ");
			fgets(field_name, 20, stdin);
			modify_contact(c, phone, count, field_name);
		}
		if (num == 5) {
			print_contacts(c, count);
		}
		if (num == 6) {
			break;
		}
		cleanup:
	}
	free(c);
	return 0;
}