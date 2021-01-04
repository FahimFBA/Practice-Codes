

/* 
Bitwise Operator:

Operator    Meaning

    &      Bitwise AND
    |      Bitwise OR
    ^      Bitwise EXOR
    >>     Bitwise Shift Right
    <<     Bitwise Shift Left
    ~      Bitwise NOT

   # They work with binary value!
*/

public class BitwiseOperator {
    public static void main(String[] args){

        int a = 32;
        int b = 12;
        int c;

        c = a & b; 

        System.out.println(c);

        c = a | b;
        System.out.println(c);

        c = a ^ b;
        System.out.println(c);
    }
    
}
