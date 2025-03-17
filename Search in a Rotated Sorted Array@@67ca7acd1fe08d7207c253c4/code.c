#include <iostream>
using namespace std;

// Function to find the index of the target in a rotated sorted array
int searchInRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) 
            return mid;  // Found the target

        // Determine which part is sorted
        if (arr[left] <= arr[mid]) { // Left half is sorted
            if (arr[left] <= target && target < arr[mid])
                right = mid - 1;  // Search in the left half
            else
                left = mid + 1;  // Search in the right half
        } 
        else { // Right half is sorted
            if (arr[mid] < target && target <= arr[right])
                left = mid + 1;  // Search in the right half
            else
                right = mid - 1;  // Search in the left half
        }
    }
    
    return -1; // Target not found
}