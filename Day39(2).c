//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int sum = 0;
    
    // Input dimensions for the matrix
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d %d", &rows, &cols);
    
    // A matrix can only have a main diagonal if it is square
    if(rows != cols) {
        printf("Matrix is not square. No main diagonal.\n");
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
    
    // Calculate the sum of main diagonal elements
    for(i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }
    
    printf("Sum of main diagonal elements: %d\n", sum);
    
    return 0;
    }