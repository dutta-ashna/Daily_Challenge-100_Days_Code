//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main(){
    int n, originalNumber, reversedNumber = 0;
    printf("Enter a positive integer n to check if it is a palindrome: ");
    scanf("%d", &n);
    
    originalNumber = n; // Store the original number to compare later
    
    while(n != 0){
        int digit = n % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + digit; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }
    
    if(originalNumber == reversedNumber){
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}