 /*  Write java program which accept two arrays from user and display contents of each array.

Input : 2  9  7  5  2  3
        9  3  5  5
*/

import java.util.*;

class MyArray
{
    public void Display(int arr1[], int arr2[])
    {
        int i = 0;

        for(i = 0; i < arr1.length; i++)
        {
            System.out.print(arr1[i]+ "\t");
        }
        System.out.println();

        for(i = 0; i < arr2.length; i++)
        {
            System.out.print(arr2[i]+ "\t");
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

        System.out.print("Enter size of first array : "); 
        
        int iValue1 = sobj.nextInt();
        int arr1[] = new int[iValue1];

        System.out.println("Enter elements of first array : ");
        for(i = 0; i < iValue1; i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter size of second array : "); 
        
        int iValue2 = sobj.nextInt();
        int arr2[] = new int[iValue2];

        System.out.println("Enter elements of second array : ");
        for(i = 0; i < iValue2; i++)
        {
            arr2[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Display(arr1, arr2);
    }
}

