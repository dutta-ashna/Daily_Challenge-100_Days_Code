//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWord(char word[]) {
    int i, len = strlen(word);
    for(i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = temp;
    }
}

int main() {
    char sentence[200], word[50];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';      // End the word
            reverseWord(word);  // Reverse the word
            printf("%s", word); // Print reversed word

            if (sentence[i] == ' ')
                printf(" ");    // Print space between words

            j = 0;              // Reset for next word
        }
        if (sentence[i] == '\0')
            break;
        i++;
    }

    return 0;
}
