#include <stdio.h>

// Function to find the length of the smallest subarray to be sorted
int findUnsortedSubarrayLength(int arr[], int N) {
    int l = 0, r = N - 1;

    // Step 1: Find the left boundary
    while (l < N - 1 && arr[l] <= arr[l + 1]) {
        l++;
    }
    if (l == N - 1) {
        return 0; // Already sorted
    }

    // Step 2: Find the right boundary
    while (r > 0 && arr[r] >= arr[r - 1]) {
        r--;
    }

    // Step 3: Find min and max in the unsorted subarray
    int min = arr[l], max = arr[l];
    for (int i = l; i <= r; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Step 4: Expand left boundary
    while (l > 0 && arr[l - 1] > min) {
        l--;
    }

    // Step 5: Expand right boundary
    while (r < N - 1 && arr[r + 1] < max) {
        r++;
    }

    return (r - l + 1);
}