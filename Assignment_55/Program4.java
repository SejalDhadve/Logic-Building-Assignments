/*  Write a java program which accept array of characters from user & return difference between frequency of capital and frequency of small characters

Input :   b N e B R b A I O G i
Output :  3  (7-4)
*/

import java.util.*;

class MyArray
{
    public int Difference(char arr[])
    {
        int i = 0;
        int iCapitalCnt = 0;
        int iSmallCnt = 0;

        for(i = 0; i < arr.length; i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                iCapitalCnt++;
            }
            else if(arr[i] >= 'a' && arr[i] <= 'z')
            {
                iSmallCnt++;
            }
        }
        return (iCapitalCnt - iSmallCnt);
    }
}

class Program4
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

        int iRet = mobj.Difference(arr);

        System.out.println("Difference is : "+iRet);

        sobj.close();
    }
}