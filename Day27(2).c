//Q54: Write a program to print the following pattern:
/*
*

***

*****
*******
***

*
*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.
*/
#include <stdio.h>

int main() {
    int i, j;

    // Upper part (rows 1–4)
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");

        // Blank line only after row 1 and row 2
        if(i == 1 || i == 2)
            printf("\n");
    }

    // Lower part (rows 5–6)
    for(i = 2; i >= 1; i--) {   // row 5 = 3 stars, row 6 = 1 star
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");

        // Blank line only after row 5
        if(i == 2)
            printf("\n");
    }

    return 0;
}
