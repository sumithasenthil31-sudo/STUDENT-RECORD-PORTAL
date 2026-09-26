// MAIN
#include"header.h"

NODE *head=NULL;
int main() {
    char choice;

    stud_load();  // LOAD FROM CSV

    while (1) {
        printf("\n**** STUDENT RECORD MENU ****\n");
        printf("A Add\nD Delete\nS Show\nM Modify\n");
        printf("V Save\nT Sort\nE Exit\n");
        printf("Enter Choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'A': case 'a': stud_add(); break;
            case 'D': case 'd': stud_del(); break;
            case 'S': case 's': stud_show(); break;
            case 'M': case 'm': stud_mod(); break;
            case 'V': case 'v': stud_save(); break;
            case 'T': case 't': sort_records(); break;

            case 'E': case 'e':
            {
                char ch;
                printf("\nS Save & Exit\nE Exit Without Saving\n");
                scanf(" %c", &ch);

                if (ch=='S'||ch=='s') {
                    stud_save();
                    exit(0);
                } else if (ch=='E'||ch=='e') {
                    exit(0);
                }
            }
        }
    }
}

