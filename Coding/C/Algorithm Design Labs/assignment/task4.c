/* This program is designed to provide a list that summarises the number of issues reported
 for a product across all production lines, from 1-10. I also included the feature to look
 for a specific item by ID and show it separately from the rest for more customization when
 seatching through "The extensive list"

 Author: Antonio Cruel

*/

#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 1000 // Assuming a maximum of 1000 different product IDs, if this was a real company haha

// Function to summarize the number of issues reported for each product
void summarizeIssues(int productIds[], int numProducts, int requestedProductId, char* productNames[]) {
    int issuesCount[MAX_PRODUCTS] = {0}; // Initialize array to store counts of reported issues
    int requestedProductCount = 0;
    int totalIssuesReported = 0;

    // Iterate through the provided product IDs and count the number of issues reported for each product
    for (int i = 0; i < numProducts; i++) {
        issuesCount[productIds[i]]++;
        totalIssuesReported++;
    }

    // Print the summary for the requested product ID
    printf("Total Issues Reported for %s: %d\n", productNames[requestedProductId - 1], issuesCount[requestedProductId]);
    requestedProductCount = issuesCount[requestedProductId];

    // Print the summary for the rest of the product IDs
    printf("\nSummary for Other Products:\n");
    printf("Product Name      | Total Issues Reported\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < MAX_PRODUCTS; i++) {
        if (issuesCount[i] > 0 && i != requestedProductId) {
            printf("%-18s | %d\n", productNames[i - 1], issuesCount[i]);
        }
    }

    printf("\nTotal Issues Reported for Other Products: ");
    int otherProductTotalIssues = totalIssuesReported - requestedProductCount;
    printf("%d\n", otherProductTotalIssues);

    printf("\nTotal Issues Reported for All Products: %d\n", totalIssuesReported);
}

int main() {
    // Sample data of product IDs and names
    int productIds[] = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 9, 10}; // Added two additional entries
    char* productNames[] = {"Wing Assembly", "Fuselage Alignment", "Engine Malfunction", "Hydraulic System Leak", 
                            "Avionics Calibration Issue", "Landing Gear Malfunction", "Structural Integrity Concern", 
                            "Cockpit Instrumentation Error", "Communication System Failure", "Electrical Power Issue"}; // Added two additional names
    int numProducts = sizeof(productIds) / sizeof(productIds[0]);

    // Variable to store the user's requested product ID
    int requestedProductId;

    // Ask the user to input the product ID
    printf("Enter the product ID to view issues reported: ");
    scanf("%d", &requestedProductId);

    // Check if the requested product ID is within the valid range
    if (requestedProductId >= 1 && requestedProductId <= 10) { // Updated upper limit to 10
        // Summarize the number of issues reported for the requested product and the rest separately
        summarizeIssues(productIds, numProducts, requestedProductId, productNames);
    } else {
        printf("Invalid product ID. Please enter a valid product ID between 1 and 10.\n"); // Updated message for valid product IDs
    }

    return 0;
}
