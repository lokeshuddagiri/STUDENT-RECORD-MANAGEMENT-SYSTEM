# Student Record Management System (C)

A console-based Student Record Management System written in C. It stores student records dynamically in a singly linked list and uses file handling to preserve records between program runs.

## Student Information

Each student record contains:

- Roll Number (`int`)
- Student Name (`char[50]`)
- Percentage (`float`)
- Pointer to the next node (`struct t *next`)

## Features

- Add a student at the beginning, at a specified position, or at the end
- Display all student records
- Delete a student by position, roll number, or name
- Search for a student by roll number or name
- Modify student details using roll number or name
- Sort records by roll number (ascending or descending)
- Sort records by percentage or name
- Load student records from a file
- Save student records to a file
- Automatically generate the smallest available positive roll number

## Project Structure

```
Student-Record-Management-System/
├── slleee.c
├── README.md
└── .gitignore
```

## Requirements

- GCC compiler
- Linux, macOS, or Windows with MinGW

## Compilation

```bash
gcc -Wall -Wextra slleee.c -o student_record
```

## Execution

On Linux / macOS:

```bash
./student_record
```

On Windows:

```bash
student_record.exe
```

The program reads student records from `student2.dat` when it starts and saves records to the same file.

## Data File Format

Records are stored in `student2.dat`. Each line contains:

```
roll_number name percentage
```

Example:

```
1 Lokesh 85.50
2 Ravi 78.00
3 Kiran 90.00
```

> **Note:** The current implementation reads names with `%s`, so names containing spaces are not supported.

## Concepts Used

- Structures and pointers
- Singly linked lists
- Dynamic memory allocation (`malloc`, `free`)
- File handling (`fopen`, `fscanf`, `fprintf`, `fclose`)
- String handling (`strcmp`, `strcpy`)
- Searching and sorting
- Functions
- Switch-case statements

## Known Issues

The current source code should be reviewed and improved before being considered a finished release.

1. Replace `void main()` with the standard `int main(void)`.
2. Initialize and validate the menu variable before using it.
3. Check the return value of every `malloc()` call.
4. Initialize the `next` pointer of every newly allocated node.
5. Validate positions before inserting records.
6. Correct the descending percentage sorting condition in `shortpd()`.
7. Add menu options for search, modify, and delete operations.
8. Free all remaining linked-list nodes before program termination.
9. Validate user input and percentage values.
10. Support student names containing spaces.

## Future Improvements

- Divide the program into multiple source and header files
- Improve input validation
- Support full names with spaces
- Prevent duplicate roll numbers during file loading
- Improve sorting efficiency
- Add test cases for all operations
- Improve the user interface

## Author

**Lokesh Uddagiri**

GitHub: [https://github.com/lokeshuddagiri](https://github.com/lokeshuddagiri)
