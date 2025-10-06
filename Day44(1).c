//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void countCharacters(char str[], int *spaces, int *digits, int *special) {
    *spaces = 0;
    *digits = 0;
    *special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            (*spaces)++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            (*digits)++;
        } else if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) {
            (*special)++;
        }
    }
}
int main() {
    char str[MAX];
    int spaces, digits, special;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present
    countCharacters(str, &spaces, &digits, &special);
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}