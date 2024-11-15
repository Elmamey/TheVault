import java.util.Arrays;
import java.util.Scanner;
public class Efficient_vowels {
    public static void main(String [] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter a text, whatever you want");
            String text = sc.nextLine();
            int Nvowels = vowelcounter(text);

            System.out.println("The number of vowels in your text was " + Nvowels);
        }
    }

    public static int vowelcounter(String text)  {
            char[] vowels = {'a', 'e', 'i', 'o', 'u'};
            int count = 0;
        
            for (int i = 0; i < text.length(); i++) {
                //text.charAt() reads the text(string) character by character, useful.
                //the position you want to start at is set in the ().
                char ch = Character.toLowerCase(text.charAt(i));
                //we convert the character to lowercase to compare if it's any of the
                //lowercase vowels, the machine does not differentiate between upper and lowercase
                if (Arrays.binarySearch(vowels, ch) >= 0) {
                //Arrays.binarySearch(vowels, ch) is a method that checks whether the character ch is in the vowels array, and if so, it returns the position where ch was found in the array.
                    count++;
                }
            }
        
            return count;
        }
    }
