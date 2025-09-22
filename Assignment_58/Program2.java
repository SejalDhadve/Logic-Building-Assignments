//Program to check given strings are Anagram or not this java program will read two strings and check whether they are anagram strings or not.

import java.util.Arrays;
import java.util.Scanner;

class Program2
{
    static boolean isAnagrams(String str1,String str2)
    {
        str1 = str1.replaceAll("\\s", "").toLowerCase();
        str2 = str2.replaceAll("\\s", "").toLowerCase();

        if (str1.length() != str2.length())
        {
            return false;
        }

        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        return Arrays.equals(arr1, arr2);
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String1:");
        String str1 = sobj.next();
        System.out.println("Enter String2:");
        String str2 = sobj.next();

        if(isAnagrams(str1,str2))
        {
            System.out.println("Anagram Strings !!");
        }
        else
        {
            System.out.println("Strings are not Anagram !!");
        }
    }
}