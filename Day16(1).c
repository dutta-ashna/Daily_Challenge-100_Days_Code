//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include<stdio.h>
int main(){
    int n;
    int binary[32]; // Array to store binary digits, assuming a 32-bit integer
    int index = 0; // Index for the binary array

    printf("Enter a positive integer n to convert it to binary: ");
    scanf("%d", &n);
    
    if(n == 0) {
        printf("The binary representation of 0 is: 0\n");
        return 0;
    }

    while(n > 0){
        binary[index] = n % 2; // Store the remainder (0 or 1)
        n /= 2; // Divide n by 2
        index++;
    }
    
    printf("The binary representation is: ");
    for(int i = index - 1; i >= 0; i--){ // Print the binary digits in reverse order
        printf("%d", binary[i]);
    }
    printf("\n");
    
    return 0;
}
