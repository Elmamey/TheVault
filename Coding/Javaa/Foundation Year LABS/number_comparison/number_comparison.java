import java.util.Scanner;

public class number_comparison

{
    public static void main (String[] args)
    
    {
        Scanner input = new Scanner(System.in); //create a new scanner for input
        String name;   //name of the user
        int first_number;    // first number for comparison
        int second_number; //second number
        
        System.out.println("Hello! Enter your first name, please"); //ask user their name to intiate the process 
        name= input.nextLine();
        
        System.out.println("Thank you for that " + name + "!" + " now please enter your first number"); //ask the user their first number for comparison
        first_number = input.nextInt();
                
        System.out.println("Perfect! Now please enter your second number"); //ask the user their second number
        second_number = input.nextInt();
        
        //start conditions:
        if (first_number > second_number)
        {
        System.out.println(name + ", the first number is bigger than the second");
        }
        else if (second_number > first_number)
        {
        System.out.println(name + ", the second number is bigger than the first");
        }
        else if (first_number == second_number)
        {
        System.out.println(name + ", the numbers are equal");       
        }
        
        
        
        
}
}