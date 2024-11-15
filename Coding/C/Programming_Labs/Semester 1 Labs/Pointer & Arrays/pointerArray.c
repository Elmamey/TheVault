/*This program is designed to use pointer arrays to store float values and copy the contents of the first array into the other

Author: Antonio Cruel */


#include <stdio.h>

#define SIZE 3

int main ()
{
    float array1[SIZE];
    float array2[SIZE];
    int i, j;


    printf("\nEnter %d values into the first array\n", SIZE); //prompt to get the user input

    for(i = 0; i < SIZE; i++)
 	{
   		scanf("%f", & *(array1 + i));
        
 	} // end for

    for(i = 0; i < SIZE; i++)
 	{
        *(array2 + i) = *(array1 + i); //store the values into the second one
        
 	} // end for



    printf("\nI stored the values of the first array into the second, check it\n\n");

    for(i = 0; i < SIZE; i++)
 	{
   		printf("\nElement %d contains %f", i, *(array2 + i));

 	} // end for



}