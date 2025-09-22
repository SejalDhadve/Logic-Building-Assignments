/*  Write java program which accept two arrays from user and form new array which is combination of contents of first and second array.

Input : 12  57  28  3
        99  23  54  58  6  67

Output : 12  57  28  3  99  23  54  58  6  67        
*/

import java.util.*;

class MyArray
{
    public void ArrayConcate(int arr1[], int arr2[])
    {
        int result[] = new int[arr1.length + arr2.length];
        int i = 0, j = 0, k = 0;

        for(i = 0; i < arr1.length; i++, k++)
        {
            result[k] = arr1[i];
        }

        for(j = 0; j < arr2.length; j++, k++)
        {
            result[k] = arr2[j];
        }

        System.out.println("Concatenated Array:");
        for(i = 0; i < result.length; i++)
        {
            System.out.print(result[i] + "\t");
        }
        System.out.println();
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;

        System.out.print("Enter size of first array: ");
        int iValue1 = sobj.nextInt();
        int arr1[] = new int[iValue1];

        System.out.println("Enter elements of first array: ");
        for(i = 0; i < iValue1; i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter size of second array: ");
        int iValue2 = sobj.nextInt();
        int arr2[] = new int[iValue2];

        System.out.println("Enter elements of second array: ");
        for(i = 0; i < iValue2; i++)
        {
            arr2[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.ArrayConcate(arr1, arr2);
    }
}
