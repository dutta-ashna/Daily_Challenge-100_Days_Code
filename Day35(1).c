//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
#include <limits.h>
int main() {
    int size, i;
    
    printf("Enter the size of the array:");
    scanf("%d", &size);
    
    if(size < 2) {
        printf("Array should have at least two elements to find the second largest.\n");
        return 1;
    }
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int first, second;
    first = second = INT_MIN; // Initialize to the smallest integer value
    
    for(i = 0; i < size; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    if(second == INT_MIN) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }
    
    return 0;
}