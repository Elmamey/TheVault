import java.util.Scanner;

public class Calculator

    {
        // main method will ask the user for a two numbers and calculate the result in 4 float variables 
        public static void main(String[] args)
        { //create Scanner to obtain input from command window
            //create float to calculate the operations
            float first_number;
            float second_number;
            float add;
            float subtract;
            float multiply;
            float divide;
     
          Scanner input = new Scanner (System.in);
   
    System.out.println ( "Enter First Number: " );    //the prompt
    
     first_number = input.nextFloat();     
     
    System.out.println ( "Enter Second Number: " );   //the prompt
    
       second_number =input.nextFloat();                   
   
       add = first_number+second_number;
       
       System.out.println ("The sum is = " + first_number +"+" + second_number +add ); //Display the sum in the screen
       
        subtract = first_number-second_number;
              
         System.out.println ("The subtraction = " + first_number + "-" + second_number +subtract); //Display the subtraction in the screen
                     
        multiply = first_number * second_number;
                     
        System.out.println ("The multiplication is = " + first_number + "*" + second_number+multiply); //Display the multiplication in the screen
                            
        divide = first_number / second_number;
                            
        System.out.println ("The division is = " + first_number + "/" + second_number+divide); //Display the division in the screen
                                   
    
}  //end of the main method
} //End of class Calc

