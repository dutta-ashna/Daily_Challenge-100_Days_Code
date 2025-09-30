//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main() {
    int rowsA, colsA, rowsB, colsB, i, j, k;
    
    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns of the first matrix:");
    scanf("%d %d", &rowsA, &colsA);
    
    int matrixA[rowsA][colsA];
    
    // Input elements for the first matrix
    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns of the second matrix:");
    scanf("%d %d", &rowsB, &colsB);
    
    // Check if multiplication is possible
    if(colsA != rowsB) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    
    int matrixB[rowsB][colsB];
    
    // Input elements for the second matrix
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rowsB; i++) {
        for(j = 0; j < colsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    int result[rowsA][colsB];
    
    // Initialize result matrix to zero
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }
    
    // Perform matrix multiplication
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            for(k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    
    // Print the result matrix
    printf("Resultant Matrix after multiplication:\n");
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
