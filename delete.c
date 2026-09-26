#include"header.h"
void stud_del() {
    char ch;
    int roll;
    char name[50];

    printf("\nR/r : Roll Number\nN/n : Name\n");
    scanf(" %c", &ch);
    if (ch == 'R' || ch == 'r') {
        NODE *temp = head, *prev = NULL;

        printf("Enter Roll: ");
        scanf("%d", &roll);

        while (temp) {
            if (temp->roll == roll) {
                if (prev) prev->next = temp->next;
                else head = temp->next;
                free(temp);
                printf("Deleted\n");
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        printf("Not Found\n");
    }

    else if (ch == 'N' || ch == 'n') {
        NODE *temp = head;
        int found = 0;

        printf("Enter Name: ");
        scanf(" %[^\n]", name);

        while (temp) {
            if (strcmp(temp->name, name) == 0) {
                printf("Roll:%d Name:%s Per:%.2f\n",
                       temp->roll, temp->name, temp->per);
                found = 1;
            }
            temp = temp->next;
        }

        if (!found) {
            printf("No Match\n");
            return;
        }

        printf("Enter Roll to Delete: ");
        scanf("%d", &roll);

        temp = head;
        NODE *prev = NULL;

        while (temp) {
            if (temp->roll == roll) {
                if (prev) prev->next = temp->next;
                else head = temp->next;
                free(temp);
                printf("Deleted\n");
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }
}
