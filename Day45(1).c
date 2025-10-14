//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>
#define MAX 100
int countFrequency(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}
int main() {
    char str[MAX], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present
    printf("Enter a character to count its frequency: ");
    scanf(" %c", &ch);
    int frequency = countFrequency(str, ch);
    printf("Frequency of '%c': %d\n", ch, frequency);
    return 0;
}