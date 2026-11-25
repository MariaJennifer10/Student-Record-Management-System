
#include "student.h"

void printNode(SLL *ptr)
{
    if(ptr == NULL)
    {
        printf("No student records available\n");
        return;
    }

    printf("\n---------------------------------------------\n");
    printf("%-10s %-20s %-12s\n","Roll No.", "Name", "Percentage");
    printf("---------------------------------------------\n");

    while(ptr)
    {
        printf("%-10d %-20s %-12.2f\n",ptr->roll, ptr->name, ptr->percentage);
        ptr = ptr->next;
    }

    printf("---------------------------------------------\n");
}

// Count total number of nodes 
int countNode(SLL *ptr)
{
    int c = 0;

    while(ptr)
    {
        c++;
        ptr = ptr->next;
    }

    return c;
}

