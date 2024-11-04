import java.util.Scanner;

public class Term_calculator{
    public static void main (String [] args)
    {
        Scanner input = new Scanner (System.in);
       String name;
       int month;
       int fees=0;
       String term="";
       
       System.out.println("Hello! Please enter your name :)");
       name = input.nextLine();
       System.out.println("Thanks! now please enter the number of the month you started college");
       month = input.nextInt();
       
       switch (month) {
           case  1 :
           case  2 :
           case  3 : term = "First Term";
                     fees = fees + 1000;
                     break;
           
           case  4 :
           case  5 :
           case  6 : term = "Second Term";
                     fees = fees + 750;
                     break;
           
           case  7 :
           case  8 :
           case  9 : term = "Third Term";
                     fees = fees + 500;
                     break;
           case 10 :          
           case 11:          
           case 12: term = "Final Term";
                     fees = fees + 250;
                     break;
                   
           default: break;
        }
        
               System.out.println("Thank you " + name + " fees for starting in the " + term + " are " + fees + "€");
       
       
       
    }
}