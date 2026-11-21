#include <stdio.h>
#include <stdlib.h>
#include "student.h"

sll *head = NULL;

int get_roll(void)
{
    int roll = 1;
    sll *temp;

    while (1)
    {
        temp = head;

        while (temp != NULL)
        {
            if (temp->roll == roll)
                break;

            temp = temp->next;
        }

        if (temp == NULL)
            return roll;

        roll++;
    }
}
void add(sll *node){
        node->roll=get_roll();
        printf("Enter the name: ");
        scanf("%49s",node->name);
        printf("Enter the percentage: ");
        scanf("%f",&node->per);
}


void add_begin()
{
        sll*node=malloc(sizeof(sll));
        add(node);
        if(head==NULL)
                head=node;
        else
        {
                node->next=head;
                head=node;
        }
}
void add_pos()
{
        int cnt=1,pos;
        sll*temp,*prev;
        sll*node=malloc(sizeof(sll));
        printf("enter the position\n");
        scanf("%d",&pos);
        add(node);
        if(head==NULL)
                printf("insert position not possible\n");
        else if(pos==1)
        {
                node->next=head;
                head=node;
        }
        else
        {
                temp=head;
                while(temp&&cnt!=pos)
                {
                        prev=temp;
                        temp=temp->next;
                        cnt++;
                }
                if(temp==NULL)
                        printf("invalid position\n");
                else
                {
                        node->next=temp;
                        prev->next=node;
                }
        }

}
void add_last()
{
        sll*temp;
        sll*node=malloc(sizeof(sll));
        add(node);
        if(head==NULL)
                head=node;
        else
        {
                //finding last node
                for(temp=head;temp->next!=NULL;temp=temp->next);
                //updating node at last
                temp->next=node;

        }

}
void print(void)
{
    sll *temp = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("\n%-10s %-20s %-10s\n", "Roll", "Name", "Percentage");
    printf("---------------------------------------------\n");

    while (temp != NULL)
    {
        printf("%-10d %-20s %-10.2f\n",
               temp->roll, temp->name, temp->per);

        temp = temp->next;
    }
}