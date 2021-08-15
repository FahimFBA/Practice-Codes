package HP;

import java.util.Scanner;

public class Employee {
    int id;
    double salary;

    Employee(int id, double salary) {
        this.id = id;
        this.salary = salary;
    }

    void getInfo() {
        System.out.println(id + "'s salary is " + salary);
    }
}

class Salaried extends Employee {

    Salaried(int id, double salary) {
        super(id, salary);
    }
}

class HourlySalaried extends Employee {
    int hour;

    HourlySalaried(int id, double salary, int hour) {
        super(id, salary);
        this.hour = hour;
    }

    void getInfo() {
        System.out.println(id + "'s salary is " + salary * hour);
    }
}

class Commissioned extends Employee {
    double commission;

    Commissioned(int id, double salary, double commission) {
        super(id, salary);
        this.commission = commission;
    }

    void getInfo() {
        System.out.println(id + "'s salary is " + (salary + commission));
    }

}

class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int id, choice;
        Employee employee[] = new Employee[5];

        for (int i = 0; i < 5; i++) {
            System.out.println("Enter your ID:");
            id = scan.nextInt();
            msg();
            choice = scan.nextInt();
            switch (choice) {
                case 1:
                    employee[i] = new Salaried(id, 12000);
                    break;

                case 2:
                    employee[i] = new HourlySalaried(id, 8000, 18);
                    break;

                case 3:
                    employee[i] = new Commissioned(id, 20000, 9000);
                    break;
            }
            System.out.println();
        }

        for (Employee x : employee) {
            x.getInfo();
        }
    }

    static void msg() {
        System.out.println("What kind of employee is you?");
        System.out.println("1. Salaried");
        System.out.println("2. HourlySalaried");
        System.out.println("3. Commissioned");
    }
}