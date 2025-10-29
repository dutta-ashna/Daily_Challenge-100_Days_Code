//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

// Q95: Check if one string is a rotation of another (robust version)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void trim_newline(char *s) {
    size_t n = strlen(s);
    if (n > 0 && s[n-1] == '\n') s[n-1] = '\0';
}

int main(void) {
    char s1[1001], s2[1001];

    // Read lines safely (works if user presses Enter or if inputs are space-free)
    if (fgets(s1, sizeof(s1), stdin) == NULL) return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL) return 0;

    trim_newline(s1);
    trim_newline(s2);

    size_t n1 = strlen(s1), n2 = strlen(s2);

    if (n1 != n2) {
        printf("Not rotation\n");
        return 0;
    }

    // allocate enough space for s1+s1 and terminating null
    size_t temp_size = n1 * 2 + 1;
    char *temp = (char *)malloc(temp_size);
    if (!temp) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // create s1+s1
    temp[0] = '\0';
    strcat(temp, s1);
    strcat(temp, s1);

    // check if s2 is substring of temp
    if (strstr(temp, s2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    free(temp);
    return 0;
}
