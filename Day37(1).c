//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    int rowSums[rows]; // Array to store sum of each row
    
    // Initialize row sums to 0
    for(i = 0; i < rows; i++) {
        rowSums[i] = 0;
    }
    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j]; // Accumulate the sum for the current row
        }
    }
    
    printf("The sum of each row in the matrix is:\n");
    for(i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");
    
    return 0;
}