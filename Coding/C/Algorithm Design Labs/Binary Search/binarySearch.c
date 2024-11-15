#include <stdio.h>

int binarySearch(int A[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (A[mid] == key) {
            return mid; // Key found
        } else if (A[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        printf("low is: %d, high is: %d, mid is: %d\n\n", low, high, mid); 
    }

    return -1; // Key not found
}

int main() {
    int A[] = {3, 44, 56, 77, 91, 98};
    int n = sizeof(A) / sizeof(A[0]);
    int key = 77;


    int result = binarySearch(A, n, key);

    if (result != -1) {
        printf("The key %d is found at index %d.\n", key, result);
    } else {
        printf("The key %d is not found in the array.\n", key);
    }

    return 0;
}
