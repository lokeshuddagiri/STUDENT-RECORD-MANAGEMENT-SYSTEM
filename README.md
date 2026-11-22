# Student Record Management System

A menu-driven console application developed in C to manage student records using a dynamically allocated singly linked list. The application supports adding, deleting, searching, modifying, displaying and sorting student records. It also uses file handling to save records and load them when the program starts.

This project was developed to practise structures, pointers, dynamic memory allocation, linked lists, file handling, searching, sorting and modular programming in C.

---

## Table of Contents

1. [Overview](#overview)
2. [Features](#features)
3. [Project Structure](#project-structure)
4. [How the Program Works](#how-the-program-works)
5. [Data Structure](#data-structure)
6. [Module / Function Reference](#module--function-reference)
7. [Data File Format](#data-file-format)
8. [Requirements](#requirements)
9. [Setup and Build](#setup-and-build)
10. [Usage Guide](#usage-guide)
11. [Algorithms and Complexity](#algorithms-and-complexity)
12. [Memory Management](#memory-management)
13. [Known Limitations](#known-limitations)
14. [Future Enhancements](#future-enhancements)
15. [Concepts Demonstrated](#concepts-demonstrated)
16. [Author](#author)

---

## Overview

The Student Record Management System is implemented using multiple C source files to separate different operations.

The program maintains student records in a singly linked list. Each node contains a student's roll number, name, percentage and a pointer to the next node.

When the application starts, it attempts to load previously saved records from `student2.dat`. The user can perform different operations through a menu. Records can be saved back to the file using the Save option.

The project uses a header file (`student.h`) to share the structure definition and function declarations across source files.

---

## Features

| Key | Option | Description |
|-----|--------|-------------|
| A/a | Add New Record | Adds a student record to the linked list |
| D/d | Delete a Record | Deletes a student record |
| S/s | Show the List | Displays all student records |
| M/m | Modify a Record | Modifies existing student information |
| V/v | Save | Saves student records to a file |
| T/t | Sort the List | Sorts records using different criteria |
| F/f | Search | Searches for students by roll number or name |
| E/e | Exit | Exits the application |

### Additional Operations

**Adding records**

- Insert a record at the beginning
- Insert a record at a specified position
- Insert a record at the end
- Generate an available roll number automatically

**Deleting records**

- Delete by position
- Delete by roll number
- Delete by name

**Searching records**

- Search by roll number
- Search by student name

**Modifying records**

- Find a student using roll number or name
- Update the student's name and percentage

**Sorting records**

- Sort by roll number in ascending order
- Sort by roll number in descending order
- Sort by percentage in ascending order
- Sort by percentage in descending order
- Sort alphabetically by student name

---

## Project Structure

```
cpro/
│
├── main.c          # Main function and menu
├── student.h       # Structure definition and function declarations
├── student.c       # Student record and linked-list operations
├── file.c          # Saving and loading student records
├── search.c        # Searching student records
├── modify.c        # Modifying student details
├── sort.c          # Sorting student records
├── delete.c        # Deleting student records
│
└── student2.dat    # Student database file
```

### File Description

| File | Responsibility |
|------|----------------|
| `main.c` | Controls program execution and menu operations |
| `student.h` | Contains the student structure and function prototypes |
| `student.c` | Implements linked-list operations and record creation |
| `file.c` | Handles saving and loading records |
| `search.c` | Implements searching operations |
| `modify.c` | Implements record modification |
| `sort.c` | Implements sorting operations |
| `delete.c` | Implements record deletion |
| `student2.dat` | Stores student records permanently |

The project follows a modular programming approach. Each source file handles a specific responsibility, making the program easier to maintain and extend.

---

## How the Program Works

```
             PROGRAM STARTS
                    |
                    v
          Load records from file
                    |
                    v
             Display Main Menu
                    |
                    v
             Read User Choice
                    |
        +-----------+-----------+
        |           |           |
        v           v           v
      Add         Delete      Show
        |           |           |
        v           v           v
    student.c    delete.c    student.c
        |
        +---------------------------+
        |                           |
        v                           v
      Modify                      Search
        |                           |
        v                           v
    modify.c                     search.c
        |
        +---------------------------+
        |
        v
       Sort
        |
        v
      sort.c
        |
        +---------------------------+
        |
        v
       Save
        |
        v
      file.c
        |
        v
      Exit
```

The linked list remains in memory while the program runs.

The Save operation writes the current records to `student2.dat`. Loading is performed when the application starts.

---

## Data Structure

The application uses a singly linked list to store student records dynamically.

```c
typedef struct t
{
    int roll;
    char name[50];
    float per;
    struct t *next;
} sll;
```

### Structure Members

| Member | Data Type | Purpose |
|--------|-----------|---------|
| `roll` | `int` | Stores the student roll number |
| `name[50]` | `char` | Stores the student name |
| `per` | `float` | Stores the student's percentage |
| `next` | `struct t *` | Points to the next student node |

### Linked List Representation

```
        head
          |
          v
    +------+------+------+------+
    | Roll | Name | Per  | Next |
    +------+------+------+------+
                              |
                              v
                       +------+------+------+------+
                       | Roll | Name | Per  | Next |
                       +------+------+------+------+
                                               |
                                               v
                                              NULL
```

Each node is dynamically allocated using `malloc()`.

The global linked-list pointer is declared in the header file using:

```c
extern sll *head;
```

It is defined only once in `student.c`:

```c
sll *head = NULL;
```

This allows different source files to access the same linked list without creating multiple definitions of the global variable.

---

## Module / Function Reference

### 1. `student.c`

Responsible for student record operations and linked-list management.

- `get_roll()` – Generates an available roll number
- `add()` – Adds a node to the linked list
- `add_begin()` – Inserts a record at the beginning
- `add_pos()` – Inserts a record at a specified position
- `add_last()` – Inserts a record at the end
- `print()` – Displays student records

### 2. `file.c`

Responsible for file handling.

- `load()` – Reads existing records from `student2.dat` and creates linked-list nodes
- `save()` – Writes the current linked-list records into `student2.dat`

### 3. `search.c`

Responsible for searching student records.

- `search_roll()` – Searches for a student using the roll number
- `search_name()` – Searches for a student using the name
- `search_by_roll()` – Searches and displays a student by roll number
- `search_by_name()` – Searches and displays a student by name

### 4. `modify.c`

Responsible for modifying student information.

- `modify_roll()` – Finds a student using the roll number and modifies the details
- `modify_name()` – Finds a student using the name and modifies the details

### 5. `sort.c`

Responsible for sorting student records.

- `shortra()` – Sorts by roll number in ascending order
- `shortrd()` – Sorts by roll number in descending order
- `shortpa()` – Sorts by percentage in ascending order
- `shortpd()` – Sorts by percentage in descending order
- `sort_name()` – Sorts records alphabetically by name

### 6. `delete.c`

Responsible for deleting student records.

- `del_pos()` – Deletes a record using its position
- `del_roll()` – Deletes a record using its roll number
- `del_name()` – Deletes a record using its name

### 7. `main.c`

Contains the `main()` function and controls the overall program execution.

It handles the menu and calls the appropriate functions based on the user's selection.

---

## Data File Format

Student records are stored in a plain-text file named:

```
student2.dat
```

Each record contains three fields:

```
<roll_number> <student_name> <percentage>
```

Example:

```
1 Lokesh 85.50
2 Ravi 78.00
3 Kiran 90.00
4 Arun 67.50
```

The file is used to preserve student records between program executions.

> **Note:** The current implementation uses string input with `%s`, so student names containing spaces are not supported.

---

## Requirements

- **Operating System:** Linux / Unix-like operating system
- **Compiler:** GCC
- **Language:** C
- **Terminal:** Linux terminal

---

## Setup and Build

### 1. Navigate to the project directory

```bash
cd ~/cpro
```

### 2. Compile the project

Compile all source files together:

```bash
gcc -Wall -Wextra -std=c11 main.c student.c file.c search.c modify.c sort.c delete.c -o studentdb
```

### 3. Run the application

```bash
./studentdb
```

### Compilation Explanation

| Command | Purpose |
|---------|---------|
| `gcc` | GNU C Compiler |
| `-Wall` | Enables common compiler warnings |
| `-Wextra` | Enables additional warnings |
| `-std=c11` | Uses the C11 standard |
| `main.c student.c ...` | Compiles and links all source files |
| `-o studentdb` | Names the generated executable `studentdb` |

> **Note:** This project currently uses a direct GCC compilation command. A Makefile has not been created.

---

## Usage Guide

The application provides a menu-driven interface.

The available operations are:

```
A/a : Add New Record
D/d : Delete a Record
S/s : Show the List
M/m : Modify a Record
V/v : Save
T/t : Sort the List
F/f : Search
E/e : Exit
```

### A – Add New Record

Adds a new student record.

- Insert at the beginning
- Insert at a specified position
- Insert at the end

### D – Delete a Record

Deletes an existing student record.

- Delete by position
- Delete by roll number
- Delete by name

### S – Show the List

Displays all student records stored in the linked list.

### M – Modify a Record

Finds an existing student and modifies the student's information.

### V – Save

Writes the current student records into `student2.dat`.

### T – Sort the List

Provides different sorting methods:

- Ascending roll number
- Descending roll number
- Ascending percentage
- Descending percentage
- Alphabetical order by name

### F – Search

Searches student records using:

- Roll number
- Student name

### E – Exit

Terminates the application.

---

## Algorithms and Complexity

Let `n` represent the number of student records.

| Operation | Algorithm | Time Complexity |
|-----------|-----------|-----------------|
| Search by roll number | Linear search | O(n) |
| Search by name | Linear search | O(n) |
| Display records | Linked-list traversal | O(n) |
| Insert at beginning | Pointer update | O(1) |
| Insert at end | Linked-list traversal | O(n) |
| Insert at position | Linked-list traversal | O(n) |
| Delete by roll number | Linear search | O(n) |
| Delete by name | Linear search | O(n) |
| Sort records | Nested-loop comparison | O(n²) |
| Save records | Sequential traversal | O(n) |
| Load records | Repeated tail insertion | O(n²) |

> **Note:** Loading can be improved to O(n) by maintaining a tail pointer instead of traversing the list for every new node.

---

## Memory Management

The program uses dynamic memory allocation to create student nodes.

**Memory allocation**

```c
sll *new = malloc(sizeof(sll));
```

**Memory deallocation**

```c
free(temp);
```

When a student record is deleted, its allocated memory is released using `free()`.

The linked list uses pointers to connect individual student nodes.

---

## Known Limitations

1. Student names containing spaces are not supported by the current `%s` input method.
2. Name searching is case-sensitive.
3. The sorting implementation uses nested loops and has O(n²) time complexity.
4. Loading records can be inefficient because of repeated tail traversal.
5. The program should release all remaining allocated nodes before exiting.
6. Input validation and error handling can be improved.
7. The project currently uses a direct GCC compilation command rather than a Makefile.

---

## Future Enhancements

- Support student names containing spaces
- Improve input validation
- Optimize linked-list loading using a tail pointer
- Implement more efficient sorting algorithms
- Add student record statistics such as average percentage and highest percentage
- Add an option to save automatically before exiting
- Implement complete memory cleanup
- Add a Makefile for easier compilation
- Improve the user interface

---

## Concepts Demonstrated

- C programming
- Structures and `typedef`
- Pointers
- Singly linked lists
- Dynamic memory allocation (`malloc`, `free`)
- File handling (`fopen`, `fscanf`, `fprintf`, `fclose`)
- String handling
- Searching algorithms
- Sorting algorithms
- Modular programming
- Header files and multiple source files
- GCC compilation and linking

---

## Author

**Lokesh Uddagiri**
