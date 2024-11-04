import java.util.Scanner;

public class njda {
    public static void main(String [] args) {
        try (Scanner sc = new Scanner(System.in)) {
        System.out.println("Enter a text, whatever you want");
        String text = sc.nextLine();
        int Nvowels = vowelcounter(text);

        System.out.println("The number of vowels in your text was " + Nvowels);
        
        }
    }

    public static int vowelcounter(String text)  {
        int vowel=0;
          for (int place = 0; place <= text.length() - 1 ; place++) //maintain the code inside the loop, make sure you use the brackets
        {
            char v = text.charAt(place);
        switch(v) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':    
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':    
            case 'U': vowel++ ; break;
        
        }
        }
        return vowel;
        }
        
}
