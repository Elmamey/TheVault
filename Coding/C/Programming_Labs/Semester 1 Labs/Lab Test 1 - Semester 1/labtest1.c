/*This program is designed to make the user guess a random number generated between 1-25, give them 5 attempts to guess it, determine if their guess 
is too high or low and then print the respective guess history


Author: Antonio Cruel
Date: 28/11/2023 */

#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes

#define MAX_ATTEMPTS 5

int main()
{
    int num = 0;
    int guessHistory[MAX_ATTEMPTS];
    int attempts = 1;
    // place any extra variables here

    int guess; //variable to store user's guess
    int i = 0; //variable to store user's guesses in the array
    int j, rando; //it seems like the random number changes every time i print it so i create another variable to store it amd keep the initial value


    
    printf("Generating a random number between 1 – 25 \n");
    
    // seed the random number generator with a range 0 – large number
    srand(time(NULL));
    
    // num is assigned a random number between 1 – 25 
    num = (rand() % 25) + 1;
    
    // Enter your code here and onward (declare any extra variables above)
    // …
    // …

    rando = num; //as explained before, I store num in rando, seems to help C excute the if/else statements conditioned to check if the guess is too high or low
    printf("\n"); //I just like to make lots of spaces between prints
    printf("%d", rando); // I print the random number for debugging purposes, it can be removed anytime the game is ready to play

    printf("\nNumber generated! Please guess a number between 1 to 25\n");

    while ( guess != rando)  //while loop to scan the input if the user fails to guess the right number
    {
        scanf("%d", &guess); //scan the user guess
        guessHistory [i] = guess; //store the current guess in the current element of the array
        
        
        printf("\nAttempt %d\n", attempts);

        if (attempts == 5 && guess != rando) //losing conditions to end the game if the number of attempts exceeds the maximum
        {
            printf("\nToo bad! you ran out of attempts, your guess history is the following:\n");

            for (j = 0; j < MAX_ATTEMPTS; j++) //for loop to print the guess history store in the array
            {
                
                printf("%d ", guessHistory[j]); 
                
            }

        }//end if

        else if (guess == rando) //if statement to set the winning conditions of the game
        {
            printf("\nCongratulations! you guessed the number right. it was %d\n", rando);
            printf("\nYour guess history is the following:\n");

            for (j = 0; j < MAX_ATTEMPTS; j++) //for loop to print the guess history store in the array
            {
                
                printf("%d ", guessHistory[j]); 
                
            }
        } //end if
        else if (guess < rando) //condition to tell the user their guess is too low
        {
            printf("\nNope, too low, try again\n"); 

        } //end if

        else if (guess > rando) //condition to tell the user their guess is too high
        {
            printf("\nNope, too high, guess again\n");

        } //end if

        
        attempts++; //increase the attempts in each iteration
        i++; //increase the i value to store int guess in the next element of the array

        

    }
    
    return 0;
    
} // end main