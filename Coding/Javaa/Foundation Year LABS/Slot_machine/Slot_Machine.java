import java.util.Random;
import java.util.Scanner;
import java.util.Arrays;

public class Slot_Machine 
{
    public static void main(String[] args) 
    {
        try (Scanner sc = new Scanner(System.in)) 
        {
            boolean Again = true;
            System.out.println("Hello my friend, Welcome back. We'll try to make you broke again!");
            System.out.println("This game is called the Slot Machine, Can I have your name please?");
            String name = sc.nextLine();
            System.out.println("");
            System.out.println("Perfect, " + name +  ", okay now let me explain the rules for you.");
            System.out.println("");
            try {
                Thread.sleep(1400);
                System.out.println("You have $5 in the bank! Each play costs $2.");
                System.out.println("Wins are 3 of any kind, if you win, you get your money back plus 5$");
                System.out.println("If you get any two of a kind you get your $2 back");
                System.out.println("");
            }catch (InterruptedException ex) {}
        
            System.out.println("Now press enter to pull the lever and start the game B)" );
            String start = sc.nextLine();
            int balance = 5;
            do
            {
                 System.out.print("Deducting $2 from your balance to play");
                for (int i=1; i<=3; i++) 
                {
                    try 
                    {
                        Thread.sleep(900); 
                        System.out.print(".");
                    }catch (InterruptedException ex) {}
                }
                    balance = balance - 2;
                try 
                {
                    Thread.sleep(900);
                    System.out.println(" mkay, you have now $" + balance + " in the bank");
                }catch (InterruptedException ex) {}
                System.out.println("");
                int [] Slot = {0, 1, 2};

                System.out.println("----------------------------"); 
                for (int i=0; i<=2; i++) 
                {
                    Random number = new Random();
                    int rand = number.nextInt(2);
                     rand++;
                    try 
                    {
                        Thread.sleep(900);
                        Slot[i] = (number.nextInt(3) + 1);

                        if  (Slot[i] == 1) 
                        {
                            System.out.print("-Cherry- ");
                        }
                        if  (Slot[i] == 2)
                        {
                            System.out.print("-Banana- ");
                        }
                        if  (Slot[i] == 3) 
                        {
                            System.out.print("-Apple- ");
                        }
                    }catch (InterruptedException ex) {}
                }
                    System.out.println(" ");
                    System.out.println("----------------------------"); 

                if (Slot[0] == Slot[1] && Slot[1] == Slot[2]) 
                {
                    System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                    System.out.println("Three of a kind!!! You won your money back and $10!");
                    System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                    balance = balance + 12;
                }
                else if (Slot[0] == Slot[1] || Slot[1] == Slot[2] || Slot[2] == Slot[0]) 
                {
                    System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                    System.out.println("Two of a kind!!! You won your money back and $5!");
                    System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                    balance = balance + 7;
                }
                else 
                {
                    System.out.println("Loser!");
                }
            
                System.out.println("Enter 1 to continue, 2 to finish");
                int decision = sc.nextInt();
                if (decision == 2) 
                {
                    Again = false;
                    break;
                }
            } while (Again == true);

        }
    }

}



