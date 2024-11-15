/*This is a program that takes a string and puts spaces between the characters

Author: Antonio Cruel */


#include <stdio.h>
#include <string.h>

#define SIZE 21 //size for the name entered

int main ()
{


char name[SIZE]; //create the array of characters

 printf("Enter your name\n"); //ask for the name

fgets(name, SIZE-1, stdin);

int length = 0;
length = strlen(name);

 
for(int i = 0; i <= length - 1; i++)
{
    putchar(name[i]);
    putchar (' ');
}
   
   return 0;
}
