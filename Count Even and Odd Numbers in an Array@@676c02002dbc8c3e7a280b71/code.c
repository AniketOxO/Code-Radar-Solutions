#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int evenCount = 0, oddCount = 0;

   
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the counts
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);

    return 0;
}
