import java.util.Scanner;
import java.util.Random;
public class Hi_lo {
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);
        Random number = new Random();
        int rand = number.nextInt(9);
        rand++;
        int guess;
        int attempts=0;
        boolean winner = false;
        boolean rightguess = false;
        System.out.println("Let's play a game, guess a number between 1 and 10");
        do{
            do{
                guess = sc.nextInt();
                attempts++;
                if (guess <1 || guess >10) {
                System.out.println("Nope, read a again, genious. It's from 1-10");
                
              } else if (attempts >5) {
                  System.out.println("sorry, you lost forever, too many attempts dude...");
                  break;
                }
                else {
                    rightguess = true;
                }
                }while (rightguess == false);
            if (attempts >5){
                break;
            
            }
                if (guess == rand) {
                System.out.println("Congrats!! You won the game, now get out");
                winner = true;
            }
            else if (guess == rand - 1) {
                System.out.println("Nope, too low, try again");
                
            }
            else if (guess == rand +1) {
                System.out.println("Nope, too high, try again");
            }
             else   if (guess != rand){
                System.out.println("Nope, not even close, try again");
            }
        }while (winner == false);
}
}