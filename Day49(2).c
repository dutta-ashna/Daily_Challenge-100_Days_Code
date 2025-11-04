//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first initial
    if (name[0] != ' ') {
        printf("%c.", name[0]);
    }

    // Print middle initials
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            // Check if next space exists (to avoid surname)
            int j = i + 1;
            while (name[j] != ' ' && name[j] != '\0')
                j++;

            // If another space exists, it's not the last word → print initial
            if (name[j] == ' ') {
                printf("%c.", name[i + 1]);
            } else {
                // Last word → surname
                printf(" %s", &name[i + 1]);
                break;
            }
        }
        i++;
    }

    return 0;
}
