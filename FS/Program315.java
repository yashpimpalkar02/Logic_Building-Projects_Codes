import java.util.*;
import java.io.*;

class Program315
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of the source file (which already exists): ");
        String SourceFile = sobj.nextLine();

        System.out.println("Enter the name of the destination file (to be created): ");
        String DestFile = sobj.nextLine();

        File fobj = new File(SourceFile);
        if(!fobj.exists())
        {
            System.out.println("Source file does not exist...");
            return;
        }

        File fobj1 = new File(DestFile);
        fobj1.createNewFile();

        FileInputStream fiobj = new FileInputStream(SourceFile);
        FileOutputStream foobj = new FileOutputStream(DestFile);

        byte Buffer[] = new byte[1024];
        int iRet = 0;

        // Read and write data from source to destination
        while((iRet = fiobj.read(Buffer)) != -1)
        {
            foobj.write(Buffer, 0, iRet);
        } 

        // Close the file streams
        fiobj.close();
        foobj.close();

        System.out.println("Data successfully copied from " + SourceFile + " to " + DestFile);
    }
}
