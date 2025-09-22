/*  Write a java program which accept two arrays from user and return diference between summation of arrays.

Input  :  2  9  7  5  2  3
          9 3 5 5
Output :  6       
*/

import java.util.*;

class MyArray
{
    public int DiffArray(int arr1[],int arr2[])
    {
        int i = 0,iSum1 = 0,iSum2 = 0;

        for (i = 0; i < arr1.length; i++)
        {
            iSum1 = iSum1 + arr1[i];
        }

        for (i = 0; i < arr2.length; i++)
        {
            iSum2 = iSum2 + arr2[i];
        }

        return(iSum1 - iSum2);
    }
}

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0,iRet = 0;

        System.out.println("Enter elements of first array:");
        String line1 = sobj.nextLine();
        String[] tokens1 = line1.trim().split("\\s+");
        int size1 = tokens1.length;
        int arr1[] = new int[size1];
        for (i = 0; i < size1; i++)
        {
            arr1[i] = Integer.parseInt(tokens1[i]);
        }

        System.out.println("Enter elements of second array:");
        String line2 = sobj.nextLine();
        String[] tokens2 = line2.trim().split("\\s+");
        int size2 = tokens2.length;
        int arr2[] = new int[size2];
        for (i = 0; i < size2; i++)
        {
            arr2[i] = Integer.parseInt(tokens2[i]);
        }

        MyArray mobj = new MyArray();
        iRet = mobj.DiffArray(arr1,arr2);

        System.out.println("Difference between summation of arrays : "+iRet);

        sobj.close();
    }
}