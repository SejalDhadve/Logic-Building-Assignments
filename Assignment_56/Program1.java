/*  Write a java program which accepts two strings from user and check whether first string is the rotation of second string or not.

Input :   abcdefg    cdefgab
Output :  True
*/

import java.util.*;

class MyString
{
    public boolean Rotation(String str1,String str2)
    {
        if(str1.length() != str2.length())
        {
            return false;
        }

        String combine = str2 + str2;

        return combine.contains(str1);
    }
}

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter second string : ");
        String str2 = sobj.nextLine();

        MyString obj = new MyString();
        boolean bRet = obj.Rotation(str1,str2);

        if(bRet)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }

        sobj.close();
    }
}