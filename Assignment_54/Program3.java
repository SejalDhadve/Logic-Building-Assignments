/*  Write a java program which accept array of characters from user and count number of capital characters.

Input  :   b N j B R b A d G G
Output :   6
*/

import java.util.*;

class MyArray
{
    int ArrayCapital(char arr[])
    {
        int i = 0,iCount = 0;
        for (i = 0; i < arr.length; i++)
        {
            if (arr[i] >= 'A' && arr[i] <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;

        System.out.println("Enter characters in the array :");
        String line = sobj.nextLine();
        String[] tokens = line.trim().split("\\s+");
        int size = tokens.length;
        char arr[] = new char[size];

        for (i = 0; i < size; i++)
        {
            arr[i] = arr[i] = tokens[i].charAt(0);
        }

        MyArray mobj = new MyArray();

        int iCount = mobj.ArrayCapital(arr);

        System.out.println("Number of capital characters are : "+iCount);

        sobj.close();
    }
}