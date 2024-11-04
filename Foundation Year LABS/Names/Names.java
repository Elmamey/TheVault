
import java.util.Scanner;
public class Names

{


    //the main method will ask the user for their information to contact them
    
            public static void main(String[] args)
            
            {//create Scanner to obtain input from command window
            String first_name;
            String second_name;
            int phone_number;
            
                      Scanner hopethisworks = new Scanner (System.in);
                      
                          System.out.println ( "Enter your first name: " );    //the prompt
                          
                          first_name= hopethisworks.nextLine();
                          
                          System.out.println ( "Enter your second name: " );    //the prompt
                          
                          second_name= hopethisworks.nextLine();
                          
                          System.out.println ( "Enter your  phone number: " );    //the prompt
                          
                          phone_number= hopethisworks.nextInt();
                          
                          System.out.println ( "Hello " + first_name + " " + second_name + " we can contact you at " + phone_number + ", goodbye");
                        }
                          //it worked :')
}
