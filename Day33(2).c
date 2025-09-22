//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    int size, i, target;
    
    printf("Enter the size of the array:");
    scanf("%d", &size);
    
    int arr[size + 1]; // Extra space for the new element
    printf("Enter %d sorted elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to insert:");
    scanf("%d", &target);
    
    // Find the position to insert the new element
    int pos = size; // Default position is at the end
    for(i = 0; i < size; i++) {
        if(arr[i] > target) {
            pos = i;
            break;
        }
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