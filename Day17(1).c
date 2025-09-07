//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
#include<math.h>
int main(){
    int n, originalNumber, sum = 0, digits = 0;
    printf("Enter a positive integer n to check if it is an Armstrong number: ");
    scanf("%d", &n);
    
    originalNumber = n; // Store the original number to compare later
    
    // Count the number of digits
    int temp = n;
    while(temp != 0){
        digits++;
        temp /= 10;
    }
    
    // Calculate the sum of the digits raised to the power of 'digits'
    temp = n;
    while(temp != 0){
        int digit = temp % 10; // Get the last digit
        sum += (int)pow(digit, digits); // Raise it to the power of 'digits' and add to sum
        temp /= 10; // Remove the last digit from temp
    }
    
    if(originalNumber == sum){
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}