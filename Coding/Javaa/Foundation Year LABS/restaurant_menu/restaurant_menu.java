import java.util.Scanner;
import java.text.DecimalFormat;
public class restaurant_menu {
    public static void main (String[] args){
    Scanner sc = new Scanner(System.in);
    DecimalFormat decmal = new DecimalFormat("0.0");
    int length;
    String [] menu = {"Hamburger", "Cheeseburger", "Fries", "Soda", "Ice Cream"};
    double [] prices = {5.99, 6.99, 2.99, 1.99, 3.99};
    length = menu.length;
    int choice;
    double total;
    double quantity;
    System.out.println("Enter your item number ");
    
    for (int i = 0; i <= length - 1; i++) {
        System.out.println (i + " " + menu[i] + " - $" + prices[i]);
        
    }
    choice = sc.nextInt();
    
    System.out.println("Thanks, now please enter the quantity");
    quantity= sc.nextDouble();
    
    switch (choice) {
        case 0: total = prices[0] * quantity; 
        System.out.println("that would be $"+ total); break;
        
        case 1: total = prices[1] * quantity; 
        System.out.println("that would be $"+ total); break;
        
        case 2: total = prices[2] * quantity; 
        System.out.println("that would be $"+ total); break;
        
        case 3: total = prices[3] * quantity; 
        System.out.println("that would be $"+ total); break;
        
        case 4: total = prices[4] * quantity; 
        System.out.println("that would be $"+ total); break;
        
    
    }
    
    }
}
