#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Find a potential majority candidate
    int candidate = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if the candidate is indeed the majority
    int occurrence = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == candidate) {
            occurrence++;
        }
    }

    if (occurrence > N / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
