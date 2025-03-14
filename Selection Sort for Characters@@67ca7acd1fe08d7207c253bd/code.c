#include <stdio.h>

// Function to perform Selection Sort on character array
void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        // Find the index of the lexicographically smallest character
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum character with the first character
        char temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Function to print the sorted character array
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}
