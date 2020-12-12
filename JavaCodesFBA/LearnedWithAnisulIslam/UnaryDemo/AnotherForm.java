public class AnotherForm {
    public static void main(String[] args){
        int x = 25;
        int y;

        y = --x; // x=24
        System.out.println("The value of y is: "+y);

        y = x--; // x=24
        System.out.println("The value of y is: "+y);

        
        y = ++x; // x=24
        System.out.println("The value of y is: "+y);

        y = x++;  // x=24
        System.out.println("The value of y is: "+y);

    }
    
}
