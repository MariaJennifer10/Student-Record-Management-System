# Student Record Management System

## Project Overview

The Student Record Management System is a menu-driven C programming application developed using a Singly Linked List (SLL). It allows users to add, delete, display, modify, sort, reverse, save, and load student records.

## Objectives

- Manage student records using a singly linked list.
- Implement dynamic memory allocation.
- Perform searching, sorting, insertion, and deletion.
- Store and retrieve student records using file handling.
- Develop a modular C application using separate source files.

## Technologies Used

- Programming Language: C
- Data Structure: Singly Linked List
- Compiler: GCC
- Build Tool: Makefile
- File Handling: C Standard Library

## Student Record Structure

Each student node contains:

- Roll Number
- Student Name
- Percentage
- Pointer to the Next Node

## Features

1. Add a new student with the smallest available positive roll number.
2. Delete a student by roll number or name.
3. Display all student records.
4. Modify student details using roll number, name, or percentage.
5. Save student records in `student.dat`.
6. Load previously saved records when the application starts.
7. Sort records alphabetically by name.
8. Sort records by percentage in descending order.
9. Reverse the student list.
10. Delete all student records.
11. Save and exit or exit without saving.

## Project Structure

```text
Student-Record-Management-System/
│
├── student.h
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_save.c
├── stud_sort_reverse.c
├── Makefile
└── README.md
```

## Compilation

Compile the project using:

```bash
make
```

This generates the executable named `student`.

## Execution

Run the application using:

```bash
./student
```

## Clean Generated Files

To remove object files and the executable:

```bash
make clean
```

## Data Storage

Student records are stored in a file named `student.dat`. Existing records are loaded when the application starts, and the user can save updated records using the save option.

## Conclusion

This project demonstrates the implementation of a menu-driven student record management application using C programming, singly linked lists, dynamic memory allocation, modular programming, searching, sorting, and file handling.
