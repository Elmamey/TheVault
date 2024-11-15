import java.util.Scanner;

public class modulus {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name;
        System.out.println("Hello! Please enter your name");
        name = sc.next();
        System.out.print("Enter a number: ");
        int u_number = sc.nextInt();
        System.out.println(name + ", the prime numbers from 0 to " + u_number + " are:");
        for (int i = 2; i <= u_number; i++) { 
             //I made a for loop to to check what numbers from 2 to the number entered are prime numbers.
             boolean prime = true;
            //I made a boolean set to true assumming every number is prime.
        for (int j = 2; j < i; j++) {
            // I made a nested for loop to check with modulus if 'i' is divisible by 'j' with no remainder. 
                if (i % j == 0) {
                    //I made the modulus calculation to check if any number starting from 2 has a remainder of 0.
                    //if the remainder is 0 at any point before 'i', then the number is not prime, then 'prime' becomes false.
                    prime = false;
                    break;
                }
            }
        if (prime==true) { //if statement to print only the true prime numbers checked in the for loop.
                System.out.print(i + " ");
            }
        } //this took me way too much time, Jesus.
    }
} 

