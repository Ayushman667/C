#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct string {
	char* data;
	size_t length;;
	size_t capacity;
} string;

typedef struct contact {
	string name;
	string email;
	string phone;
} contact;

typedef struct contacts {
	contact* data;
	size_t length;;
	size_t capacity;
} contacts;

void input_string(string* str, char* field_name) {
	char buffer[101] = {0};
	printf("Enter the %s:", field_name);
	fflush(stdin);
	fgets(buffer, 100, stdin);
	if (strlen(buffer) > str->capacity) {
		str->capacity = strlen(buffer)+1;
		str->data = (char*) realloc(str->data, str->capacity);
	}
	sscanf(buffer, "%[^\n]", str->data);
	str->length = strlen(str->data);
}

void print_contact(const contact c) {
	printf(
		"Contact:\n"
		"\tName: %s\n"
		"\tEmail: %s\n"
		"\tPhone: %s\n",
		c.name.data, c.email.data, c.phone.data
	);
}

void add_contact(contacts contact_array) {
	contact c = {0};
	input_string(&c.name, "name");
	input_string(&c.email, "email");
	input_string(&c.phone, "phone");

	if (contact_array.length == contact_array.capacity) {
		contact_array.capacity = contact_array.capacity * 2;
		contact_array.data = (contact*) realloc(contact_array.data, contact_array.capacity);
	}
	contact_array.data[contact_array.length++] = c;
}

void search_contact(const contacts contact_array, const string name) {
	bool found = false;
	for (size_t i = 0; i < contact_array.length; i++) {
		if (strncmp(contact_array.data[i].name.data, name.data, name.length)==0) {
			found = true;
			printf("Found matching contact:\n");
			print_contact(contact_array.data[i]);
			break;
		}
	}
	if (!found) {
		printf("Contact not found\n");
	}
}

void delete_contact(contacts contact_array, const string name) {
	for (size_t i = 0; i < contact_array.length; i++) {
		if (strncmp(contact_array.data[i].name.data, name.data, name.length) == 0) {
			for (size_t j = i; j < contact_array.length - 1; j++) {
				contact_array.data[j] = contact_array.data[j+1];
			}
			contact_array.length--;
			break;
		}
	}
}

int compare(const void* c1, const void* c2) {
	return strcmp(((const contact*) c1)->name.data, ((const contact*) c2)->name.data);
}

void sort_contacts(contacts contact_array) {
	qsort(contact_array.data, contact_array.length, sizeof(contact), compare);
}

void modify_contact(contacts contact_array, const string name, int option) {
	for (size_t i = 0; i < contact_array.length; i++) {
		if (strncmp(contact_array.data[i].name.data, name.data, name.length)==0) {
			switch (option) {
			case 1:
				input_string(&contact_array.data[i].name, "name");
				break;
			case 2:
				input_string(&contact_array.data[i].email, "email");
				break;
			case 3:
				input_string(&contact_array.data[i].phone, "phone");
				break;
			default:
				break;
			}
		}
	}
}

void print_all_contacts(const contacts contact_array) {
	for (size_t i = 0; i < contact_array.length; i++) {
		print_contact(contact_array.data[i]);
	}
}

int print_menu() {
	printf(
		"Press 1 to Add a contact\n"
		"Press 2 to Delete a contact\n"
		"Press 3 to Modify a contact\n"
		"Press 4 to Search for a contact\n"
		"Press 5 to Sort the contacts\n"
		"Press 6 to Print all contacts\n"
		"Press 7 to Quit\n"
		"Enter your choice: "
	);
	int option;
	while (!scanf("%d", &option)) {
		printf("Invalid input\nPlease try again:");
	}
	return option;
}

int main() {
	bool stop = false;
	contacts contact_array = {0};
	printf("Welcome!\n");
	while (!stop) {
		const int option = print_menu();
		switch (option) {
		case 1:
			add_contact(contact_array);
			break;
		case 2:
			{
			string name={0};
			input_string(&name, "name");
			delete_contact(contact_array, name);
			}
			break;
		case 3:
			{
				string name={0};
				int modify_option = 0;
				input_string(&name, "email");
				printf("Enter the value to modify (1-name, 2-email, 3-phone):");
				if (!scanf("%d", &modify_option)) {
					break;
				}
				modify_contact(contact_array, name, modify_option);
			}
			break;
		case 4:
			{
				string name={0};
				input_string(&name, "name");
				search_contact(contact_array, name);
			}
			break;
		case 5:
			sort_contacts(contact_array);
			break;
		case 6:
			print_all_contacts(contact_array);
			break;
		case 7:
			stop = true;
			break;
		default:
			break;
		}
	}
}