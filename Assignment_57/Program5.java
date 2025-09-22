// Given an array of integers,write a function that returns true if there is a triplet(a,b,c) that satisfies a2+b2 = c2.

import java.io.*;

class PythagoreanTriplet
{
    static boolean isTriplet(int arr[], int n)
    {
        int i = 0,j = 0,k = 0;

        for(i = 0; i < n; i++)
        {
            arr[i] = arr[i] * arr[i];
        }

        for(i = 0; i < n - 2; i++)
        {
            for(j = i + 1; j < n - 1; j++)
            {
                for(k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] == arr[k] || arr[j] + arr[k] == arr[i] || arr[i] + arr[k] == arr[j])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}

class Program5
{
    public static void main(String A[])
    {
        int arr[] = {3,1,4,6,5};
        int arr_size = arr.length;

        PythagoreanTriplet pobj = new PythagoreanTriplet();
        boolean bRet = pobj.isTriplet(arr,arr_size);

        if(bRet == true)
        {
            System.out.println("Yes");
        }
        else 
        {
            System.out.println("No");
        }
    }
}