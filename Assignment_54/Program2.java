/*  Write a java program which accept array from user and replace each member with summation of its digit.

Input :  89 687 56 549 87 9
Output : 17 21 11  18  15 9
*/

import java.util.*;

class MyArray
{
    public void SumArray(int arr[])
    {
        int i = 0,digit = 0;
        for (i = 0; i < arr.length; i++)
        {
            int num = arr[i];
            int sum = 0;

            while (num != 0)
            {
                digit = num % 10;
                sum = sum + digit;
                num = num / 10;
            }
            arr[i] = sum;
        }

        for (int num : arr)
        {
            System.out.print(num+"\t");
        }
        System.out.println();
    }
}

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;

        System.out.println("Enter elements of the array :");
        String line = sobj.nextLine();
        String[] tokens = line.trim().split("\\s+");
        int size = tokens.length;
        int arr[] = new int[size];
        for (i = 0; i < size; i++)
        {
            arr[i] = Integer.parseInt(tokens[i]);
        }

        MyArray mobj = new MyArray();

        mobj.SumArray(arr);

        sobj.close();
    }
}