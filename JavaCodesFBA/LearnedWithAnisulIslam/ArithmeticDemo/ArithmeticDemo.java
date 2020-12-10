import java.util.Scanner;
public class ArithmeticDemo{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num1, num2, result;
        System.out.println("Enter the first number: ");
        num1=input.nextInt();
        System.out.println("Enter the second number: ");
        num2=input.nextInt();
        result=num1+num2;
        System.out.println("The sum is: "+result);

        result=num1-num2;
        System.out.println("The subtraction is: "+result);

        result=num1*num2;
        System.out.println("The multiplication is: "+result);
    
        result=num1/num2;
        System.out.println("The divider is: "+result);

        result=num1%num2;
        System.out.println("The remainder is: "+result);
    }
}