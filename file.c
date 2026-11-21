#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

sll *load(void){
    int rol;
    char nam[50];
    float perc;
    FILE *fp = fopen("student2.dat", "r");
    if(fp==NULL){
        return head;
    }
    else{
        while (fscanf(fp, "%d %49s %f",&rol, nam, &perc) == 3)
        {
            sll *node= malloc(sizeof(sll));
            if(node==NULL){
                fclose(fp);
                return head;
            }
            sll *temp;
            node->roll=rol;
            strcpy(node->name,nam);
            node->per=perc;
            node->next = NULL;
            if(head==NULL){
                head=node;
            }
            else{
                temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=node;
            }
        }
    }
    fclose(fp);
    return head;
}

int save(void){
    FILE *fp = fopen("student2.dat", "w");
    if(fp==NULL){

    return 1;
    }
    sll *temp=head;
    while(temp!=NULL){
        fprintf(fp,"%d %s %.2f\n",temp->roll,temp->name,temp->per);
        temp=temp->next;
    }
     fclose(fp);
     return 0;
}