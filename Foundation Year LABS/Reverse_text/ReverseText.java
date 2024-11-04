import java.util.Scanner;

public class ReverseText {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter any text you want:");
        String input = sc.nextLine();
        
        String reversedOutput = "";
        int length = input.length();
        for (int i = length - 1; i >= 0; i--) {
            reversedOutput += input.charAt(i);
        }
        
        System.out.println("The reversed text is: " + reversedOutput);
    }
    
}
