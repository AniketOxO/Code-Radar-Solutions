#include <stdio.h>

// Function to perform Insertion Sort on a character array
void insertionSort(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char key = arr[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print the sorted character array
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
        if (i < n - 1) {
            printf(" "); // Space between characters, but no trailing space
        }
    }
    printf("\n"); // Ensures proper formatting
}
