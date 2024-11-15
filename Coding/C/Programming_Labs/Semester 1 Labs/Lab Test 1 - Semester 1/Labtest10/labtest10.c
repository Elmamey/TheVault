/* 
Dynamic Memory Allocation LAB

This program uses malloc() to dynamically allocate a block of memory, enter 5 float numbers into the memory block and calaculate their average
The memory block is released at the end when the memory block is no longer required. 

Author: Antonio Cruel
*/ 
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
    float *ptr; 
    float numbers = 0; 
 	float no_bytes = 0; 
    float average = 0;
 	int i; 

 
 	// Ask the user to enter the amount of numbers they want to enter
 	printf("\nHow many numbers will you enter?\n"); 

 	scanf("%f", &numbers); 

    
 	// Calculate the number of bytes required to store the set of numbers in memory 
 	no_bytes = numbers * sizeof(float); 


 	// Allocate the block of memory required 
 	ptr = malloc(no_bytes); 


 	// Check if malloc was successful
 	if (ptr == NULL) 
 	{ 
   		printf("\nFailed to allocate memory. Program ends.\n");

 	} // end if 
 	else // memory allocated successfully 
 	{ 

        
   		printf("\nMemory allocated successfully\n"); 

        printf("\nEnter the set of %.1f numbers\n", numbers); 

   		// Enter data items into the allocated memory block 
   		for(i = 0; i < numbers; i++) 
   		{ 
     		scanf("%f", & *(ptr + i));
            average = average + *(ptr + i);

   		} // end for 

   		printf("\nThe average of the numbers you entered is:\n"); 

   		// Display the average
            average = average/numbers;

            printf("%f\n", average); 
        
   		// Free the allocated memory block once finished using it 
   		free(ptr); 

 	} // end else  

    return 0; 

} // end main()