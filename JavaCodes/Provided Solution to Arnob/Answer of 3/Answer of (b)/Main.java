class Base {
    final public void show() {
        System.out.println("Base::show() called");
    }
}

class Derived extends Base {
    public void show() { 
        System.out.println("Derived::show() called");
    }
}

class Main {
    public static void main(String[] args) {
        Base b = new Derived();
        ;
        b.show();
    }
}


// Compilation Error:
// Main.java:8: error: show() in Derived cannot override show() in Base
//     public void show() {    
//                 ^
//   overridden method is final
// 1 error

// Reason:
// Cannot override the final method from the class named Base