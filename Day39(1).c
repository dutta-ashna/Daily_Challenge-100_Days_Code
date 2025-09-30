//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
int main() {
    int rows, cols, i, j, isDistinct = 1;
    
    // Input dimensions for the matrix
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d %d", &rows, &cols);
    
    // A matrix can only have distinct diagonal elements if it is square
    if(rows != cols) {
        printf("False\n");
        return 0;
    }
    
    int matrix[rows][cols];
    
    // Input elements for the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check for distinct diagonal elements
    for(i = 0; i < rows; i++) {
        for(j = i + 1; j < cols; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct) {
            break;
        }
    }
    
    if(isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}