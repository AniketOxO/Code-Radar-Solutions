#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

  
    int foundPeak = 0;

    for (int i = 0; i < N; i++) {
        
        if (i == 0) {
            
            if (N == 1 || arr[i] > arr[i + 1]) {
                printf("%d\n", arr[i]);
                foundPeak = 1;
                break;
            }
        }
       
        else if (i == N - 1) {
            if (arr[i] > arr[i - 1]) {
                printf("%d\n", arr[i]);
                foundPeak = 1;
                break;
            }
        }
    
        else {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                printf("%d\n", arr[i]);
                foundPeak = 1;
                break;
            }
        }
    }

    if (!foundPeak) {
        printf("No peak found\n");
    }

    return 0;
}
