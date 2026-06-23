# Student Database System (C)

A command-line Student Database System written in C that allows users to store, manage, and analyze student records using structures and dynamic memory allocation.

> **Note:** This project was created as part of my C programming learning journey. It is currently a learning project and some edge cases, validations, and optimizations are still being improved.

## Features

* Add new student records
* Display all students
* Search students by roll number
* Update student marks
* Delete student records
* Find the class topper
* Calculate average marks of all students
* Dynamic memory management using `malloc()` and `realloc()`

## Student Information Stored

Each student record contains:

* Name
* Roll Number
* Marks

## Concepts Used

This project helped me practice several core C programming concepts:

* Structures (`struct`)
* Arrays of structures
* Dynamic memory allocation (`malloc`, `realloc`, `free`)
* Pointers
* Functions
* Loops and conditional statements
* String handling with `fgets()` and `strcmp()`
* Menu-driven applications
* Basic data management operations

## How to Compile

Using GCC:

```bash
gcc student_database_system.c -o student_database_system
```

## How to Run

```bash
./student_database_system
```

## Menu Options

```text
1. Add Student
2. Print All Students
3. Find Topper
4. Search by Roll Number
5. Update Marks
6. Delete Student Record
7. Find Average Marks
8. Exit
```

## Example Usage

```text
Press 1 to add student

Enter the name: Ayush
Enter the roll: 101
Enter the marks for the student: 92
```

```text
Press 4 to search by roll number

Enter the roll number: 101

Name: Ayush
Roll: 101
Marks: 92
```

## Current Limitations

* Data is stored only in memory and is lost when the program exits.
* No file handling for permanent storage.
* No validation for duplicate roll numbers.
* No validation for marks range.
* Search operations use linear traversal.
* Input formatting can be improved.
* Some edge cases and bugs are still being addressed as part of the learning process.

## Future Improvements

* File handling for persistent storage
* Sorting students by marks or roll number
* Better input validation
* Duplicate roll number detection
* Student record editing beyond marks
* Improved topper calculation
* Memory optimization after deletion
* Better user interface and error handling

## Learning Outcome

Through this project, I learned how to:

* Design data structures using C structures.
* Dynamically manage collections of records during runtime.
* Search, update, and delete records from a dynamically allocated array.
* Build a complete menu-driven application.
* Work with pointers, strings, and memory allocation functions.
* Implement basic database-like operations in C.

## Author

**Ayushman Nag**

First-year Computer Science Engineering student learning systems programming and software development with C.

---

This project is part of my journey of learning C programming and building increasingly complex console-based applications.
