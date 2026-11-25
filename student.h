
#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stu
{
    int roll;
    char name[50];
    float percentage;
    struct stu *next;
} SLL;

void addStudent(SLL **);
void deleteStudent(SLL **);
void deleteAll(SLL **);
void printNode(SLL *);
int countNode(SLL *);
void modifyStudent(SLL *);
void saveFile(SLL *);
void readFile(SLL **);
void sortData(SLL *);
void reverseLinks(SLL **);

#endif

