
#include "student.h"

/* Save student records */

void saveFile(SLL *ptr)
{
    FILE *fp;

    fp = fopen("student.dat", "w");

    if(fp == 0)
    {
        printf("File opening failed\n");
        return;
    }

    while(ptr)
    {
        fprintf(fp, "%d %s %.2f\n",ptr->roll, ptr->name, ptr->percentage);

        ptr = ptr->next;
    }

    fclose(fp);

    printf("Records saved successfully\n");
}

//Load/read student records

void readFile(SLL **ptr)
{
    FILE *fp;
    SLL *new, *last;
    int roll;
    char name[50];
    float percentage;

    fp = fopen("student.dat", "r");

    if(fp == 0)
    {
        printf("No records found\n");
        return;
    }

    while(fscanf(fp, "%d %s %f",
                 &roll, name, &percentage) == 3)
    {
        new = malloc(sizeof(SLL));

        new->roll = roll;
        strcpy(new->name, name);
        new->percentage = percentage;
        new->next = 0;

        if(*ptr == 0)
            *ptr = new;
        else
        {
            last = *ptr;

            while(last->next)
                last = last->next;

            last->next = new;
        }
    }

    fclose(fp);

    printf("Records loaded successfully\n");
}

