import java.io.File;

public class Main{
    public static void main(String[] args) {
        File file1 = new File("student.txt");
        File file2 = new File("teacher.txt");

        try{
            file1.createNewFile();
            file2.createNewFile();
            System.out.println("Two files are created successfully");;
        } catch(Exception e){
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }
}