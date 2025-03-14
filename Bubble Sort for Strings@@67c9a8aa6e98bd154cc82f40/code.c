#include <stdio.h>
#include <string.h>

#define MAX 100
#define LEN 100

// Function to perform Bubble Sort on strings
void bubbleSort(char arr[][LEN], int n) {
    char temp[LEN];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) { 
                // Swap strings if they are out of order
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j], temp);
            }
        }
    }
}

// Function to print the sorted array
void printArray(char arr[][LEN], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}