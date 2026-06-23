//
// Created by ayushmannag on 6/15/26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define account_number_size  11
#define account_name_size  20


struct account {
	char name[account_name_size];
	char account_number[account_number_size];
	double balance;
};


int count = 0;


void inputContact(struct account *a)
{
	printf("Enter the name: ");
	fgets(a->name, account_name_size, stdin);
	a->name[strcspn(a->name, "\n")] = '\0';

	int valid;

	do {
		valid = 1;
		printf("Enter a valid 10 digit account number: ");
		fgets(a->account_number, account_number_size, stdin);

		//checking if a new line was read
		if (strchr(a->account_number, '\n') == NULL) {
			int ch;

			//clearing remaining characters from buffer
			while ((ch = getchar()) != '\n' && ch != EOF);
			//';' at the end because this loop is only to consume the leftovers in the buffer and not do some changes in the actual code

			//invalid account number because new line was not read so marking as invalid
			valid = 0;
		}
		else {
			//removing new line
			a->account_number[strcspn(a->account_number, "\n")] = '\0';
		}

		//length must be exactly 10 characters long
		if (strlen(a->account_number) != account_number_size - 1) {
			valid = 0;
		}

		//every character must be a digit
		for (int i=0;a->account_number[i] != '\0';i++) {
			if (a->account_number[i] < '0' || a->account_number[i] > '9') {
				valid = 0;
				break;
			}
		}
	}while (!valid);

	printf("Enter the balance: ");
	scanf("%lf", &a->balance);
	getchar();
}


void deposit(struct account *a, double balance, int size, char account_number[]) {
	for (int i=0;i<size;i++) {
		if (strcmp(a[i].account_number, account_number) == 0) {
			a[i].balance += balance;
			break;
		}
	}
}


void withdraw(struct account *a, double balance, int size, char account_number[]) {
	for (int i=0;i<size;i++) {
		if (strcmp(a[i].account_number, account_number) == 0) {
			int final = a[i].balance - balance;
			if (final < 0) {
				printf("Your balance will go negative, can not withdraw that much of money.\n");
				break;
			}
			a[i].balance = final;
			break;
		}
	}
}


void transfer(struct account *a, double balance, int size, char account_number_debited[], char account_number_credited[]) {
	for (int i=0;i<size;i++) {
		if (strcmp(a[i].account_number, account_number_debited) == 0) {
			withdraw(a, balance, size, account_number_debited);
		}
	}
	for (int i=0;i<size;i++) {
		if (strcmp(a[i].account_number, account_number_credited) == 0) {
			deposit(a, balance, size, account_number_credited);
		}
	}
}


void richest_account(struct account *a, int size) {
	double max = a[0].balance;
	for (int i=0;i<size;i++) {
		if (a[i].balance > max) {
			max = a[i].balance;
			printf("The richest account is of %s\n, account number: %s\n, and balance: %f\n", a[i].name, a[i].account_number, max);
		}
	}
}


void low_balance_accounts(struct account *a, int size) {
	for (int i=0;i<size;i++) {
		if (a[i].balance < 100) {
			printf("Low balance accounts: \n");
			printf("name: %s\n", a[i].name);
			printf("account_number: %s\n", a[i].account_number);
			printf("balance: %f\n", a[i].balance);
		}
	}
}


void search_account(struct account *a, int size, char account_number[]) {
	for (int i=0;i<size;i++) {
		if (strcmp(a[i].account_number, account_number) == 0) {
			printf("name: %s\n", a[i].name);
			printf("account_number: %s\n", a[i].account_number);
			printf("balance: %.2f\n", a[i].balance);
		}
	}
}


int print_menu() {
	int num;
	printf("press 1 to add account\n"
				"press 2 to deposit\n"
				"press 3 to withdraw\n"
				"press 4 to transfer\n"
  				"press 5 to find richest account\n"
  				"press 6 to print low balance accounts\n"
  				"press 7 to search account\n"
  				"press 8 to exit\n");
	scanf("%d", &num);
	getchar();
	return num;
}


int main() {
	struct account *a = malloc(count * sizeof(struct account));
	if(a == NULL)
	{
		goto cleanup;
	}
	while (1) {
		int num = print_menu();
		if(num == 1)
		{
			count++;
			struct account* temp = realloc(a, count * sizeof(struct account));
			if(temp == NULL) {
				goto cleanup;
			}
			a = temp;
			inputContact(&a[count - 1]);
		}
		if (num == 2) {
			char account_number[account_number_size];
			double final;
			printf("Enter the account number: ");
			fgets(account_number, account_name_size, stdin);
			account_number[strcspn(account_number, "\n")] = '\0';
			printf("Enter the amount: ");
			scanf("%lf", &final);
			getchar();
			deposit(a, final, count, account_number);
		}
		if (num == 3) {
			char account_number[account_number_size];
			double balance;
			printf("Enter the account number: ");
			fgets(account_number, account_number_size, stdin);
			account_number[strcspn(account_number, "\n")] = '\0';
			printf("Enter the amount: ");
			scanf("%lf", &balance);
			getchar();
			withdraw(a, balance, count, account_number);
		}
		if (num == 4) {
			char account_number_debited[account_number_size], account_number_credited[account_number_size];
			double balance;
			printf("Enter the sender account number: ");
			fgets(account_number_debited, account_number_size, stdin);
			account_number_debited[strcspn(account_number_debited, "\n")] = '\0';
			printf("Enter the receiver account number: ");
			fgets(account_number_credited, account_number_size, stdin);
			account_number_credited[strcspn(account_number_credited, "\n")] = '\0';
			printf("Enter the amount: ");
			scanf("%lf", &balance);
			getchar();
			transfer(a, balance, count, account_number_debited, account_number_credited);
		}
		if (num == 5) {
			richest_account(a, count);
			printf("\n");
		}
		if (num == 6) {
			low_balance_accounts(a, count);
			printf("\n");
		}
		if (num == 7) {
			char account_number[account_number_size];
			printf("Enter the account_number: ");
			fgets(account_number, account_number_size, stdin);
			account_number[strcspn(account_number, "\n")] = '\0';
			search_account(a, count, account_number);
		}
		if (num == 8) {
			break;
		}
		cleanup:
	}
	free(a);
	return 0;
}