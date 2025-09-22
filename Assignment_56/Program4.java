/*  Write a java program which accepts string and one character from user and remove that character from the string.

Input :   IndiaisDemoIndia
          i
Output :  IndasDemoInda
*/

import java.util.*;

class MyString
{
    public void RemoveCharacter(String str,char ch)
    {
        int i = 0;

        String newstr = "";

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) != ch)
            {
                newstr = newstr + str.charAt(i);
            }
        }
        System.out.println(newstr);
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        System.out.println("Enter the character to remove : ");
        char ch = sobj.next().charAt(0);

        MyString obj = new MyString();
        obj.RemoveCharacter(str,ch);

        sobj.close();
    }
}