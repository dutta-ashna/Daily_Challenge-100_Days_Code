//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Print each character on a new line until null terminator
    while(str[i] != '\0') {
        // Avoid printing the newline character added by fgets
        if(str[i] != '\n') {
            printf("%c\n", str[i]);
        }
        i++;
    }
    
    return 0;
}