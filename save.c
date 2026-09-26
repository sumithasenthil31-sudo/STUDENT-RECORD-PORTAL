// ✅ SAVE (CSV FOR EXCEL)
#include"header.h"
void stud_save() {
    FILE *fp = fopen("student.csv", "w");
    NODE *temp = head;

    if (!fp) {
        printf("File Error\n");
        return;
    }

    // HEADER (important for Excel)
    fprintf(fp, "Roll No,Name,Percentage\n");

    while (temp) {
        fprintf(fp, "%d,%s,%.2f\n",
                temp->roll, temp->name, temp->per);
        temp = temp->next;
    }

    fclose(fp);
    printf("Saved to student.csv (Open in Excel)\n");
}

// ✅ LOAD FROM CSV
void stud_load() {
    FILE *fp = fopen("student.csv", "r");
    int roll;
    char name[50];
    float per;

    if (!fp)
        return;

    // Skip header
    fscanf(fp, "%*[^\n]\n");

    while (fscanf(fp, "%d,%49[^,],%f\n", &roll, name, &per) == 3) {
        NODE *newnode = (NODE *)malloc(sizeof(NODE));

        newnode->roll = roll;
        strcpy(newnode->name, name);
        newnode->per = per;

        newnode->next = head;
        head = newnode;
    }

    fclose(fp);
}


