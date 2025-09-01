//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers to swap:");
    scanf("%d %d", &a, &b);
    a = a + b; // Step 1: Sum of both numbers
    b = a - b; // Step 2: Original value of 'a'
    a = a - b; // Step 3: Original value of 'b'
    printf("After swap: %d %d\n", a, b);
    return 0;
}