/* This program is designed to create a single list to report issue codes by product 
Id and line Id for all production lines since they are distributed unevenly throughout the
data table and some share the same product ID but are in different lines.

Author: Antonio Cruel.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

// Define structure for linked list node, getting fancy with structures now.
typedef struct Node {
    Entry data;
    struct Node* next;
} Node;

// Function to merge two sorted linked lists
Node* mergeLists(Node* list1, Node* list2) {
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    if (list1->data.productId < list2->data.productId || 
        (list1->data.productId == list2->data.productId && list1->data.lineCode < list2->data.lineCode)) {
        list1->next = mergeLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeLists(list1, list2->next);
        return list2;
    }
}

// Merge sort function for linked list
Node* mergeSort(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* mid = slow->next;
    slow->next = NULL;

    return mergeLists(mergeSort(head), mergeSort(mid));
}

// Function to print report
void printReport(Node* head) {
    printf("Line Code | Product Id | Issue Code & Description\n");
    printf("-----------------------------------------------\n");

    while (head != NULL) {
            // Same as before for the for loop 
        printf("%9d | %10d | %s\n", head->data.lineCode, head->data.productId, head->data.issueDescription);
        head = head->next;
    }
}

int main() {
    // Sample data initialization (you can replace this with your own data)
    Node* head = NULL;

    Entry data[] = {
//One thing to highlight is that in my sample data, my employees report ID start with 00#, but since C recognizes 00# as an octal number base I decide to leave the numbers as they are.

        {1, 101, "01/04/2024 08:30", 1, 101, "Wing assembly issue", 201, "Repaired wing assembly", 1},
        {2, 102, "02/04/2024 09:00", 1, 102, "Fuselage alignment problem", 202, "Realigned fuselage", 2},
        {3, 103, "03/04/2024 10:00", 2, 103, "Engine malfunction", 203, "Replaced faulty engine part", 3},
        {4, 104, "04/04/2024 11:00", 2, 104, "Hydraulic system leak", 204, "Fixed hydraulic system", 4},
        {1, 105, "01/04/2024 08:45", 3, 105, "Avionics calibration issue", 205, "Calibrated avionics", 5},
        {2, 106, "02/04/2024 09:30", 3, 106, "Landing gear malfunction", 206, "Repaired landing gear", 6},
        {3, 107, "03/04/2024 10:30", 4, 107, "Structural integrity concern", 207, "Strengthened structural frame", 7},
        {4, 108, "04/04/2024 11:30", 4, 108, "Cockpit instrumentation error", 208, "Replaced faulty instrument", 8},
        {1, 109, "05/04/2024 12:00", 1, 109, "Fuel system malfunction", 209, "Repaired fuel system", 9},
        {2, 110, "06/04/2024 13:00", 1, 110, "Cabin pressure issue", 210, "Adjusted cabin pressure", 10}
    };

    // Populate the linked list with sample data
    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data[i];
        newNode->next = head;
        head = newNode;
    }

    // Sort the linked list
    head = mergeSort(head);

    // Print the report
    printReport(head);

    // Free allocated memory
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}