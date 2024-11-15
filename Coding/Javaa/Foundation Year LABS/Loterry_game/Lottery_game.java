import java.util.Scanner;
import java.util.Random;

public class Lottery_game {
public static void main (String [] args)
{
    Scanner sc = new Scanner (System.in);
    Random number = new Random();
    int rand = number.nextInt(99);
    rand++;
    int answer;
   
    System.out.println("Welcome to the lottery game! Guess a number between 0 and 99 to win");
    answer = sc.nextInt();
    
    if (answer == rand)
    
    {
        System.out.println(" You win! you're not a loser anymore :D");
    }
    else {
         System.out.println("The lottery number is " + rand);
         System.out.println("Sorry, you didn't win this time");
    }
       
        
        
           
            
        
        
    }
    
    
    
}



