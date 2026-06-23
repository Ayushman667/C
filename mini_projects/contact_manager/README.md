# Contact Manager (C)

A simple command-line Contact Manager written in C that allows users to store and manage contacts dynamically using structures and dynamic memory allocation.

> **Note:** This project was created as a learning exercise while studying C programming. It is still under development, and some features and edge cases may require further improvements.

## Features

* Add new contacts
* Search contacts by name
* Delete contacts by phone number
* Modify existing contact information
* Display all stored contacts
* Dynamic memory management using `malloc()` and `realloc()`

## Contact Information Stored

Each contact contains:

* Name
* Email Address
* Phone Number

## Concepts Used

This project helped me practice several important C programming concepts:

* Structures (`struct`)
* Arrays of structures
* Dynamic memory allocation (`malloc`, `realloc`, `free`)
* Pointers
* Functions
* String handling (`strcmp`, `strcspn`, `fgets`)
* Menu-driven programs
* Basic CRUD operations (Create, Read, Update, Delete)

## How to Compile

Using GCC:

```bash
gcc contact_manager.c -o contact_manager
```

## How to Run

```bash
./contact_manager
```

## Menu Options

```text
1. Add Contact
2. Search Contact
3. Delete Contact
4. Modify Contact
5. Print All Contacts
6. Exit
```

## Example Usage

```text
Press 1 to add contacts

Enter the name: John Doe
Enter the email: john@example.com
Enter the phone: 9876543210
```

```text
Press 2 to search by name

Enter the name: John Doe

Name: John Doe
Email: john@example.com
Phone: 9876543210
```

## Current Limitations

* Contacts are stored only in memory and are lost when the program exits.
* No validation for phone numbers or email addresses.
* Search is case-sensitive.
* Duplicate contacts are allowed.
* Fixed-size character arrays limit input length.
* Some edge cases and bugs are still being addressed as part of the learning process.

## Future Improvements

* File handling for permanent storage
* Case-insensitive searching
* Contact sorting
* Duplicate contact detection
* Better input validation
* Logical deletion system
* Improved user interface
* Memory optimization after contact deletion

## Learning Outcome

Through this project, I learned how to:

* Design and use structures to store related data.
* Dynamically allocate and resize memory during program execution.
* Manipulate strings safely using standard library functions.
* Build a menu-driven application.
* Implement basic CRUD operations in C.

## Author

**Ayushman Nag**

First-year Computer Science Engineering student learning systems programming and software development with C.

---

This project is part of my journey of learning C programming and building increasingly complex console-based applications.
