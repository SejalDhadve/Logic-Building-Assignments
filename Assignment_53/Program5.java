/*  Write a java program which accept two arrays from user and check whether that array and its elements are palindrome or not

Input :  11 252 387783 252 11
Output : True

Input :  11 252 387783 77 11
Output : False

Input :  11 252 786 252 11
Output : False

Input :  11 252 786 253 11
Output : False
*/

import java.util.*;

class MyArray
{
    public boolean ChkPalindrome(int arr[])
    {
        int start = 0;
        int end = arr.length - 1;

        while(start < end)
        {
            if(arr[start] != arr[end])
            {
                return false;
            }
            start++;
            end--;
        }

        for(int num : arr)
        {
            int original = num;
            int reverse = 0;
            int temp = num;

            while(temp != 0)
            {
                int digit = temp % 10;
                reverse = (reverse * 10) + digit;
                temp /= 10;
            }

            if(original != reverse)
            {
                return false;
            }
        }
        return true;
    }
}

class Program5
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

        MyArray mobj = new MyArray();

        boolean bRet1 = mobj.ChkPalindrome(arr1);

        if(bRet1 == true)
        {
            System.out.println("Elements are palindrome");
        }
        else
        {
            System.out.println("Elements are not palindrome");
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

        boolean bRet2 = mobj.ChkPalindrome(arr2);

        if(bRet2 == true)
        {
            System.out.println("Elements are palindrome");
        }
        else
        {
            System.out.println("Elements are not palindrome");
        }
        sobj.close();
    }
}