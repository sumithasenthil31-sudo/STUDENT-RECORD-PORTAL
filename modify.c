#include"header.h"
void stud_mod() {
    char ch, field;
    int roll;
    float per;
    char name[50];

    NODE *temp = head;
    int found = 0;

    // STEP 1: SEARCH
    printf("\nSearch Record\n");
    printf("R/r : Roll Number\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");
    printf("Enter Your Choice: ");
    scanf(" %c", &ch);

    // CASE 1: ROLL → DIRECT MODIFY
    if (ch == 'R' || ch == 'r') {
        printf("Enter Roll Number: ");
        scanf("%d", &roll);

        while (temp) {
            if (temp->roll == roll) {
                found = 1;
                break;
            }
            temp = temp->next;
        }

        if (!found) {
            printf("Record Not Found\n");
            return;
        }
    }

    // CASE 2: NAME → SHOW → ASK ROLL
    else if (ch == 'N' || ch == 'n') {
        printf("Enter Name: ");
        scanf(" %[^\n]", name);

        printf("\nMatching Records:\n");
        while (temp) {
            if (strcmp(temp->name, name) == 0) {
                printf("Roll:%d Name:%s Per:%.2f\n",
                       temp->roll, temp->name, temp->per);
                found = 1;
            }
            temp = temp->next;
        }

        if (!found) {
            printf("No Matching Records\n");
            return;
        }

        printf("Enter Roll Number to Modify: ");
        scanf("%d", &roll);

        temp = head;
        while (temp) {
            if (temp->roll == roll) break;
            temp = temp->next;
        }

        if (!temp) {
            printf("Invalid Roll Number\n");
            return;
        }
    }

    // CASE 3: PERCENTAGE → SHOW → ASK ROLL
    else if (ch == 'P' || ch == 'p') {
        printf("Enter Percentage: ");
        scanf("%f", &per);

        printf("\nMatching Records:\n");
        while (temp) {
            if (temp->per == per) {
                printf("Roll:%d Name:%s Per:%.2f\n",
                       temp->roll, temp->name, temp->per);
                found = 1;
            }
            temp = temp->next;
        }

        if (!found) {
            printf("No Matching Records\n");
            return;
        }

        printf("Enter Roll Number to Modify: ");
        scanf("%d", &roll);

        temp = head;
        while (temp) {
            if (temp->roll == roll) break;
            temp = temp->next;
        }

        if (!temp) {
            printf("Invalid Roll Number\n");
            return;
        }
    }

    else {
        printf("Invalid Choice\n");
        return;
    }

    // STEP 2: MODIFY FIELD
    printf("\nModify Field\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");
    printf("Enter Your Choice: ");
    scanf(" %c", &field);

    if (field == 'N' || field == 'n') {
        printf("Enter New Name: ");
        scanf(" %[^\n]", temp->name);
    }

    else if (field == 'P' || field == 'p') {
        printf("Enter New Percentage: ");
        scanf("%f", &temp->per);
    }

    else {
        printf("Invalid Choice\n");
        return;
    }

    printf("Record Modified Successfully\n");
}


