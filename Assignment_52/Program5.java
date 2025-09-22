/* Write a java program which accept two arrays from user and display summation of each array

Input  :  2  9  7  5  2  3
          9 3 5 5
Output :  28 22       
*/

import java.util.*;

class MyArray
{
    public void DisplayArraySum(int arr1[], int arr2[])
    {
        int sum1 = 0, sum2 = 0;

        for(int i = 0; i < arr1.length; i++)
        {
            sum1 += arr1[i];
        }

        for(int i = 0; i < arr2.length; i++)
        {
            sum2 += arr2[i];
        }

        System.out.println("Output: " + sum1 + " " + sum2);
    }
}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter size of first array: ");
        int iValue1 = sobj.nextInt();
        int arr1[] = new int[iValue1];

        System.out.println("Enter elements of first array: ");
        for(int i = 0; i < iValue1; i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter size of second array: ");
        int iValue2 = sobj.nextInt();
        int arr2[] = new int[iValue2];

        System.out.println("Enter elements of second array: ");
        for(int i = 0; i < iValue2; i++)
        {
            arr2[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.DisplayArraySum(arr1, arr2);
    }
}
