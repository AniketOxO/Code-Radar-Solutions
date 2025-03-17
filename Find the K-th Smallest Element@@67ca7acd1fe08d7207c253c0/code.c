#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int kthSmallestElement(int arr[], int n, int k) {
    if (k < 1 || k > n) {
        return -1; 
    }

    qsort(arr, n, sizeof(int), compare); 

    return arr[k - 1]; 
}