/*  Write a java program which accept array of characters from user & count number of vowels present in the array.

Input  :   b N j B R b A d G G
Output :   1
*/

import java.util.*;

class MyArray
{
    public int ArrayCountVowels(char arr[])
    {
        int i = 0,iCount = 0;

        for(i = 0; i < arr.length; i++)
        {
            char ch = Character.toLowerCase(arr[i]);

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program2
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

        int iRet = mobj.ArrayCountVowels(arr);

        System.out.println("Number of Vowels in array : "+iRet);

        sobj.close();
    }
}