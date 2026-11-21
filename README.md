# Student Record Management System

A console-based Student Record Management System developed in C. It uses a singly linked list to manage student records dynamically and file handling to store data between runs.

## Project Structure

```
cpro/
│
├── main.c
├── student.h
├── student.c
├── file.c
├── search.c
├── modify.c
├── sort.c
├── delete.c
└── student2.dat
```

## File Description

| File          | Description                                         |
|---------------|-----------------------------------------------------|
| `main.c`      | Main function and menu-driven interface             |
| `student.h`   | Structure definition and function declarations      |
| `student.c`   | Student record and linked-list operations           |
| `file.c`      | File handling: saving and loading records           |
| `search.c`    | Searching student records                           |
| `modify.c`    | Modifying student details                           |
| `sort.c`      | Sorting student records                             |
| `delete.c`    | Deleting student records                            |
| `student2.dat`| File used to store student records                  |

## Features

- Add student records
- Display all student records
- Delete records
- Search students by roll number or name
- Modify student details
- Sort records by roll number
- Sort records by percentage
- Sort records alphabetically by name
- Save student records to a file
- Load previously saved records
- Automatically generate available roll numbers

## Technologies Used

- C programming
- GCC compiler
- Linux
- Singly linked list
- Structures and pointers
- Dynamic memory allocation
- File handling
- Functions
- Searching and sorting algorithms

## Compilation

Navigate to the project directory:

```bash
cd ~/cpro
```

Compile all source files:

```bash
gcc -Wall -Wextra -std=c11 main.c student.c file.c search.c modify.c sort.c delete.c -o studentdb
```

## Execution

```bash
./studentdb
```

## Concepts Implemented

1. Structures
2. Pointers
3. Singly linked lists
4. Dynamic memory allocation (`malloc`, `free`)
5. File operations (`fopen`, `fclose`, `fscanf`, `fprintf`)
6. String handling
7. Searching techniques
8. Sorting techniques
9. Modular programming using header and source files

## Learning Objectives

- Understand linked-list implementation in C
- Learn how to divide a large C program into multiple source files
- Understand header files and function declarations
- Practise dynamic memory allocation
- Implement file-based data persistence
- Improve problem-solving and programming skills

## Future Improvements

- Support student names containing spaces
- Improve input validation and error handling
- Prevent duplicate records
- Add more sorting and searching options
- Improve the menu interface
- Add student record backup and recovery

## Author

**Lokesh Uddagiri**
