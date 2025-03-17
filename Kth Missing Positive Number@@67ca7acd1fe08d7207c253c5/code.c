#include <stdio.h>

// Function to find the Kth missing positive number
int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, current = 1, index = 0;

    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            // Current number exists in the array, move to the next number
            index++;
        } else {
            // Current number is missing
            missingCount++;
            if (missingCount == k)
                return current;
        }
        current++;
    }
    return -1; // Should never reach here if k is valid
}