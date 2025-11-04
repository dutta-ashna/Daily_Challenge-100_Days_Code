//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
int main() {
    int day, month, year;
    
    // Input date in dd/mm/yyyy format
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    
    // Array of month abbreviations
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    // Display date in dd-MMM-yyyy format
    if (month >= 1 && month <= 12) {
        printf("%02d-%s-%d\n", day, months[month - 1], year);
    } else {
        printf("Invalid month!\n");
    }
    
    return 0;
}