//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter a positive integer n to find the sum of its digits: ");
    scanf("%d", &n);
    
    while(n != 0){
        int digit = n % 10; // Get the last digit
        sum += digit; // Add it to the sum
        n /= 10; // Remove the last digit from n
    }
    
    printf("The sum of the digits is: %d\n", sum);
    
    return 0;
}