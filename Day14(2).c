//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include<stdio.h>
int main(){
    int n;
    long long product = 1; // Use long long to handle larger products
    printf("Enter a positive integer n to print the product of even numbers from 1 to n: ");
    scanf("%d", &n);
    
    for(int i = 2; i <= n; i += 2){ // Start from 2 and increment by 2 to get even numbers
        product *= i;
    }
    
    if(n < 2) {
        product = 0; // If n is less than 2, there are no even numbers to multiply
    }
    
    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    
    return 0;
}