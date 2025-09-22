/*  Write a java program which accept array from user & display below pattern.

Input :   8  9  7  6  4  2  4
Output :  *  *  *  *  *  *  *  *
          *  *  *  *  *  *  *  *  *
          *  *  *  *  *  *  *
          *  *  *  *  *  *
          *  *  *  *
          *  *
          *  *  *  *
*/

import java.util.*;

class MyArray
{
    public void Pattern(int arr[])
    {
        int i = 0,j = 0;

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i]; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;

        System.out.println("Enter elements in the array :");
        String line = sobj.nextLine();
        String[] tokens = line.trim().split("\\s+");
        int size = tokens.length;
        int arr[] = new int[size];
        for (i = 0;i < size;i++)
        {
            arr[i] = Integer.parseInt(tokens[i]);
        }

        MyArray mobj = new MyArray();

        mobj.Pattern(arr);

        sobj.close();
    }
}