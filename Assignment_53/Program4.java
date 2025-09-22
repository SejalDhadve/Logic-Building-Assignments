//  Write a java program which accept two arrays from user and copy the contents of that array into another array and return new array

import java.util.*;

class MyArray
{
    public int[] CopyArray(int arr[])
    {
        int i = 0;
        int newArr[] = new int[arr.length];

        for (i = 0; i < arr.length; i++)
        {
            newArr[i] = arr[i];
        }

        return newArr;
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;

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
        
        int[] newArr1 = mobj.CopyArray(arr1);

        System.out.print("New first array: ");
        for (int num : newArr1)
        {
            System.out.print(num+"\t");
        }
        System.out.println();

        int[] newArr2 = mobj.CopyArray(arr2);

        System.out.print("New second array: ");
        for (int num : newArr2)
        {
            System.out.print(num+"\t");
        }
        System.out.println();

        sobj.close();
    }
}