// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int size, i, k;
    
    printf("Enter the size of the array:");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to rotate (k):");
    scanf("%d", &k);
    
    // Normalize k to avoid unnecessary rotations
    k = k % size;
    
    // Reverse the entire array
    reverse(arr, 0, size - 1);
    // Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining elements
    reverse(arr, k, size - 1);
    
    // Print the rotated array
    printf("Array after rotation:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}