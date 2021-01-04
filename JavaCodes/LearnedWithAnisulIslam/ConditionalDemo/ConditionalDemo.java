import java.util.Scanner;

public class ConditionalDemo {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int num1, num2, large; 
        System.out.print("Enter the first number: ");
        num1=input.nextInt();
        System.out.print("Enter the second number: ");
        num2=input.nextInt();
        large=(num1>num2) ? num1 : num2; // works like if/else condition : if (num1>num) : result will be num1 and the result will assign the value to large; else num2

        System.out.println("The large number between them is: "+ large);


    }

    

    
}
