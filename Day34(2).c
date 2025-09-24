//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main() {
    int size, i, pos;
    
    printf("Enter the size of the array:");
    scanf("%d", &size);
    
    int arr[size]; // No extra space needed for deletion
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to delete (0 to %d):", size - 1);
    scanf("%d", &pos);
    
    // Validate position
    if(pos < 0 || pos >= size) {
        printf("Invalid position!\n");
        return 1;
    }
    
    // Shift elements to the left to fill the gap of the deleted element
    for(i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Print the updated array
    printf("Array after deletion:\n");
    for(i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}