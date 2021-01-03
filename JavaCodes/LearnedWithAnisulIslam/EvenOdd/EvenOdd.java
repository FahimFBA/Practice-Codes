

import java.util.Scanner;

public class EvenOdd {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int num;

        System.out.print("Enter the number: ");

        num = input.nextInt(); // Taking input from the user 

        // condition

        if (num % 2 == 0){
            System.out.println("The number is even.");
        }

        else {
            System.out.println("The number is odd.");
        }
    }
    
}
