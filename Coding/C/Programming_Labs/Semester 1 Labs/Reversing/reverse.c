/*This program is designed to input an array of 5 intergers and copy these values in reverse order 
to another interger array.

Author: Antonio Cruel*/

#include <stdio.h>

#define SIZE 5

int main ()
{

    int firstS [SIZE]; //define the first and second set of arrays
    int secondS [SIZE];
    int i; //variable to count in the first and second for loop
    int j;

    printf("Please enter 5 numbers to store in the main array of intergers\n"); //get input

    for(i = 0; i < SIZE; i++) //iterate through the first array to input the numbers
 	{

        scanf("%d", &firstS[i]);
        printf("\n%d ", firstS[i]); //print the first set

 	}

    printf("\n the new array of numers is ");

    for (j = SIZE - 1; j >= 0; j--) //go in reverse order, from 5 to 0
    {
        
        secondS[j] = firstS[j];
        printf("'%d' ", secondS[j]);


    }



    return 0;
}

