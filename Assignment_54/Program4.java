/*  Write a java program which accept marks of N students from user and display class of each student.

Input :   67.3  45.8  88.9  77.5  55.2
Output :  67.3   First class
          45.8   Pass class
          88.9   First class with Distinction
          77.5   First class with Distinction
          55.2   Second class
*/

import java.util.*;

class MyArray
{
    public void Percentage(float arr[])
    {
        int i = 0;

        for (i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i]+"\t");

            if(arr[i] >= 70.0f)
            {
                System.out.println("First class with Distinction");
            }
            else if(arr[i] >= 60.0f)
            {
                System.out.println("First class");
            }
            else if(arr[i] >= 50.0f)
            {
                System.out.println("Second class");
            }
            else if(arr[i] >= 35.0f)
            {
                System.out.println("Pass class");
            }
            else
            {
                System.out.println("Fail");
            }
        }
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;

        System.out.println("Enter marks of N students :");
        String line = sobj.nextLine();
        String[] tokens = line.trim().split("\\s+");
        int size = tokens.length;
        float arr[] = new float[size];
        for (i = 0; i < size; i++)
        {
            arr[i] = Float.parseFloat(tokens[i]);
        }

        MyArray mobj = new MyArray();

        mobj.Percentage(arr);

        sobj.close();
    }
}