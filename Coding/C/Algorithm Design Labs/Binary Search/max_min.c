/* Thi program is designed to create a max, min algorithm with the
possibility to choose the size of the array and the order of the numbers

Author: Antonio Cruel*/

#include <stdio.h>

void findMinMax(int A[], int N, int *maxVal, int *minVal) { //Function for the min, max finder
    if (N == 0) {
        printf("Array is empty\n");
        return;
    }

    *maxVal = A[0];
    *minVal = A[0];

    for (int i = 1; i < N; i++) {
        if (A[i] > *maxVal) { //compare the set min, max with the arrays and make changes accordingly
            *maxVal = A[i];
        } else if (A[i] < *minVal) {
            *minVal = A[i];
        }// end if
    }//end for loop
} //end min, max

int main() { //Main function

    int N;
    printf("Please enter the size you want for your array\n");
    scanf("\n%d", &N);

    int A[N];  // Replace with your array

    printf("\nPlease enter the numbers you want in the Array.\n");
    
    for (int i = 0; i <= N - 1; i++)
    {
        scanf("\n%d", &A[i]);
    }

    int maxVal, minVal;
    findMinMax(A, N, &maxVal, &minVal);

    printf("Maximum value: %d, Minimum value: %d\n", maxVal, minVal);

    return 0;
} //end main
