//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
#define MAX 1000
void findLongestWord(char sentence[], char longestWord[]) {
    int maxLength = 0;
    char currentWord[MAX];
    int currentLength = 0;
    int i = 0;

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            currentWord[currentLength++] = sentence[i];
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                currentWord[currentLength] = '\0'; // Null-terminate the current word
                strcpy(longestWord, currentWord);
            }
            currentLength = 0; // Reset for the next word
        }

        if (sentence[i] == '\0' || sentence[i] == '\n') {
            break; // End of sentence
        }
        i++;
    }
}
int main() {
    char sentence[MAX];
    char longestWord[MAX] = "";

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    findLongestWord(sentence, longestWord);

    printf("Longest word: %s\n", longestWord);

    return 0;
}
