/*This program is to showcase the use of a 2D Array to show a list of interger inputted by the user, printing the highest and lowest value of the list
and then displaying the average of all the values

Author: Antonio Cruel */

#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{


    int input [ROW] [COL];
    float average;
    float storage;
    int highest = input[0][0];
    int lowest = input[0][0];
    int i, j;
    float counter = 6;

    printf("Hello! Welcome to the 2D Array exercise, please enter the values of the rows and columns.\n\nRemember, the values you enter start from the first row, continue until the last column in the same row before proceeding to the next row.\n\n");

    for (i = 0; i < ROW; i++) 
    {

        for (j = 0; j < COL; j++)
        {
            scanf("\n %d", &input[i][j]);
            storage = storage + input[i][j];
            

              if (highest < input [i][j])
            {
                highest = input [i][j];
            } //end if

            else if (lowest > input [i][j])
            {
                lowest = input [i][j];
            } //end if

        }

        
        
    }


    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {


            printf("\nRow %d, Col %d contains %d\n", i, j, input[i][j]);
        

        }
    }
    printf("\n");
    
  
    printf("The highest value in the array is %d and the lowest is %d\n", highest, lowest);
    average = storage/counter;
    printf("The average of the array is %f", average);
  
  return 0;
}