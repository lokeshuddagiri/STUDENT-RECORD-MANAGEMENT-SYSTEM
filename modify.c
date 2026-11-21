#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"


void modify_roll(void)
{
    int roll;
    sll *temp;

    printf("Enter roll number to modify: ");
    scanf("%d", &roll);

    temp = search_roll(roll);

    if (temp == NULL)
    {
        printf("Student not found\n");
        return;
    }

    printf("Current Details:\n");
    printf("Roll: %d\nName: %s\nPercentage: %.2f\n",
           temp->roll, temp->name, temp->per);

    printf("Enter new name: ");
    scanf("%49s", temp->name);

    printf("Enter new percentage: ");
    scanf("%f", &temp->per);

    printf("Student details modified successfully\n");
}

void modify_name(void)
{
    char name[50];
    sll *temp;

    printf("Enter student name to modify: ");
    scanf("%49s", name);

    temp = search_name(name);

    if (temp == NULL)
    {
        printf("Student not found\n");
        return;
    }

    printf("Current Details:\n");
    printf("Roll: %d\nName: %s\nPercentage: %.2f\n",
           temp->roll, temp->name, temp->per);

    printf("Enter new name: ");
    scanf("%49s", temp->name);

    printf("Enter new percentage: ");
    scanf("%f", &temp->per);

    printf("Student details modified successfully\n");
}