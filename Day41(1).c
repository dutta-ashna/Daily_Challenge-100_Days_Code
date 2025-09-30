//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Count characters until null terminator
    while(str[count] != '\0') {
        count++;
    }
    
    // Subtract 1 to exclude the newline character added by fgets
    if(count > 0 && str[count - 1] == '\n') {
        count--;
    }
    
    printf("Number of characters in the string: %d\n", count);
    
    return 0;
}