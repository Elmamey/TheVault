/*This is the mandatory exercise for the Lab Session 3, 
calculating floating points sum and average.

Author: Antonio Cruel */


#include <stdio.h>

int main ()
{
    
    float first_num;
    float second_num;
    float third_num;
    

    printf("Hello! Please enter 3 numbers, I will calculate their sum\n and average");
    printf("\n Enter the first number \n");
    scanf("%f", &first_num);
    printf("\n Enter the second number \n");
    scanf("%f", &second_num);
    printf("\n Enter the third number \n");
    scanf("%f", &third_num);

    float sum = first_num + second_num + third_num;
    float average = sum / 3;

    printf("Thank you! The sum of your numbers is %.3f and their average is %.3f", sum, average);





}
