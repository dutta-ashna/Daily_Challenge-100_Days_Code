//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}
int main() {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present
    toggleCase(str);
    printf("Toggled case string: %s\n", str);
    return 0;
}