/*This program is to showcase the use of a 3 2D Arrayw to multiply the values of the first 2 and store them
in the third

Author: Antonio Cruel */

#include <stdio.h>
#define ROW 3
#define COL 4

int main()
{


    int Array1 [ROW] [COL];
    int Array2 [ROW] [COL];
    int ResultArray [ROW] [COL];
    int i, j;

    printf("Hello! Welcome to the 2D Array multiplier, please enter the values of the rows and columns.\n\nRemember, the values you enter start from the first row, continue until the last column in the same row before proceeding to the next row.\n\n");
    printf("Enter the value for the first Array\n");
    
    
    for (i = 0; i < ROW; i++)
    {

        for (j = 0; j < COL; j++)
        {
            scanf("\n %d", &Array1[i][j]); //scan the first array of numbers
        }
        
    }

    //print the value of the first array to keep track of the values

    printf("The value of the first array is: \n");

     for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("\nRow %d, Col %d contains %d\n", i, j, Array1[i][j]);
        }
    }

    //scan the second values of the array

    printf("\nEnter the value for the second Array\n");

    for (i = 0; i < ROW; i++)
    {

        for (j = 0; j < COL; j++)
        {
            scanf("\n %d", &Array2[i][j]); 
            ResultArray[i][j] = Array1[i][j] * Array2[i][j]; 
            /*multiply the values in the loop so each element is multiplied, then store it in each corresponding element in ResultArray*/
        }
    	
        
   
    }

    //print them too

    printf("The value of the second array is: \n");

     for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("\nRow %d, Col %d contains %d\n", i, j, Array2[i][j]);
        }
    }

    printf("\nThe value of the third and last array is: \n");

     for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("\nRow %d, Col %d contains %d\n", i, j, ResultArray[i][j]);
        }
    }





}