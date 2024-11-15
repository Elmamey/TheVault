import java.util.Scanner;
import java.text.DecimalFormat;

public class postage_calculator

{
    public static void main (String[] args)
    {
        //create scanner for input
        Scanner input= new Scanner(System.in);
        DecimalFormat decmal = new DecimalFormat("0.00");

        String name; //always ask the user their name   
        int region; //We need a region for calculation
        int number_of_items; //number of items wanted
        int total_cost; //final cost
        
        System.out.println("Hello! Please enter your first name"); 
        
        name= input.nextLine();
        
        System.out.println("Thank you for that " + name + " now please select a regin you wish to calculate your post from in the list bellow");
        System.out.println("1) Ireland €1 per post "); //Ireland is €1
        System.out.println("2) UK €3 per post");      //UK is €3
        System.out.println("3) The EU €6 per post");  //Eu is €6 
        System.out.println("4) Rest of the World €15 per post"); //Rest of the world is €15
        System.out.println("Select your region (1-4)");
       
        region = input.nextInt();
        if (region > 4)
        {
        System.out.println("Whoops, that did not work, please select a number between 1-4 to select your region");
        }
        else 
        {
        System.out.println("Perfect, " + name + " now please tell me the number of items you wish to send");
        }
        number_of_items= input.nextInt();
        total_cost= number_of_items * region;
        
        if(region == 1)
        {
            total_cost= number_of_items * 1;
        System.out.println("Thank you for that, the total for your post would be €" + total_cost);
        }

        if(region == 2)
        {
            total_cost= number_of_items * 3;
        System.out.println("Thank you for that, the total for your post would be €" + total_cost);
            
        }
        
        if(region == 3)
        {
            total_cost= number_of_items * 6;
        System.out.println("Thank you for that, the total for your post would be €" + total_cost);
            
        }
        if(region == 4)
        {
            total_cost= number_of_items * 15;
        System.out.println("Thank you for that, the total for your post would be €" + total_cost);
        }
        
     
    }
    } 
