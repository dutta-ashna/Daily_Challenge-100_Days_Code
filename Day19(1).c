//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include<stdio.h>
int main(){
    int a, b, lcm;
    printf("Enter two positive integers to find their LCM: ");
    scanf("%d %d", &a, &b);
    
    // Ensure a and b are positive
    if(a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 1; // Exit the program with an error code
    }
    
    // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    int originalA = a, originalB = b;
    
    // Find GCD using Euclidean algorithm
    while(b != 0){
        int temp = b;
        b = a % b; // Remainder
        a = temp; // Update a to the previous b
    }
    
    int gcd = a; // GCD is stored in a after the loop
    lcm = (originalA * originalB) / gcd; // Calculate LCM
    
    printf("The LCM is: %d\n", lcm);
    
    return 0;
}