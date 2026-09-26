// GENERATE ROLL
#include"header.h"
int generate_roll() {
    int roll = 1, found;
    NODE *temp;

    while (1) {
        found = 0;
        temp = head;

        while (temp) {
            if (temp->roll == roll) {
                found = 1;
                break;
            }
            temp = temp->next;
        }

        if (!found)
            return roll;
        roll++;
    }
}


