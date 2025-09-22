// Given an array A[], write a function that segregates even and odd numbers. The functions should put all even numbers first, and then odd numbers.

import java.io.*;

class SegregateEvenOdd
{
    static void segregateEvenOdd(int arr[])
    {
        int result[] = new int[arr.length];
        int i = 0,index = 0;

        for(i = 0; i < arr.length; i++)
        {
            if(arr[i] % 2 == 0)
            {
                result[index] = arr[i];
                index++;
            }
        }

        for(i = 0; i < arr.length; i++)
        {
            if(arr[i] % 2 != 0)
            {
                result[index] = arr[i];
                index++;
            }
        }

        for(i = 0; i < arr.length; i++)
        {
            arr[i] = result[i];
        }
    }
}

class Program3
{
    public static void main(String A[])
    {
        int arr[] = {12,34,45,9,8,90,3};

        SegregateEvenOdd sobj = new SegregateEvenOdd();
        sobj.segregateEvenOdd(arr);
        
        System.out.println("Array after segregation : ");

        for(int i = 0; i < arr.length; i++)
        {
            System.out.println(arr[i]+" ");
        }
    }
}