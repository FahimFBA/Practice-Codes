import java.util.Scanner;
public class TriangleDemo {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double base, height, area;
        System.out.print("Enter the value of the base : ");
        base = input.nextDouble();

        System.out.print("Enter the value of the height : ");
        height = input.nextDouble();

        area = 0.5 * base * height;

        System.out.println("Area of the triangle : "+area);

    }
    
}
