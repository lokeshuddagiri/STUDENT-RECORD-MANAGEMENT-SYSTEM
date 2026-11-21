#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"



void shortra(void){
        int temp_roll;
        float temp_per;
        char temp_name[50];
        sll *i,*j;
        for(i=head;i!=NULL;i=i->next){
                for(j=i->next;j!=NULL;j=j->next){
                        if((i->roll)>(j->roll)){
                                temp_roll = i->roll;
                                i->roll = j->roll;
                                j->roll = temp_roll;

                                strcpy(temp_name, i->name);
                                strcpy(i->name, j->name);
                                strcpy(j->name, temp_name);

                                temp_per = i->per;
                                i->per = j->per;
                                j->per = temp_per;
                        }
                }
        }
}
void shortrd(void){
        int temp_roll;
        float temp_per;
        char temp_name[50];
        sll *i,*j;
        for(i=head;i!=NULL;i=i->next){
                for(j=i->next;j!=NULL;j=j->next){
                        if((i->roll)<(j->roll)){
                                temp_roll = i->roll;
                                i->roll = j->roll;
                                j->roll = temp_roll;

                                strcpy(temp_name, i->name);
                                strcpy(i->name, j->name);
                                strcpy(j->name, temp_name);

                                temp_per = i->per;
                                i->per = j->per;
                                j->per = temp_per;
                        }
                }
        }
}
void shortpa(void){
        int temp_roll;
        float temp_per;
        char temp_name[50];
        sll *i,*j;
        for(i=head;i!=NULL;i=i->next){
                for(j=i->next;j!=NULL;j=j->next){
                        if((i->per)>(j->per)){
                                temp_roll = i->roll;
                                i->roll = j->roll;
                                j->roll = temp_roll;

                                strcpy(temp_name, i->name);
                                strcpy(i->name, j->name);
                                strcpy(j->name, temp_name);

                                temp_per = i->per;
                                i->per = j->per;
                                j->per = temp_per;
                        }
                }
        }
}
void shortpd(void){
        int temp_roll;
        float temp_per;
        char temp_name[50];
        sll *i,*j;
        for(i=head;i!=NULL;i=i->next){
                for(j=i->next;j!=NULL;j=j->next){
                        if((i->per)>(j->per)){
                                temp_roll = i->roll;
                                i->roll = j->roll;
                                j->roll = temp_roll;

                                strcpy(temp_name, i->name);
                                strcpy(i->name, j->name);
                                strcpy(j->name, temp_name);

                                temp_per = i->per;
                                i->per = j->per;
                                j->per = temp_per;
                        }
                }
        }
}

void sort_name(void)
{
    sll *i, *j;
    int roll;
    char name[50];
    float per;

    for (i = head; i != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (strcmp(i->name, j->name) > 0)
            {
                roll = i->roll;
                i->roll = j->roll;
                j->roll = roll;

                strcpy(name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, name);

                per = i->per;
                i->per = j->per;
                j->per = per;
            }
        }
    }
}
