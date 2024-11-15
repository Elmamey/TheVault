/*
This program is designed to sort the randomized sample data I created and using the merge sort to
display it (awkwardly) in the terminal, for the task 1. The merge sort has the complexity O(n log n)
which is the one required for the task.

Author: Antonio Cruel

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a single entry in the production line logs
struct ProductionLog {
    int LineCode;
    int BatchCode;
    char BatchDateTime[20];
    int ProductId;
    char IssueCodeDesc[100];
    char ResolutionCodeDesc[100];
    int ReportingEmployeeId;
};

// Create a separate merge function to merge two sorted subarrays and make it easier to see the main method
void merge(struct ProductionLog arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays using dynamic memory allocation
    struct ProductionLog *L = (struct ProductionLog *)malloc(n1 * sizeof(struct ProductionLog));
    struct ProductionLog *R = (struct ProductionLog *)malloc(n2 * sizeof(struct ProductionLog));

    //malloc success checker :D
    if (L == NULL || R == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (strcmp(L[i].BatchDateTime, R[j].BatchDateTime) <= 0) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[] and R[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Free dynamically allocated memory
    free(L);
    free(R);
}

// The merge sort function finally
void mergeSort(struct ProductionLog arr[], int l, int r) {
    if (l < r) {
        // Find the middle point
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
}

// Function to print the sorted production logs after it has gone through merge and mergeSort
void printProductionLogs(struct ProductionLog arr[], int n) {
    printf("Line Code | Batch Code | Batch Date & Time   | Product Id | Issue Code & Description              | Resolution Code & Description       | Reporting Employee Id\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------\n");

    // For loop to print each iteration of the log with spaces to try and match the sample I did and make it as legible as possible hahahah
    for (int i = 0; i < n; i++) {
        printf("%9d | %10d | %20s | %10d | %38s | %33s | %20d\n",  arr[i].LineCode, arr[i].BatchCode, arr[i].BatchDateTime, arr[i].ProductId, arr[i].IssueCodeDesc, arr[i].ResolutionCodeDesc, arr[i].ReportingEmployeeId);
    }
}

int main() {
    // Sample production line logs that needs to be sorted.
    struct ProductionLog logs[] = {

        
        {3, 103, "03/04/2024 10:30", 6, "106 - Landing gear malfunction", "206 - Repaired landing gear", 6},
        {2, 102, "02/04/2024 09:00", 3, "103 - Engine malfunction", "203 - Replaced faulty engine part", 3},
        {1, 101, "01/04/2024 08:30", 1, "101 - Wing assembly issue", "201 - Repaired wing assembly", 1},
        {4, 104, "04/04/2024 11:30", 8, "108 - Cockpit instrumentation error", "208 - Replaced faulty instrument", 8},
        {3, 103, "03/04/2024 10:00", 5, "105 - Avionics calibration issue", "205 - Calibrated avionics", 5},
        {2, 102, "02/04/2024 09:30", 4, "104 - Hydraulic system leak", "204 - Fixed hydraulic system", 4},
        {4, 104, "04/04/2024 11:00", 7, "107 - Structural integrity concern", "207 - Strengthened structural frame", 7},
        {1, 101, "01/04/2024 08:45", 2, "102 - Fuselage alignment problem", "202 - Realigned fuselage", 2},
        {6, 106, "06/04/2024 13:00", 10,"110 - Electrical system failure", "210 - Repaired electrical system", 10},
        {5, 105, "05/04/2024 12:00", 9, "109 - Fuel system malfunction", "209 - Replaced faulty fuel system", 9}
    };
    int n = sizeof(logs) / sizeof(logs[0]);

    // Sorting the production logs based on Batch Date & Time using merge sort
    mergeSort(logs, 0, n - 1);

    // Printing the sorted production logs
    printProductionLogs(logs, n);

    return 0;
}
