#include <stdio.h>

// Helper function to reverse a portion of the array in-place
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int N;
    scanf("%d", &N);  // Size of the array

    int arr[N];
    // Read N space-separated integers
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int K;
    scanf("%d", &K);  // Number of steps to rotate to the right

    // Normalize K in case K >= N
    K = K % N;

    // Step 1: Reverse the entire array
    reverse(arr, 0, N - 1);

    // Step 2: Reverse the first K elements
    reverse(arr, 0, K - 1);

    // Step 3: Reverse the remaining N-K elements
    reverse(arr, K, N - 1);

    // Print the rotated array (single line, space-separated)
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
