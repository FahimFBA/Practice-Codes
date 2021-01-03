import java.util.Scanner;

public class VowelConsonantDemo {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        char ch;

        System.out.print("Enter a character: ");
        
        ch = input.next().charAt(0); // using charAt because we will take the first letter/character which is in index 0 if user input multiple characters 


        if (ch == 'a'){
            System.out.println("Vowel!");
        }

        else if (ch == 'e'){
            System.out.println("Vowel!");
        }

        else if (ch == 'i'){
            System.out.println("Vowel!");
        }

        else if (ch == 'o'){
            System.out.println("Vowel!");
        }

        else if (ch == 'u'){
            System.out.println("Vowel!");
        }

        else {
            System.out.println("Consonant!");
        }
    
    
    }
}