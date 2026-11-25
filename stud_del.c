#include "student.h"

void deleteStudent(SLL **ptr)
{
    SLL *temp, *prev = 0;
    int roll, count = 0;
    char name[50], ch;
    int found = 0;

    if(*ptr == 0)
    {
        printf("No student records available\n");
        return;
    }

    printf("R/r : Delete by roll number\n");
    printf("N/n : Delete by name\n");
    printf("Enter choice: ");
    scanf(" %c", &ch);

    if(ch == 'r' || ch == 'R')
    {
        printf("Enter roll number to delete: ");
        scanf("%d", &roll);

        temp = *ptr;

        while(temp)
        {
            if(temp->roll == roll)
            {
                if(temp == *ptr)
                    *ptr = temp->next;
                else
                    prev->next = temp->next;

                free(temp);

                printf("Record deleted successfully\n");
                return;
            }

            prev = temp;
            temp = temp->next;
        }

        printf("Roll number not found\n");
    }

    else if(ch == 'n' || ch == 'N')
    {
        printf("Enter name to delete: ");
        scanf(" %[^\n]", name);

        temp = *ptr;

        printf("\nMatching records:\n");

        while(temp)
        {
            if(strcmp(temp->name, name) == 0)
            {
                printf("Roll: %d  Name: %s  Percentage: %.2f\n",
                       temp->roll, temp->name, temp->percentage);

                found = 1;
                count++;
            }

            temp = temp->next;
        }

        if(found == 0)
        {
            printf("Name not found\n");
            return;
        }

        if(count > 1)
        {
            printf("Enter roll number to delete: ");
            scanf("%d", &roll);
        }

        temp = *ptr;
        prev = 0;

        while(temp)
        {
            if(strcmp(temp->name, name) == 0 &&
               (count == 1 || temp->roll == roll))
            {
                if(temp == *ptr)
                    *ptr = temp->next;
                else
                    prev->next = temp->next;

                free(temp);

                printf("Record deleted successfully\n");
                return;
            }

            prev = temp;
            temp = temp->next;
        }

        printf("Selected record not found\n");
    }

    else
    {
        printf("Invalid choice\n");
    }
}

// Delete all records

void deleteAll(SLL **ptr)
{
    SLL *del;

    if(*ptr == 0)
    {
        printf("No records found\n");
        return;
    }

    while(*ptr)
    {
        del = *ptr;
        *ptr = del->next;
        free(del);
    }

    printf("All records deleted successfully\n");
}
