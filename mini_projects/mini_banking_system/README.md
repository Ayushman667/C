# Mini Banking System (C)

A command-line banking application written in C that simulates basic banking operations such as account creation, deposits, withdrawals, transfers, and account management.

The project was developed to practice data structures, dynamic memory allocation, input validation, and modular programming in C.

> **Status:** Learning Project / Under Development

## Features

* Create new bank accounts
* Validate 10-digit account numbers during account creation
* Deposit money into an account
* Withdraw money from an account
* Transfer money between accounts
* Search accounts using account numbers
* Find the richest account
* Display accounts with low balances
* Dynamic memory management using `malloc()` and `realloc()`

## Account Information

Each account stores:

* Account Holder Name
* Account Number
* Account Balance

## Concepts Demonstrated

This project makes use of:

* Structures (`struct`)
* Dynamic memory allocation (`malloc`, `realloc`, `free`)
* Pointers
* Arrays of structures
* String handling (`strcmp`, `strlen`, `strchr`, `strcspn`)
* Input validation
* Menu-driven applications
* Searching records
* Financial transaction processing
* Modular programming

## Input Validation

The program validates account numbers by ensuring that:

* The account number contains exactly 10 digits
* Only numeric characters are accepted
* Extra characters in the input buffer are safely discarded
* Invalid entries are rejected until a valid account number is entered

## How to Compile

Using GCC:

```bash id="1"
gcc mini_banking_system.c -o mini_banking_system
```

## How to Run

```bash id="2"
./mini_banking_system
```

## Menu Options

```text id="3"
1. Add Account
2. Deposit
3. Withdraw
4. Transfer
5. Find Richest Account
6. Print Low Balance Accounts
7. Search Account
8. Exit
```

## Example Session

```text id="4"
Press 1 to add account

Enter the name: Ayush
Enter a valid 10 digit account number: 1234567890
Enter the balance: 5000
```

```text id="5"
Press 2 to deposit

Enter the account number: 1234567890
Enter the amount: 1000
```

```text id="6"
Press 7 to search account

Name: Ayush
Account Number: 1234567890
Balance: 6000.00
```

## Current Limitations

* Data is stored only in memory and is lost when the program exits.
* Duplicate account numbers are currently allowed.
* No account authentication or password protection.
* No transaction history is maintained.
* Account records cannot be deleted.
* The project is intended for educational purposes and not real-world banking use.

## Future Improvements

* File handling for permanent account storage
* Unique account number enforcement
* Transaction history logging
* Account deletion functionality
* Interest calculation features
* Monthly account statements
* Better error handling and reporting
* Improved user interface
* Account sorting and filtering options

## Learning Outcomes

Through this project, I learned how to:

* Design and manage collections of records using structures.
* Dynamically allocate and resize memory during runtime.
* Implement common banking operations such as deposits, withdrawals, and transfers.
* Validate user input safely.
* Work with strings and pointers effectively.
* Organize larger C programs into reusable functions.

## Author

**Ayushman Nag**

First-Year Computer Science Engineering Student

---

Part of my C programming learning journey and focused on applying core programming concepts to build practical console-based applications.
