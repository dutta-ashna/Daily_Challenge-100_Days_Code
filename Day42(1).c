//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
#include<ctype.h>
int main() {
    char str [100];
        int vowels = 0, consonants = 0;
        int i = 0;

        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);  // read string input safely

        while (str[i] != '\0') {
            char ch = tolower(str[i]);  // convert to lowercase to simplify checking
            if (ch >= 'a' && ch <= 'z') {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}