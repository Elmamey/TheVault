import java.util.Scanner;

public class Prime_number {

    public static void main(String[] args) {
        String name="";
        int u_number=0;
        Scanner sc = new Scanner(System.in); 
           System.out.println("Hello! Can I have your name?");
            name= sc.next();
            System.out.println("Thank you " + name + "! now please tell me a number, I will tell you all prime numbers between 0 and the number you provided!");
            u_number= sc.nextInt();       
        System.out.println("Prime numbers from 0 to " + u_number + " are:");
        for (int i = 2; i <= u_number; i++) {
            boolean isPrime = true;
            for (int j = 2; j <= Math.sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                System.out.print(i + " ");
            }
        }
    }
}
