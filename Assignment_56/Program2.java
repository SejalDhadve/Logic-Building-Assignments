/*  Write a java program which accepts string from user and print frequency of each word.

Input :   India is Demo India Hello Demo
Output :  India  2
          Demo   2
          is     1
          Hello  1
*/

import java.util.*;

class MyString
{
    public void Frequency(String str)
    {
        int i = 0;

        String words[] = str.split(" ");

        for(i = 0; i < words.length; i++)
        {
            if(words[i].equals("0"))
            {
                continue;
            }
            int j = 0,iCount = 1;

            for(j = i + 1; j < words.length; j++)
            {
                if(words[i].equals(words[j]))
                {
                    iCount++;
                    words[j] = "0";
                }
            }
            System.out.println(words[i]+" "+iCount);
        }
    }
}

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        MyString obj = new MyString();
        obj.Frequency(str);

        sobj.close();
    }
}