
#include "student.h"

void modifyStudent(SLL *ptr)
{
    SLL *temp;
    int roll, found = 0;
    float percentage;
    char name[50], ch;
    
    if(ptr == 0)
    {
        printf("No student records available\n");
        return;
    }

    printf("R/r : Search by roll number\n");
    printf("N/n : Search by name\n");
    printf("P/p : Search by percentage\n");
    printf("Enter choice: ");
    scanf(" %c", &ch);

    if(ch == 'r' || ch == 'R')
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);

        temp = ptr;

        while(temp)
        {
            if(temp->roll == roll)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }
    }

    else if(ch == 'n' || ch == 'N')
    {
        printf("Enter name: ");
        scanf(" %[^\n]", name);

        temp = ptr;

        while(temp)
        {
            if(strcmp(temp->name, name) == 0)
            {
                printf("Roll: %d Name: %s Percentage: %.2f\n",temp->roll, temp->name, temp->percentage);
                found = 1;
            }

            temp = temp->next;
        }

        if(found == 0)
        {
            printf("Name not found\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d", &roll);

        temp = ptr;
        found = 0;

        while(temp)
        {
            if(temp->roll == roll && strcmp(temp->name, name) == 0)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }
    }

    else if(ch == 'p' || ch == 'P')
    {
        printf("Enter percentage: ");
        scanf("%f", &percentage);

        temp = ptr;

        while(temp)
        {
            if(temp->percentage == percentage)
            {
                printf("Roll: %d Name: %s Percentage: %.2f\n",temp->roll, temp->name, temp->percentage);
                found = 1;
            }

            temp = temp->next;
        }

        if(found == 0)
        {
            printf("Percentage not found\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d", &roll);

        temp = ptr;
        found = 0;

        while(temp)
        {
            if(temp->roll == roll && temp->percentage == percentage)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }
    }

    else
    {
        printf("Invalid choice\n");
        return;
    }

    if(found == 0)
    {
        printf("Record not found\n");
        return;
    }

    printf("\nCurrent details:\n");
    printf("Roll number: %d\n", temp->roll);
    printf("Name: %s\n", temp->name);
    printf("Percentage: %.2f\n", temp->percentage);

    printf("\nEnter updated name: ");
    scanf(" %[^\n]", name);

    printf("Enter updated percentage: ");
    scanf("%f", &percentage);

    if(percentage < 0 || percentage > 100)
    {
        printf("Invalid percentage\n");
        return;
    }

    strcpy(temp->name, name);
    temp->percentage = percentage;

    printf("Record modified successfully\n");
}

