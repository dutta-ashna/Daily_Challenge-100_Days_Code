//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>
#include<string.h>
int main(){
    char binary[65]; // Array to store binary number as a string, assuming max 64 bits
    printf("Enter a binary number to find its 1's complement: ");
    scanf("%s", binary);
    
    int length = strlen(binary);
    char onesComplement[65]; // Array to store the 1's complement
    
    for(int i = 0; i < length; i++){
        if(binary[i] == '0'){
            onesComplement[i] = '1'; // Flip 0 to 1
        } else if(binary[i] == '1'){
            onesComplement[i] = '0'; // Flip 1 to 0
        } else {
            printf("Invalid input. Please enter a valid binary number.\n");
            return 1; // Exit the program with an error code
        }
    }
    onesComplement[length] = '\0'; // Null-terminate the string
    
    printf("The 1's complement is: %s\n", onesComplement);
    
    return 0;
}