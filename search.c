#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"


sll *search_roll(int roll)
{
    sll *temp = head;

    while (temp != NULL)
    {
        if (temp->roll == roll)
            return temp;

        temp = temp->next;
    }

    return NULL;
}

sll *search_name(char name[])
{
    sll *temp = head;

    while (temp != NULL)
    {
        if (strcmp(temp->name, name) == 0)
            return temp;

        temp = temp->next;
    }

    return NULL;
}


void search_by_roll(void)
{
    int roll;
    sll *temp;

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    temp = search_roll(roll);

    if (temp == NULL)
    {
        printf("Student not found\n");
        return;
    }

    printf("\nStudent Found!\n");
    printf("Roll Number : %d\n", temp->roll);
    printf("Name        : %s\n", temp->name);
    printf("Percentage  : %.2f\n", temp->per);
}

void search_by_name(void)
{
    char name[50];
    sll *temp;

    printf("Enter student name to search: ");
    scanf("%49s", name);

    temp = search_name(name);

    if (temp == NULL)
    {
        printf("Student not found\n");
        return;
    }

    printf("\nStudent Found!\n");
    printf("Roll Number : %d\n", temp->roll);
    printf("Name        : %s\n", temp->name);
    printf("Percentage  : %.2f\n", temp->per);
}
