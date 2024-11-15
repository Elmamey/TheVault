/*This program is designed to compare a string the user inputs to the string "hello world"
and check if the user entered the same sentence.

 Author: Antonio Cruel*/

#include <stdio.h>
#include <string.h>

#define SIZE 100


// Function to return the comparison between the two words.
int comparison(char *input)
{
    int result = strcmp(input, "hello world"); // compare the two strings and return the result AKA NULL-terminating it
    return result;
}

// Function to check the frequency of the word "is". This is kinda tough...
int wordChecker(char *input, const char *word)

{
    int count = 0;
    char *ptr = strstr(input, word);

    while (ptr != NULL) // while the loop encounters a non-NULL pointer, do this.
    {
        count++;
        ptr = strstr(ptr + 1, word); // continue the pointer string to find more occurrences.
    }

    return count;
}

// MAIN FUNCTION START
int main(void)
{
    char userInput[SIZE]; // create array with size.

    printf("Please enter the word you wish to compare: ");
    fgets(userInput, sizeof(userInput), stdin); // get user input

     userInput[strcspn(userInput, "\n")] = '\0'; //remove \n added by the user and replace it with a NULL character.

    int results = comparison(userInput); // call function to compare results and return strcmp value.

    if (results == 0) // if strcmp returns 0, it means that they are the same.
    {
        printf("The entered string is \"hello world\".\n");
    }
    else
    {
        printf("The entered string is not \"hello world\".\n");
    } // end if

    int frequency = wordChecker(userInput, "is"); // call function to check "is" frequency.

    printf("The word 'is' appears %d times in the entered string.\n", frequency);

    return 0;
}
