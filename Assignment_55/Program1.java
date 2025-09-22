/*  Write a java program which accept array of characters from user & replace each capital character with its corresponding small charcater.
Input :   b N j B R b A d G G
Output :  b n j b r b a d g g
*/

import java.util.*;

class MyArray
{
    public void ArrayReplace(char arr[])
    {
        int i = 0;

        for(i = 0; i < arr.length; i++)
        {
            if(Character.isUpperCase(arr[i]))
            {
                arr[i] = Character.toLowerCase(arr[i]);
            }
        }

        System.out.println("Replaced capital characters Array :");

        for(char ch : arr)
        {
            System.out.print(ch+"\t");
        }
        System.out.println();
    }
}

class Program1
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
        for (i = 0;i < size;i++)
        {
            arr[i] = arr[i] = tokens[i].charAt(0);
        }

        MyArray mobj = new MyArray();

        mobj.ArrayReplace(arr);

        sobj.close();
    }
}