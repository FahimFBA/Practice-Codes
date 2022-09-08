import java.io.FileNotFoundException;
import java.util.Formatter;

public class FileDemo {
    public static void main(String[] args) {
        try{
            Formatter formatter = new Formatter("student.txt");
            formatter.format("%s %s %s\n", "1", "John", "Doe");
            formatter.format("%s %s %s\n", "2", "Fahim", "Amin");
            formatter.format("%s %s %s\n", "3", "John", "Smith");
            formatter.close();
        }catch(FileNotFoundException e){
            System.out.println(e);
        }
       
    }
}