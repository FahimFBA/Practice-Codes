
import java.util.Scanner;
public class FarenheitToCelsius {
    public static void main(String[] args) {
        double cels, farn;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the value of Farenheit: ");
        farn = input.nextDouble();

        cels=0.55*(farn-32);
        System.out.println("The value in Celsius is : "+cels);
    }
    
}
