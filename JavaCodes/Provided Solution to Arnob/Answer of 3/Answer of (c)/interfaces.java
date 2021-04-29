interface calculate {
    void cal(int item);
}

class display implements calculate {
    int x;

    void cal(int item) { //  Fix the error: change the method visibility to public like: public void cal(int item)
        x = item * item;
    }
}

class interfaces {
    public static void main(String args[]) {
        display arr = new display();
        arr.x = 0;
        arr.cal(2);
        System.out.print(arr.x);
    }
}

// Compilation Error:
// interfaces.java:8: error: cal(int) in display cannot implement cal(int) in
// calculate
// void cal(int item) {
// ^
// attempting to assign weaker access privileges; was public
// 1 error

// Reason:
// Cannot reduce the visibility of the inherited method from calculate