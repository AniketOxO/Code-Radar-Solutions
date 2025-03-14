#include <stdio.h>

// Function to perform Selection Sort
void printArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        // Find the index of the minimum element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}