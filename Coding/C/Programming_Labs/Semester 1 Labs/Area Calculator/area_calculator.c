/*This program is to calculate the volume, surface area of a cube/box and the area of a circle

Author: Antonio Cruel

    */
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main ()

{
    float b_height = 0;
    float b_length = 0;
    float b_width = 0;
    float radius = 0;
    char decision = ' ';
    bool repeat = true;

    printf("Hello! Welcome to the area calculator, would you like to calculate the volume/ surface area of a box \n or to calculate the area of a circle?\n please select B or C \n ");

    scanf("%c", &decision);

    while (repeat == true) 
    
    {
    
        if (decision == 'B' || decision == 'b' )
        {
            repeat = false;
            printf("okay! Please enter the box height\n ");
            scanf("%f", &b_height);

            printf("Thanks, now enter the length\n ");
            scanf("%f", &b_length);
        
            printf("Thanks! now finally enter the width\n ");
            scanf("%f", &b_width);
          
            float volume = b_height * b_length * b_width;
            float surface = 6.0*powf(b_height, 2.0);
            printf("Perfect, the volume of your box is %f and the surface is %f\n ", volume, surface);

         } 
        else if (decision == 'C' || decision == 'c')

        {
            repeat = false;
             printf("okay! Please enter the circule radius\n ");
            scanf("%f", &radius);
            float area = 3.14 * powf(radius, 2.0);;
            printf("Perfect! the area of your circle is %f\n ", area);

         }

        else 
         {
           printf("Please enter a valid character\n ");
           printf("B or C?\n");
           
           scanf("%c", &decision);
            
        }
    }

} 
    