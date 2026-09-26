#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct student {
    int roll;
    char name[50];
    float per;
    struct student *next;
} NODE;

extern NODE *head;



// FUNCTION PROTOTYPES
void stud_add();
void stud_show();
void stud_del();
void stud_mod();
void stud_save();
void stud_load();
void sort_records();
int generate_roll(void);
#endif
