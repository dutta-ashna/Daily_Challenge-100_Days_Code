//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main(){
    int n;
    long long product = 1; // Use long long to handle larger products
    int hasOddDigit = 0; // Flag to check if there is at least one odd digit
    printf("Enter a positive integer n to find the product of its odd digits: ");
    scanf("%d", &n);
    
    while(n != 0){
        int digit = n % 10; // Get the last digit
        if(digit % 2 != 0){ // Check if the digit is odd
            product *= digit; // Multiply it to the product
            hasOddDigit = 1; // Set the flag to true
        }
        n /= 10; // Remove the last digit from n
    }
    
    if(!hasOddDigit) {
        product = 1; // If no odd digits were found, assume product is 1
    }
    
    printf("The product of the odd digits is: %lld\n", product);
    
    return 0;
}