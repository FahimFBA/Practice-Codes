import java.util.Scanner;
public class SquareDemo {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int s;
        System.out.print("Enter a value : ");
        s = input.nextInt();

        int result = s * s;
        System.out.println("The square of that: "+result);
    }

    
}
