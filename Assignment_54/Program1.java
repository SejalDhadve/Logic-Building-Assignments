/*  Write a java program which accept array from user and reverse each number of that array

Input :  89 687 56 549 87 9
Output : 98 786 65 945 78 9
*/

import java.util.*;

class MyArray
{
    public void ReverseArray(int arr[])
    {
        int i = 0;

        System.out.println("Reversed elements of the array :");

        for (i = 0; i < arr.length; i++)
        {
            int num = arr[i];
            int reverse = 0;

            while (num != 0)
            {
                int digit = num % 10;
                reverse = (reverse * 10) + digit;
                num = num / 10;
            }

            arr[i] = reverse;
        }

        for(int num : arr)
        {
            System.out.print(num+"\t");
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

        mobj.ReverseArray(arr);

        sobj.close();
    }
}