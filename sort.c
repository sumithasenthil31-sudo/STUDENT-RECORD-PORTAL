#include"header.h"
void sort_records() {
    char ch;
    NODE *i, *j;

    printf("\nN/n : Name\nP/p : Percentage\n");
    scanf(" %c", &ch);

    for (i = head; i; i = i->next) {
        for (j = i->next; j; j = j->next) {

            if ((ch=='N'||ch=='n') && strcmp(i->name,j->name)>0) {
                int r=i->roll; float p=i->per; char n[50];
                strcpy(n,i->name);

                i->roll=j->roll; i->per=j->per; strcpy(i->name,j->name);
                j->roll=r; j->per=p; strcpy(j->name,n);
            }

            else if ((ch=='P'||ch=='p') && i->per>j->per) {
                int r=i->roll; float p=i->per; char n[50];
                strcpy(n,i->name);

                i->roll=j->roll; i->per=j->per; strcpy(i->name,j->name);
                j->roll=r; j->per=p; strcpy(j->name,n);
            }
        }
    }

    printf("Sorted Successfully\n");
}

