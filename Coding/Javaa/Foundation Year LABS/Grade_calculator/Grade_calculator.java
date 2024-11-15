import java.util.Scanner;

public class Grade_calculator {
    
    public static void main (String []args)
    
{
        
    Scanner input = new Scanner (System.in);
    
   
    boolean access = false;
       
       System.out.println("Please enter your grade: A, B, C or F");
        do {
       char grade= input.next().charAt(0);
       switch (grade) {
           
           case 'A': System.out.println("You got 80 to 100%!"); access = true; break;
           case 'B': System.out.println("You got 60 to 79%!"); access = true;break;
           case 'C': System.out.println("You got 40 to 59%!"); access = true;break;
           case 'F': System.out.println("You failed :'("); access = true;break;
           case 'a': System.out.println("You got 80 to 100%!"); access = true;break;
           case 'b': System.out.println("You got 60 to 79%!"); access = true;break;
           case 'c': System.out.println("You got 40 to 59!"); access = true;break;
           case 'f': System.out.println("You failed :'("); access = true; break;
           
                
           
               default: access  = false; 
               System.out.println("Whoops, that didn't go well, please try to enter your grade: A, B, C or F "); break;
               
               
               
           
     
        }
        
        
    } while (access == false);
    
    
    }
    } 
    
    
   

