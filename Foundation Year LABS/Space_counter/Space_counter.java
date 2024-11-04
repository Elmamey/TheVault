import java.util.Scanner;

public class Space_counter

{   public static void main (String[] args)
    
    {
         Scanner input= new Scanner(System.in); //new scanner because I need to scan the user inputs.
         int length = 0;  
         int blanks = 1;         //Variables as always to store values.
         String text;
         
         System.out.println("Enter some text, please"); //program output.
         text = input.nextLine(); //user input
         
         length = text.length(); //needed to count the characters.
         
         for (int scanstring = 0; scanstring<=length - 1; scanstring++) 
         //I want the for loop to scan through the text length and add++ to scan the next character
        {
            if (text.charAt(scanstring)==' ') // <- if the text character of "scanstring" equals to a blank space ' ' do this (:
            //I want the loop to scan the text and if it finds blanks, it adds 1 more to the blanks value, which is the word counter.
            
            {
                blanks++;
            }
            if (text.charAt(scanstring)==' ') 
            //java counts blank spaces as characters so I remove 1 character from length whenever the scanner finds one.
            
            {
                length--;
            }
            }
            
            System.out.println("Your text had " + length + " characters and " + blanks + " words"); //output the results :)
        
        }
            
            
        }

        
        
    
