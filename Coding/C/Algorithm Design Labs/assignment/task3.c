/* This program is designed to search for the earliest occurrence of an issue code
for a given product id. that in this case can be entered by the user, from a range 1-10
obviusly since this is not real data nor an extensive list.

Author: Antonio Cruel.

*/

#include <stdio.h>

// Define structure for each entry in the data
typedef struct {
    int lineCode;
    int batchCode;
    char batchDateTime[20];
    int productId;
    int issueCode;
    char issueDescription[100];
    int resolutionCode;
    char resolutionDescription[100];
    int reportingEmployeeId;
} Entry;

// Binary search function to find the earliest occurrence of an issue code for a given product id
int binarySearchEarliestOccurrence(Entry data[], int n, int productId, int issueCode) {
    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (data[mid].productId == productId && data[mid].issueCode == issueCode) {
            result = mid;
            right = mid - 1; // Search for earlier occurrence
        } else if (data[mid].productId < productId || 
                   (data[mid].productId == productId && data[mid].issueCode < issueCode)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    // Adjusted sample data initialization (sorted by Product Id and Issue Code)
    Entry data[] = {
        {1, 101, "01/04/2024 08:30", 1, 101, "Wing assembly issue", 201, "Repaired wing assembly", 1},
        {2, 102, "02/04/2024 09:00", 2, 102, "Fuselage alignment problem", 202, "Realigned fuselage", 2},
        {2, 102, "02/04/2024 09:30", 4, 104, "Hydraulic system leak", 204, "Fixed hydraulic system", 4},
        {3, 103, "03/04/2024 10:00", 5, 105, "Avionics calibration issue", 205, "Calibrated avionics", 5},
        {3, 103, "03/04/2024 10:30", 6, 106, "Landing gear malfunction", 206, "Repaired landing gear", 6},
        {4, 104, "04/04/2024 11:00", 7, 107, "Structural integrity concern", 207, "Strengthened structural frame", 7},
        {4, 104, "04/04/2024 11:30", 8, 108, "Cockpit instrumentation error", 208, "Replaced faulty instrument", 8},
        {2, 102, "02/04/2024 09:00", 3, 103, "Engine malfunction", 203, "Replaced faulty engine part", 3},
        {1, 109, "05/04/2024 12:00", 1, 109, "Fuel system malfunction", 209, "Repaired fuel system", 9},
        {2, 110, "06/04/2024 13:00", 1, 110, "Cabin pressure issue", 210, "Adjusted cabin pressure", 10}
    };
    
    int n = sizeof(data) / sizeof(data[0]);

    // Perform binary search for earliest occurrence of issue code 106 for product id 6 in this case, can be changed to match the current interest
    int productIdToSearch = 6;
    int issueCodeToSearch = 106;
    int index = binarySearchEarliestOccurrence(data, n, productIdToSearch, issueCodeToSearch);

    if (index != -1) {
        printf("Earliest occurrence of issue code %d for product id %d found at index %d\n", issueCodeToSearch, productIdToSearch, index);
        // Print details of the earliest occurrence
        printf("Product Id: %d, Issue Code: %d, Issue Description: %s\n", data[index].productId, data[index].issueCode, data[index].issueDescription);
    } else {
        printf("Issue code %d not found for product id %d\n", issueCodeToSearch, productIdToSearch);
    }

    return 0;
}
