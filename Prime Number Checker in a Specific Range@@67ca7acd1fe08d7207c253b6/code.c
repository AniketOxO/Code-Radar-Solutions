#include <stdio.h>


int isPrime(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0)
            return 0;  
    }
    return 1;  
}

void printPrimesInRange(int a, int b) {
    int found = 0;  
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found)
        printf("No prime numbers");  
    printf("\n");
}