import java.util.Scanner;

public class Calc_2
{
    public static void main (String[] args)
    {
       float first_number;
       float second_number;
       float answer;
       
       Scanner input = new Scanner(System.in);
       
       System.out.println("Enter your first number");
       
       first_number= input.nextFloat();
       
       System.out.println("Enter your second number");
       
       second_number= input.nextFloat();
       
       answer= first_number + second_number;
       
       System.out.println("The sum is = " + first_number + "+" + second_number + answer);
       
              answer= first_number - second_number;
              System.out.println( "The subtraction is = "+first_number + "-" + second_number + answer);
              
              
              answer= first_number * second_number;
              System.out.println( "The multiplication is = "+first_number + "*" + second_number + answer);
              
              
              answer= first_number / second_number;
              System.out.println("The division is = "  +first_number + "/" + second_number + answer);
              
              
              
       
       
       
       
       
       
    }
    
    
}


