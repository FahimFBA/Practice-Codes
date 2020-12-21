import java.util.Scanner;
public class RectangleDemo {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the value of length: ");
        int length = input.nextInt();

        System.out.print("Enter the value of height: ");
        int height = input.nextInt();

        int area = length * height;

        System.out.println("The area of the rectangle is : " + area);

    }
    
}
