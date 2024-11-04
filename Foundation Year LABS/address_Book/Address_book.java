import java.util.Scanner;  
public class Address_book   

{    public static void main (String [] args)
    {
        Scanner input = new Scanner(System.in);
        String[] name = new String[100];
        String[] DOB = new String[100];
        String[] Phone = new String[100];
        int position = 0; 
        boolean end = false;
        int count=0;  
        
                   do{   
                
                    System.out.println("Enter Name #" + count + ":");
                    name[count]=input.nextLine();
                    System.out.println("Enter DOB #" + count + ":");
                    DOB [count]=input.nextLine();
                    System.out.println("Enter Phone number #" + count + ":");
                    Phone [count]=input.nextLine();
            
            if(name[count].equals("END")) {
                end = true;
                count--;
                System.out.println("END added to databaste");
                System.out.println(" ");
       
            }
            else {
             count++;
            }
            
        }while (end == false);
         
          for (int i=0; i<=count; i++) {
            
              
            System.out.println("Record #" + i + ": " +" Name: " + name[i] + " - " + "DOB: " + DOB[i] + " - " + " Phone: " + Phone[i] );
            System.out.println(" ");
                  

        }


        }
        }
        
           
            
            
            
        
            
    
