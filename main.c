#include <stdio.h>
#include <ctype.h>
#include "student.h"
/*typedef struct t
{
int roll;
char name[50];
float per;
struct t *next;
} sll;

sll *head;
*/


int main(void)
{
    char op, choice, order;

    head = NULL;
    head = load();

    while (1)
    {
        printf("\n========================================\n");
        printf("   STUDENT RECORD MANAGEMENT SYSTEM\n");
        printf("========================================\n");
        printf("A/a : Add New Record\n");
        printf("D/d : Delete a Record\n");
        printf("S/s : Show the List\n");
        printf("M/m : Modify a Record\n");
        printf("V/v : Save\n");
        printf("T/t : Sort the List\n");
        printf("E/e : Exit\n");
        printf("F/f : Search\n");
        printf("----------------------------------------\n");
        printf("Enter your choice: ");

        if (scanf(" %c", &op) != 1)
            break;

        switch (toupper((unsigned char)op))
        {
            case 'A':
                do
                {
                    printf("\n-------- ADD NEW RECORD --------\n");
                    printf("1. Add at Beginning\n");
                    printf("2. Add at Position\n");
                    printf("3. Add at End\n");
                    printf("4. Main Menu\n");
                    printf("Enter your choice: ");

                    if (scanf(" %c", &choice) != 1)
                        return 1;

                    switch (choice)
                    {
                        case '1':
                            add_begin();
                            break;

                        case '2':
                            add_pos();
                            break;

                        case '3':
                            add_last();
                            break;

                        case '4':
                            break;

                        default:
                            printf("Invalid choice\n");
                    }

                } while (choice != '4');
                break;

            case 'D':
                do
                {
                    printf("\n-------- DELETE RECORD --------\n");
                    printf("1. Delete by Roll Number\n");
                    printf("2. Delete by Name\n");
                    printf("3. Delete by Position\n");
                    printf("4. Main Menu\n");
                    printf("Enter your choice: ");

                    if (scanf(" %c", &choice) != 1)
                        return 1;

                    switch (choice)
                    {
                        case '1':
                            del_roll();
                            break;

                        case '2':
                            del_name();
                            break;

                        case '3':
                            del_pos();
                            break;

                        case '4':
                            break;

                        default:
                            printf("Invalid choice\n");
                    }

                } while (choice != '4');
                break;

            case 'S':
                print();
                break;

            case 'M':
                do
                {
                    printf("\n-------- MODIFY RECORD --------\n");
                    printf("1. Modify by Roll Number\n");
                    printf("2. Modify by Name\n");
                    printf("3. Main Menu\n");
                    printf("Enter your choice: ");

                    if (scanf(" %c", &choice) != 1)
                        return 1;

                    switch (choice)
                    {
                        case '1':
                            modify_roll();
                            break;

                        case '2':
                            modify_name();
                            break;

                        case '3':
                            break;

                        default:
                            printf("Invalid choice\n");
                    }

                } while (choice != '3');
                break;

            case 'V':
                if (save() == 0)
                    printf("Records saved successfully\n");
                else
                    printf("Error saving records\n");
                break;

            case 'T':
                do
                {
                    printf("\n-------- SORT THE LIST --------\n");
                    printf("1. Sort by Roll Number\n");
                    printf("2. Sort by Percentage\n");
                    printf("3. Sort by Name\n");
                    printf("4. Main Menu\n");
                    printf("Enter your choice: ");

                    if (scanf(" %c", &choice) != 1)
                        return 1;

                    switch (choice)
                    {
                        case '1':
                        case '2':
                            printf("\n1. Ascending Order\n");
                            printf("2. Descending Order\n");
                            printf("Enter order: ");

                            if (scanf(" %c", &order) != 1)
                                return 1;

                            if (choice == '1')
                            {
                                if (order == '1')
                                    shortra();
                                else if (order == '2')
                                    shortrd();
                                else
                                {
                                    printf("Invalid order\n");
                                    break;
                                }
                            }
                            else
                            {
                                if (order == '1')
                                    shortpa();
                                else if (order == '2')
                                    shortpd();
                                else
                                {
                                    printf("Invalid order\n");
                                    break;
                                }
                            }

                            print();
                            break;

                        case '3':
                            sort_name();
                            print();
                            break;

                        case '4':
                            break;

                        default:
                            printf("Invalid choice\n");
                    }

                } while (choice != '4');
                break;

            case 'E':
                printf("Exiting program...\n");
                return 0;

            case 'F':
                do
                {
                    printf("\n-------- SEARCH RECORD --------\n");
                    printf("1. Search by Roll Number\n");
                    printf("2. Search by Name\n");
                    printf("3. Main Menu\n");
                    printf("Enter your choice: ");

                    if (scanf(" %c", &choice) != 1)
                        return 1;

                    switch (choice)
                    {
                        case '1':
                            search_by_roll();
                            break;

                        case '2':
                            search_by_name();
                            break;

                        case '3':
                            break;

                        default:
                            printf("Invalid choice\n");
                    }

                } while (choice != '3');
                break;

            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}