//Write a java program to merge two files alternatively into third file.

import java.io.*;

public class Program4
{
    public static void main(String A[]) 
    {
        try
        {
            BufferedReader br1 = new BufferedReader(new FileReader("file1.txt"));
            BufferedReader br2 = new BufferedReader(new FileReader("file2.txt"));
            BufferedWriter bw = new BufferedWriter(new FileWriter("merged.txt"));

            String line1 = null, line2 = null;
            while ((line1 = br1.readLine()) != null || (line2 = br2.readLine()) != null) 
            {
                if(line1 != null) bw.write(line1+"\n");
                if(line2 != null) bw.write(line2+"\n");
            }

            br1.close();
            br2.close();
            bw.close();

            System.out.println("Files merged successfully!");
        } 
        catch (Exception e) 
        {
            System.out.println("Error: " + e.getMessage());
        }
    }
}