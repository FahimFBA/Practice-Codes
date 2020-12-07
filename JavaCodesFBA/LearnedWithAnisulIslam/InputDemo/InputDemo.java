import java.util.Scanner;
public class InputDemo {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int number;
        System.out.print("Enter any number : ");
        number=input.nextInt();
        System.out.println("The number = "+number);
        String name = "Fahim Bin Amin";
        System.out.println("Welcome "+name);

        System.out.println("Now, enter your friend's name here: ");

        /* friendsName=input.next(); input.next() can take only a single word from the user */
        String friendsName=input.nextLine();
        //input.nextLine() can take whole string from the user
        System.out.println("We got the name of your friend! Welcome "+friendsName);
        double num;
        System.out.print("Enter a double number: ");
        num=input.nextDouble();
        System.out.println("The double number is: "+num);

    }

}