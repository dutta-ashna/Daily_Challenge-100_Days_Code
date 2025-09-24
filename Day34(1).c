//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int size, i, pos, target;
    
    printf("Enter the size of the array:");
    scanf("%d", &size);
    
    int arr[size + 1]; // Extra space for the new element
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to insert (0 to %d) and the element to insert:", size);
    scanf("%d %d", &pos, &target);
    
    // Validate position
    if(pos < 0 || pos > size) {
        printf("Invalid position!\n");
        return 1;
    }
    
    // Shift elements to the right to make space for the new element
    for(i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element
    arr[pos] = target;
    
    // Print the updated array
    printf("Array after insertion:\n");
    for(i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}