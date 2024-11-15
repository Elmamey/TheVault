/*This program is designed to compare two words entered by the user and 
check if they are the same word or not, displaying a respective message

 Author: Antonio Cruel*/

#include <stdio.h>
#include <string.h>

#define SIZE 21 //size for words

//Function to concatenate (link) the first word to a given string.
//in this case: "First word entered is"
void LinkWords(char result[], const char word[])
{
  strcat(result, word);  //str concatenate library
}

//Function 2 to Display the linked string and its length
void displayLinkedWords(const char result [])
{
    printf("\nConcatenated string: %s\n", result);
    printf("The total characters in the string are %d\n", strlen(result));

}

int main()
{
    char finalString[25] = "First word entered is: ";
    char word1[SIZE];
    char word2[SIZE];

    printf("Enter your first word\n");
        fgets(word1, SIZE - 1, stdin);

    printf("Enter the second word\n");
        fgets(word2, SIZE - 1, stdin);


    int tempWord = strcmp(word1, word2);

    if (tempWord == 0)
    {
        // task a: concatenate word1 to the end of the string provided.
        LinkWords(finalString, word1);

        //Task b: Display the linked strings and the length
        displayLinkedWords(finalString);
    }
    else 
    {
        printf("\nThe words entered are not the same! The first one was %s and the second %s", word1, word2);
    }

    return 0;
}