#include"header.h"
void stud_add() {
    NODE *newnode = (NODE *)malloc(sizeof(NODE));

    newnode->roll = generate_roll();

    printf("Enter Name: ");
    scanf(" %[^\n]", newnode->name);

    printf("Enter Percentage: ");
    scanf("%f", &newnode->per);

    newnode->next = head;
    head = newnode;

    printf("Record Added\n");
}

