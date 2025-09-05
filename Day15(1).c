//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
int main(){
    int n;
    long long factorial = 1; // Use long long to handle larger factorials
    printf("Enter a positive integer n to calculate its factorial: ");
    scanf("%d", &n);
    
    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit the program with an error code
    }
    
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    
    printf("The factorial of %d is: %lld\n", n, factorial);
    
    return 0;
}