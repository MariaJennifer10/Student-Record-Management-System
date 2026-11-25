#include "student.h"

int main()
{
    SLL *headptr = 0;
    char op, ch;

    readFile(&headptr);

    while(1)
    {
        printf("\n********STUDENT RECORD MENU ********\nEnter your choice\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Show the list\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save records\n");
        printf("e/E : Exit\n");
        printf("t/T : Sort the list\n");
        printf("l/L : Delete all records\n");
        printf("r/R : Reverse the list\n");

        printf("Enter your choice: ");
        scanf(" %c", &op);

        switch(op)
        {
            case 'a':
            case 'A':
                addStudent(&headptr);
                break;

            case 'd':
            case 'D':
                deleteStudent(&headptr);
                break;

            case 's':
            case 'S':
                printNode(headptr);
                break;

            case 'm':
            case 'M':
                modifyStudent(headptr);
                break;

            case 'v':
            case 'V':
                saveFile(headptr);
                break;

            case 't':
            case 'T':
                sortData(headptr);
                break;

            case 'l':
            case 'L':
                deleteAll(&headptr);
                break;

            case 'r':
            case 'R':
                reverseLinks(&headptr);
                break;

            case 'e':
            case 'E':
                printf("S : Save and Exit\n");
                printf("E : Exit without saving\n");
                printf("Enter choice: ");
                scanf(" %c", &ch);

                if(ch=='s' || ch=='S')
                    saveFile(headptr);

                else if(ch!='e' && ch!='E')
                {
                    printf("Invalid choice\n");
                    break;
                }

                deleteAll(&headptr);
                printf("Program terminated\n");
                exit(0);

            default:
                printf("Invalid option\n");
        }
    }

    return 0;
}

