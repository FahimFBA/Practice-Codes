import java.util.Scanner;

public class CapitalSmallDemo {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        char ch;
        System.out.print("Enter any letter: ");
        ch = input.next().charAt(0);
 
        if (ch>='a' && ch <='z'){   // condition of small alphabet
            System.out.println("The letter is small.");
        }

        else if (ch>='A' && ch<='Z'){ // condition of capital alphabet
            System.out.println("The letter is capital.");
        }

        else {
            System.out.println("Invalid input!"); 
        }
    }
}