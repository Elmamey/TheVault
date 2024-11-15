import java.util.Scanner;
import java.util.Random;
public class Roulette {
    public static void main (String [] args)
    {
        Scanner sc = new Scanner(System.in); //create scanner for user input
        int cash=100; //create int for the initial cash
        int bet=0; //same for the bet of the user
        int choice=0; //and for the choice in the roulette
        char decision = ' '; //create char to store user answer at the end
        String name=""; //String to store user's name
        Random number = new Random(); //create a Random variable 
        System.out.println("Hello. Let’s play a game. first, can I have your name?");
        name = sc.next();
        
        do{
                int rand = number.nextInt(9); //we set the random numbers inside the loop so it will change every new attempt
                rand++;
                System.out.println(rand);
            do {
                try {
                Thread.sleep(1400); 
                //I will be giving thread.sleep to multiple sections of the code for it to feel less robotic.
                System.out.println(name + ", you have €" + cash + " in the bank. Win 4 times your bet! How much do you want to bet?");
                } catch (InterruptedException ex) {}
                bet = sc.nextInt(); //input inside the loop when asking about the bet, otherwhise the loop will never continue.
                if (bet > cash || bet <1)  //if condition to make sure the user doesn't enter more or less money than allowed.
                {
                    try {
                    Thread.sleep(500);
                    System.out.print("Mmm"); //a little extra thinking text to look "fancy" while analysing the input of user.
                } catch (InterruptedException ex) {}
                try {
                    Thread.sleep(500);
                    System.out.print(".");
                    
                    } catch (InterruptedException ex) {}
                try {
                     Thread.sleep(500);
                    System.out.print(".");
                    
                    } catch (InterruptedException ex) {}
                try {
                     Thread.sleep(500);
                    System.out.println(".");
                    } catch (InterruptedException ex) {}
                try {
                        Thread.sleep(700);
                        System.out.println("Whoops, remember that the minimun to play is 1€ and that you have €" + cash + " in the bank");
                         //remember the rules to the user.
                    } catch (InterruptedException ex) {}
                }
            } while (bet > cash || bet <1); //set while condition for the loop
            cash = cash - bet; //tell java what is the total of money the user have after betting.
            do { //start another loop to make sure the user enters the correct choice.
            try {
                Thread.sleep(800);                   
                System.out.println(name + ", betting €" + bet + " means you now have a bank balance of €" + cash + " Now, place your bet. Pick 1 to 10:");
                 } catch (InterruptedException ex) {}
                choice = sc.nextInt();
            if (choice <1 || choice > 10) {
                
                System.out.println("Sorry " + name + ", I can only take a number from 1 to 10, please try again");
                //same as before, follow the rules.
            }
             else {
            try {    
                Thread.sleep(1000);
                System.out.print(">>>> BALL LANDS AT SPACE"); 
                //funny transition to make the impression that the game is actually doing something.
                    } catch (InterruptedException ex) {}
            try {
                        Thread.sleep(700);
                    System.out.print(".");
                    } catch (InterruptedException ex) {}
            try {
                        Thread.sleep(700);
                    System.out.print(".");
                    } catch (InterruptedException ex) {}
            try {
                        Thread.sleep(700);
                    System.out.print(".");
                    } catch (InterruptedException ex) {}   
            try {
                        Thread.sleep(700);
                    System.out.println(rand + "!");
                    } catch (InterruptedException ex) {}
                
             }
            }while (choice <1 || choice >10); //condition for inside loop
            
             if (choice == rand) { //give results
             System.out.println("Congrats " + name + ", you won!");
             cash = cash + bet * 4;
             try {
                    Thread.sleep(700);
                    System.out.println("Do you want to play again? Y/N");
                    decision = sc.next().charAt(0);
                    } catch (InterruptedException ex) {}
                }
                
            if (cash <1) {
                System.out.println("Sorry, you didn't win this time");
                try {
                    Thread.sleep(1100);
                    System.out.println("Oops, you ran out of money!");
                    } catch (InterruptedException ex) {}
                break;
            }
            else  if (choice != rand){
                    System.out.println("Sorry, you didn't win this time, do you want to keep playing? Y/N");
                    decision = sc.next().charAt(0);
            }
} while (decision == 'Y'); //condition for the entire loop.
if (cash > 100) {
    
    System.out.println("Sheesh, you have more money than when you started! Have fun and come back again! (:"); // #winning
    
    
}
 else if (cash <=0) {
   try {
                    Thread.sleep(2500);
                    System.out.println("Yikes, it looks like you're broke lol,take care on your way home buddy."); 
                    // #Bullying
                    } catch (InterruptedException ex) {} 
}
else  if (cash < 100) {
    try {
                    Thread.sleep(2500);
                    System.out.println("Wow, you are leaving with less money, better luck next time and please come back!");
                    // #Sad
                    } catch (InterruptedException ex) {}           
}
}  
}

 

            
                    
                    
            
