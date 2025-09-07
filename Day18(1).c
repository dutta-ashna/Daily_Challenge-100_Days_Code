//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive integer n to print all its factors: ");
    scanf("%d", &n);
    
    printf("The factors of %d are: ", n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){ // If i divides n with no remainder, it's a factor
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}