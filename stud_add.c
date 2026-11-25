
#include "student.h"

void addStudent(SLL **ptr)
{
    SLL *new;
    SLL *temp,*last;
    int roll = 1, found;
    new = malloc(sizeof(SLL));

    //to find smallest available roll number 
    while(1)
    {
        found = 0;
        temp = *ptr;
        while(temp)
        {
            if(temp->roll == roll)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }
        if(found == 0)
            break;
        roll++;
    }
    new->roll = roll;

    printf("Enter student name:\n ");
    scanf("%s", new->name);

    printf("Enter percentage(in the range 0-100):\n ");
    scanf("%f", &new->percentage);
    
    if(new->percentage < 0 || new->percentage > 100)
    {
	    printf("Invalid percentage\n");
	    free(new);
	    return;
    }
    
    new->next = 0;//always 0 for add at end
    if(*ptr == 0)
        *ptr = new;
    else
    {
        last = *ptr;
        while(last->next)
            last = last->next;
        last->next = new;
    }

    printf("Student added successfully\n");
    printf("Assigned roll number: %d\n", roll);
}

