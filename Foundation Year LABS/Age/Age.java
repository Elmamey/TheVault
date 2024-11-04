import java.util.Scanner;
public class Age
{
            // main method will ask the name and age of the user to calculate their age
            
                    public static void main(String[] args)
                    
                    {

                                    String first_name;
                                    int year_of_birth;
                                    int age;
                                    int calculation= 2012;
          //create Scanner to obtain input from command window
          
                    Scanner justonemore = new Scanner (System.in);
                    
                    System.out.println ( "Enter your first name: " );    //the prompt
                    
                    first_name= justonemore.nextLine();
                                              
                   System.out.println ( "Hello! " + first_name + " " + "what year were your born?" );    //the prompt
                   
                   year_of_birth= justonemore.nextInt();
                   
                   age= calculation - year_of_birth; //the calculation of the year of birth minus the year set
                   
                    System.out.println ("Thanks! that would mean  that this year sometime, you will be " + " " + age);
                    
                   
                   
                }
                   
                                              
                    
          
                                    
                                    
                                    
                        
            
}
