//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    bool isPrime = true; // Assume the number is prime initially
    printf("Enter a positive integer n to check if it is prime: ");
    scanf("%d", &n);
    
    if(n <= 1){
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        for(int i = 2; i * i <= n; i++){ // Check divisibility from 2 to sqrt(n)
            if(n % i == 0){
                isPrime = false; // Found a divisor, so it's not prime
                break;
            }
        }
    }
    
    if(isPrime){
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    
    return 0;
}