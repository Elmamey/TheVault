import java.util.Scanner;
import java.util.Random;

public class Guessing_color_game 
{
    public static void main (String[] args)
    
    {        
        Random number = new Random();
        try (Scanner input = new Scanner(System.in)) 
        {
            String color="";
            int user_guess;
            int n_attempts=0; 
            int rand = number.nextInt(3);
            rand++;
            boolean winner = false;
   
            if ( rand == 1)
            {
                color = "Blue";   
            }
            if ( rand == 2) 
            {
                color = "Pink";
            }
            if ( rand == 3) 
            {
                color = "Yellow";
            }
            if ( rand == 4) 
            {
                color = "Red";
            } 
            System.out.println(">>> Hello. Let’s play a game.");
            System.out.println(">>> Guess my favourite colour. Select a number as follows...");
            System.out.println("Select 1 for Blue");
            System.out.println("Select 2 for Pink");
            System.out.println("Select 3 for Yellow");
            System.out.println("Select 4 for Red");

            do 
            {
               
                user_guess = input.nextInt();
                n_attempts++;
            
                if(user_guess > 4 || user_guess <1)
                {
                    System.out.println("Sorry, only between 1-4");
                }    
                    else if (user_guess != rand)
                {
                    System.out.println("Nope, that is not my favourite color, guess again :)");
                }
                else if (user_guess == rand)
                {   
                    winner = true;
                    System.out.println(">>> Congrats, You got it!");
                    System.out.println("Well done. You guessed my favourite colour, it was " + color + " You took "  + n_attempts + " attempts to guess it right.");
                
                }
            }
            while (winner == false);
        }
    }
}
