#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

   
    int visited[N];
    for (int i = 0; i < N; i++) {
        visited[i] = 0; 
    }

    for (int i = 0; i < N; i++) {
        // If already visited, skip
        if (visited[i] == 1) {
            continue;
        }

        int count = 1; 
       
        for (int j = i + 1; j < N; j++) {
            if (arr[j] == arr[i]) {
                count++;
                visited[j] = 1;  
            }
        }

    
        visited[i] = 1;


        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
