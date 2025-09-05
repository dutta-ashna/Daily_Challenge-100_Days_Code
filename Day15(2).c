//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main(){
    int n, reversedNumber = 0;
    printf("Enter a positive integer n to reverse it: ");
    scanf("%d", &n);
    
    while(n != 0){
        int digit = n % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + digit; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }
    
    printf("The reversed number is: %d\n", reversedNumber);
    
    return 0;
}