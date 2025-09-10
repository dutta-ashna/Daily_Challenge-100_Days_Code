//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>
int main(){
    int number, firstDigit, lastDigit, numDigits, swappedNumber, middlePart;
    
    printf("Enter a number to swap its first and last digit: ");
    scanf("%d", &number);
    
    if(number < 10){
        // If the number has only one digit, swapping doesn't change it
        printf("The number after swapping first and last digit is: %d\n", number);
        return 0;
    }
    
    lastDigit = number % 10; // Get the last digit
    numDigits = (int)log10(number); // Get the number of digits - 1
    firstDigit = (int)(number / pow(10, numDigits)); // Get the first digit
    
    // Remove the first and last digit from the number
    middlePart = (number % (int)pow(10, numDigits)) / 10;
    
    // Construct the new number with swapped digits
    swappedNumber = lastDigit * (int)pow(10, numDigits) + middlePart * 10 + firstDigit;
    
    printf("The number after swapping first and last digit is: %d\n", swappedNumber);
    
    return 0;
}