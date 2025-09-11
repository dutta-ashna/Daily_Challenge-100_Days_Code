//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}
int main(){
    int number, originalNumber, digit, sumOfFactorials = 0;
    
    printf("Enter a number to check if it is a strong number: ");
    scanf("%d", &number);
    
    originalNumber = number; // Store the original number for comparison
    
    // Calculate the sum of the factorials of each digit
    while(number > 0){
        digit = number % 10; // Get the last digit
        sumOfFactorials += factorial(digit); // Add the factorial of the digit to the sum
        number /= 10; // Remove the last digit
    }
    
    // Check if the sum of factorials equals the original number
    if(sumOfFactorials == originalNumber){
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    
    return 0;
}