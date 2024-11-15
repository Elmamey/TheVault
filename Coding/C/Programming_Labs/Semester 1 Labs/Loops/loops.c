/*This program is to halve even numbers and multiply by 3 and add 1 if they are odd, until it reaches 1.

Author: Antonio Cruel

    */

   #include <stdio.h>
   #include <stdbool.h> //include boolean library for the while loop.

   int main ()
   {

    int num = 0;
    int steps = 0;
    bool end = false; //boolean for a ending condition


    printf("Hello! Please enter any number bigget than 1, no matter the number, I will divide it until it reaches 1\n");


    while (num <2) // A while loop for the input in case the wrong number is entered
    {
        scanf("%d", &num);

        if (num <1)
    {
        printf("Sorry the number has to be greater than 1, try again\n");
    }
    else if (num == 1) {
    printf("The value of your number is %d\n", num);
    end = true;
    break;
    }

    }

   
   while (end == false) //main while loop to make the calculations
   {

    if (num == 1)
    {
        end = true; //ending condition checked in every iteration
        break;
    }

    else if (num%2 == 0 && num != 1) //if the modulus operation of the number entered leaves no remainder then it's an even number
    {
        
        if (num == 2)
        {
            num = num/2;
            steps++; //count the steps for the final printf
            break;
        }

        else 
        {
            num = num/2;
            printf("The next value is %d\n", num);
            steps++; 
        }
         
        
    }
    else if (num%2 != 0 && num!= 1) //if the modulus operation of the number entered leaves a remainder then it's an odd number
    {
        num = num * 3 + 1;
        printf("The next value is %d\n", num); 
        steps++;
    }

   }

    printf("The final value of your number is %d and the number of steps is %d", num, steps);
    
}

   

