#include"header.h"
void stud_show() {
    NODE *temp = head;

    if (!temp) {
        printf("No Records Found\n");
        return;
    }

    printf("\n--------------------------------------\n");
    printf("%-10s %-15s %-10s\n", "Roll No", "Name", "Percentage");
    printf("--------------------------------------\n");

    while (temp) {
        printf("%-10d %-15s %-10.2f\n",
               temp->roll, temp->name, temp->per);
        temp = temp->next;
    }

    printf("--------------------------------------\n");
}


