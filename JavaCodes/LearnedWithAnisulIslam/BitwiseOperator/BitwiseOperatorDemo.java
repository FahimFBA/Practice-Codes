import java.util.Scanner;

public class BitwiseOperatorDemo {

    public static void main(String[] args){

        Scanner input = new Scanner(System.in);

        int a, b, result;

        System.out.print("Enter the first value: ");
        a = input.nextInt();

        System.out.print("Enter the second value: ");
        b = input.nextInt();

        result = a & b;
        System.out.println("a & b = " +result);

        result = a | b;
        System.out.println("a | b = "+result);

        result = a ^ b;
        System.out.println("a ^ b = "+result);

        result = a >> 3;
        System.out.println("a >> 3 = " +result);

        result = a << 3;
        System.out.println("a << 3 = " +result);

    }
    
}
