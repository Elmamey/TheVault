/*This program is design to let the user chose a number of terms (to a max of 20) in the fibonacci
sequence*/

#include <stdio.h>
#include <stdbool.h>
#define SIZE 20


int main() {
    
    int N = 0;
    int i;
    int sequence [SIZE] = {0, 1};
    bool again = true;
    char decision;


    printf("\nHello! This program will let you chose a number and show you the fibonacci sequence up to the number specified (max 20)\n");
    
    do
    {
        printf("\nPlease enter the number of terms (max to 20)\n");
        scanf("%d", &N);

        printf("\nThank you for that! the number you entered is %d, and the fibonacci sequence is\n", N);


        for (i = 2; i < N; i++)
        {
            sequence[i] = sequence[i - 1] + sequence[i - 2];
        }


        for (i = 0; i < N; i++)
        {
            printf("%d, ", sequence [i] );
        }

        printf("\n\nDo you want to try again?\n\n Please enter Y or N\n");
        scanf("%s", &decision);

        if (decision == 'N' || decision == 'n')
        {
            printf("\nThank you for playing, goodbye!\n");
            again = false;
        }
    }while ( decision == 'Y' || decision == 'y');
        

    return 0;
}