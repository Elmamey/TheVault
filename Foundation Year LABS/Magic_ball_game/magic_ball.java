import java.util.Scanner;
import java.util.Random;

public class magic_ball {
        public static void main (String [] args) {
           Scanner sc = new Scanner(System.in);
           Random number = new Random();
           boolean decision = false;
           String question;
           char retry;
           String name;
           int rand;
           System.out.println("Hello! Welcome to the Magic 8 ball game, can I have you name?");
            name = sc.nextLine();
            do {
                rand = number.nextInt(14); 
                rand++;   
                System.out.println("Thank you for that " + name +  " now, ask the Magic 8 Ball your Questions....");
                question = "";
                question = sc.nextLine();
                
                  for (int i=1; i<=3; i++) {
                 try {   
                     Thread.sleep(1000);
                     System.out.println("* * * SHAKE * * *");
                    } catch (InterruptedException ex) {}
                    }     
        
                
            switch (rand) {
                case 1: System.out.println("To answer your question, '" + question + "' The Magic 8 Ball says... As I see it, yes"); break;
                case 2: System.out.println("To answer your question, '" + question + "' Most likely");break;
                case 3: System.out.println("To answer your question, '" + question + "' Outlook good");break;
                case 4: System.out.println("To answer your question, '" + question + "' Yes");break;
                case 5: System.out.println("To answer your question, '" + question + "' Signs point to yes");break;
                case 6: System.out.println("To answer your question, '" + question + "' Reply hazy try again");break;
                case 7: System.out.println("To answer your question, '" + question + "' Ask again later");break;
                case 8: System.out.println("To answer your question, '" + question + "' Better not tell you now");break;
                case 9: System.out.println("To answer your question, '" + question + "' Cannot predict now");break;
                case 10: System.out.println("To answer your question, '" + question + "' Concentrate and ask again");break;
                case 11: System.out.println("To answer your question, '" + question + "' Don't count on it");break;
                case 12: System.out.println("To answer your question, '" + question + "' My sources say no");break;
                case 13: System.out.println("To answer your question, '" + question + "' My reply is no");break;
                case 14: System.out.println("To answer your question, '" + question + "' Outlook not so good");break;
                case 15: System.out.println("To answer your question, '" + question + "' Very doubtful");break;
                default:  break;
            }
       
            System.out.println("Want to ask another question? Press y or Y to ask again, n or N to EXIT.");
                retry = sc.next().charAt(0);
                if (retry != 'y' && retry != 'Y') {
                    System.out.println("Thank you for playing the game! See you next time.");
                    decision = true;
                }
                else {
                    decision = false;
                }
                
      } while (decision == false);
}
}