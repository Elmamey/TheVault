import java.util.Scanner;
import java.util.InputMismatchException;

public class Methods {
    public static void main(String []args ) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.println("Hello! Let's help you calculate the area of a rectangle");
            System.out.println("Please enter the width");
            int w = sc.nextInt();
            System.out.println("Thank you! Now the height, please.");
            int h= sc.nextInt();
    
            int Area = calculateArea(w, h);
            System.out.println("The area of your rectangle is " + Area);
        } catch (InputMismatchException e) {
            System.out.println("Invalid input. Please enter a valid integer for the width and height.");
        } finally {
            sc.close();
        }
    }
    public static int calculateArea(int w, int h) {
        int area = w*h;
        return area;
    }
}