/*This program is to determine whether the input from the user is an uppercase or lowercase vowel

Author: Antonio Cruel

    */

   #include <stdio.h>
   #include <stdbool.h> //include boolean library for the while loop.

   
   int main ()

   {

    char vowel = ' '; //created the main input that the user is going to enter
    bool repeat = true;

     
    printf("Hello! Please enter a vowel, I will tell you if it's uppercase or lowecase!\n\n"); //introduce the program and its purpose


     while (repeat == true) { //start the while loop with the boolean condition to keep the program running, this is for troubleshooting and preference
       
       scanf("\n%c", &vowel); //scan the input, and add a new line to the %c because for some reason C re prints printf statements during a while loop

    switch (vowel) //start the Switch case for the character variable

    {
        case 'A': //Create a single case block with multiple cases for uppercase vowels
        case 'E':
        case 'I':
        case 'O':
        case 'U':

        {

        printf("The vowel you entered is  "" %c "" in uppercase!\n\n", vowel);
        repeat = false; //make sure the boolean is set to false to stop the loop before breaking out of the switch
        break; //break from the switch statement to skip the remaining conditions

        }

          case 'a': //same with lowecase
          case 'e':
          case 'i':
          case 'o':
          case 'u':
            
        {

        printf("The vowel you entered is "" %c "" in lowercase!\n\n", vowel);
        repeat = false;
        break;

        }

      default:
        {

          printf("The character you entered is not a vowel! Try again\n\n"); //troubleshooting
          break;
          
        }

    }
  }

    return  0; //end program

   }