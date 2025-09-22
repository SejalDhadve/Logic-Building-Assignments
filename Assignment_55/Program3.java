/*  Write a java program which accept array of characters from user & accept one character. Return occurence of that character without considering case.

Input  :   b N e B R b A i G i B
Output :   4
*/

import java.util.*;

class MyArray
{
    public int Search(char arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter character to search :");
        char ch = sobj.next().charAt(0);

        int iCount = 0;
        ch = Character.toLowerCase(ch);

        for(int i = 0; i < arr.length; i++)
        {
            if(Character.toLowerCase(arr[i]) == ch)
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

        int iRet = mobj.Search(arr);

        System.out.println("Number of Occurence of character : "+iRet);

        sobj.close();
    }
}