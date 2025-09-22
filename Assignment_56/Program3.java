/*  Write a java program which accepts string from user and display such a word which occurs maximum number of times.

Input :   India is Demo India Hello Demo India
Output :  India
*/

import java.util.*;

class MyString
{
    public void Maximum(String str)
    {
        int i = 0,j = 0;
        int iMaxCount = 0;
        String iMaxWord = "";

        String words[] = str.split(" ");

        for(i = 0; i < words.length; i++)
        {
            if(words[i].equals("0"))
            {
                continue;
            }
            int iCount = 1;

            for(j = i + 1; j < words.length; j++)
            {
                if(words[i].equals(words[j]))
                {
                    iCount++;
                    words[j] = "0";
                }
            }
            if(iCount > iMaxCount)
            {
                iMaxCount = iCount;
                iMaxWord = words[i];
            }
        }
        System.out.println(iMaxWord);
    }
}

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        MyString obj = new MyString();
        obj.Maximum(str);

        sobj.close();
    }
}