//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j;
    
    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns of the first matrix:");
    scanf("%d %d", &rows1, &cols1);
    
    int matrix1[rows1][cols1];
    
    // Input elements for the first matrix
    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns of the second matrix:");
    scanf("%d %d", &rows2, &cols2);
    
    // Check if addition is possible
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Error: Matrices must have the same dimensions to be added.\n");
        return 1;
    }
    
    int matrix2[rows2][cols2];
    int sumMatrix[rows1][cols1]; // Resultant matrix to store the sum
    
    // Input elements for the second matrix
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Compute the sum of the two matrices
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Output the resultant sum matrix
    printf("The sum of the two matrices is:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}