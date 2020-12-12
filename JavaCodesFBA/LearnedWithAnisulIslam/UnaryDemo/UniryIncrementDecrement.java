public class UniryIncrementDecrement {
    public static void main(String[] args){
        int x = 25;
        int y;

        y = x++; // post increment
        System.out.println("The value of y is: "+y);

        y = x; 
        System.out.println("The value of y is: "+y);

        System.out.println("Pre Increment");

        y = ++x; // pre increment
        System.out.println("The value of y is: "+y);

        y = x; 
        System.out.println("The value of y is: "+y);

    }
    
}
