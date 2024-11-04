import java.util.Scanner;

public class Vowel_counter

{ public static void main (String[] args) //the notes will be for me to remember when coming back to my code :)
    {
        Scanner input = new Scanner (System.in);
        String text;
        int letters;
        int vowels = 0; //set value for the int bcs blueJ will harass you otherwhise
        char ch= ' '; //we create a character variable to store the position of the letters
        
         
        System.out.println("Please enter any text you want"); //we ask the question and wait for an action   
        text = input.nextLine(); //read the input 
        letters = text.length(); //text length
        
        for (int place = 0; place <= text.length() - 1 ; place++) //maintain the code inside the loop, make sure you use the brackets
        {
             ch = text.charAt(place);
            
            switch (ch) {
            
        
         case 'a':
         case 'e':
         case 'i':
         case 'o':
         case 'u':
         case 'A':
         case 'E':
         case 'I':
         case 'O':
         case 'U': vowels++; break; //you can only ad vowels++ at the end to save time
         default: break;
         
         
         
         

        
        
        
    }
}
    System.out.println("Your text had " + letters + " characters and " + vowels + " vowels."); //print it
    
}
}