#include <stdio.h>
#include <limits.h>  \

int main() {
    int N;
    scanf("%d", &N);

   \
    if (N < 2) {
       
        if (N == 1) {
            int temp;
            scanf("%d", &temp);
        }
        printf("-1\n");
        return 0;
    }

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

  
    for (int i = 0; i < N; i++) {
        if (arr[i] > largest) {
          
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
          
            secondLargest = arr[i];
        }
    }

   
    if (secondLargest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", secondLargest);
    }

    return 0;
}
