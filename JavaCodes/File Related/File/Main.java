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

        // checking whether the files exist or not
        if(file1.exists()){
            System.out.println("File1 exists");
        } else {
            System.out.println("File1 does not exist");
        }
        if(file2.exists()){
            System.out.println("File2 exists");
        } else {
            System.out.println("File2 does not exist");
        }

        file2.delete();
        if(file2.exists()){
            System.out.println("File2 exists");
        } else {
            System.out.println("File2 does not exist");
        }
    }
}