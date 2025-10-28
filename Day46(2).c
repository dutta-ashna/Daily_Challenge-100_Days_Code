//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
#define MAX 100
char firstRepeatingChar(char str[]) {
    int freq[26] = {0}; // Frequency array for lowercase letters

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                return str[i]; // Return the first repeating character
            }
        }
    }
    return '\0'; // Return null character if no repeating character found
}
int main() {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    char result = firstRepeatingChar(str);
    if (result != '\0') {
        printf("First repeating lowercase alphabet: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}