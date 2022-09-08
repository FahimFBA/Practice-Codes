package FolderCreateAndDelete;
import java.io.File;

public class Main{
    public static void main(String[] args) {
        File file = new File("C://Users//Md. Fahim Bin Amin//Desktop//Practice-Codes//JavaCodes//File Related//CreatedFolder");
        if (file.mkdir()) {
            System.out.println("Folder created");
        } else {
            System.out.println("Folder not created");
        }
        String directoryLocation = file.getAbsolutePath();
        System.out.println(directoryLocation);
        if(file.delete()) {
            System.out.println(file.getName() + " folder has been deleted");
        } else {
            System.out.println("Folder not deleted");
        }
    }
}