
#include "student.h"

void sortData(SLL *ptr)
{
    SLL *p1, *p2;
    SLL t;
    int i, j, c;
    char ch;

    if(ptr == 0)
    {
        printf("No records found\n");
        return;
    }

    printf("N/n : Sort by name\n");
    printf("P/p : Sort by percentage\n");
    printf("Enter choice: ");
    scanf(" %c", &ch);

    if(ch != 'n' && ch != 'N' &&
       ch != 'p' && ch != 'P')
    {
        printf("Invalid choice\n");
        return;
    }

    c = countNode(ptr);

    p1 = ptr;

    for(i = 0; i < c-1; i++)
    {
        p2 = p1->next;

        for(j = 0; j < c-1-i; j++)
        {
            if(ch == 'n' || ch == 'N')
            {
                if(strcmp(p1->name, p2->name) > 0)
                {
                    t.roll = p1->roll;
                    strcpy(t.name, p1->name);
                    t.percentage = p1->percentage;

                    p1->roll = p2->roll;
                    strcpy(p1->name, p2->name);
                    p1->percentage = p2->percentage;

                    p2->roll = t.roll;
                    strcpy(p2->name, t.name);
                    p2->percentage = t.percentage;
                }
            }

            else if(ch == 'p' || ch == 'P')
            {
                if(p1->percentage < p2->percentage)
                {
                    t.roll = p1->roll;
                    strcpy(t.name, p1->name);
                    t.percentage = p1->percentage;

                    p1->roll = p2->roll;
                    strcpy(p1->name, p2->name);
                    p1->percentage = p2->percentage;

                    p2->roll = t.roll;
                    strcpy(p2->name, t.name);
                    p2->percentage = t.percentage;
                }
            }

            p2 = p2->next;
        }

        p1 = p1->next;
    }

    printf("Records sorted successfully\n");
}
/*
void reverseLinks(SLL **ptr)
{
    SLL *prev = 0;
    SLL *cur = *ptr;
    SLL *next;

    if(*ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    while(cur)
    {
        next = cur->next;

        cur->next = prev;

        prev = cur;

        cur = next;
    }

    *ptr = prev;

    printf("List reversed successfully\n");
}
*/
void reverseLinks(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("no datas found\n");
                return;
        }
        int i,c=countNode(*ptr);
        SLL **a=malloc(sizeof(SLL*)*c);
        if(c>1)
        {
                SLL *t=*ptr;
                for(i=0;i<c;i++)
                {
                        a[i]=t;
                        t=t->next;
                }
                for(i=c-1;i>0;i--)
                        a[i]->next=a[i-1];
                a[0]->next=0;
                *ptr=a[c-1];
        }
        free(a);
        a=0;
	 printf("List reversed successfully\n");
}
