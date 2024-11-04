import java.util.Scanner;
import java.text.DecimalFormat;
public class Compound {
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);
        DecimalFormat precisionTwo = new DecimalFormat("0.00");
        double initial_amount=0;
        double initial_interest=0;
        double amountt=0;
        double increase=0;
        double interest=0;
        int year=0;
        double total=0;

        
        System.out.println("Hello! Let's help you calculate how broke are you gonna be after your loan");
        System.out.println("Please enter the principle amount");
        initial_amount = sc.nextDouble();
        System.out.println("Thanks! Now what is the interest rate?");
        initial_interest = sc.nextDouble();
        System.out.println("Thank you, finally, can you tell me how many years?");
        year = sc.nextInt();
        
        interest = initial_interest/100;
        for (int i= 1; i<=year; i++) { 
            increase = initial_amount * interest;    
            amountt =  increase + initial_amount;
            System.out.println("year " + i + " " + precisionTwo.format(amountt));
        }
        System.out.println(initial_amount + " over " + year + "'s years @ " + initial_interest + "% interest will be " + precisionTwo.format(amountt));
    }
}