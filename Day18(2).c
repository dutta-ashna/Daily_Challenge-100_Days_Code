//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two positive integers to find their HCF (GCD): ");
    scanf("%d %d", &a, &b);
    
    // Ensure a and b are positive
    if(a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 1; // Exit the program with an error code
    }
    
    // Euclidean algorithm to find HCF (GCD)
    while(b != 0){
        int temp = b;
        b = a % b; // Remainder
        a = temp; // Update a to the previous b
    }
    
    printf("The HCF (GCD) is: %d\n", a);
    
    return 0;
}