#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

void del_pos()
{
        int cnt,pos;
        sll*prev,*temp;
        if(head==NULL)
                printf("Empty List\n");
        else
        {
                printf("Enter the node position\n");
                scanf("%d",&pos);
                if(pos==1)
                {
                        temp=head;
                        head=head->next;
                        free(temp);
                }
                else
                {
                        cnt=1;
                        temp=head;
                        while(temp&&(cnt!=pos))
                        {

                                prev=temp;
                                temp=temp->next;
                                cnt++;
                        }
                        if(temp!=NULL)
                        {
                        prev->next=temp->next;
                        free(temp);
                        }
                        else
                                printf("Invalid\n");
                }
        }
}


void del_roll(void)
{
    int roll;
    sll *temp = head;
    sll *prev = NULL;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Enter roll number to delete: ");
    scanf("%d", &roll);

    while (temp != NULL && temp->roll != roll)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Roll number not found\n");
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    free(temp);

    printf("Student deleted successfully\n");
}

void del_name(void)
{
    char name[50];
    sll *temp = head;
    sll *prev = NULL;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Enter name to delete: ");
    scanf("%49s", name);

    while (temp != NULL && strcmp(temp->name, name) != 0)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Student name not found\n");
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    free(temp);

    printf("Student deleted successfully\n");
}