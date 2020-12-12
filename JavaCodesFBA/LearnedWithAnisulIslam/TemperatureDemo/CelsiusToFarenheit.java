import java.util.Scanner;
public class CelsiusToFarenheit {
    public static void main(String[] args) {
        double cels, farn;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the value of celsius: ");
        cels = input.nextDouble();

        farn=1.8*cels+32;
        System.out.println("The value in Farenheit is : "+farn);
    }
    
}
