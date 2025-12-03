#include <stdio.h>

// Function to find first occurrence
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            ans = mid;       // Possible answer
            high = mid - 1;  // Move left to find first occurrence
        }
        else if (nums[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

// Function to find last occurrence
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            ans = mid;       // Possible answer
            low = mid + 1;   // Move right to find last occurrence
        }
        else if (nums[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int nums[100], n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    printf("%d,%d\n", first, last);

    return 0;
}
