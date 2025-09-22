/*  Write a java program which accepts expression from user. Check Whether the expression is balanced parenthesised or not.

Input :   (a+(f-g)*2(a-d))
Output :  True

Input :   (a+(f-g)*2(a-d)
Output :  False
*/

import java.util.*;

class MyString
{
    public boolean Expression(String str)
    {
        int i = 0,iCount = 0;

        for(i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch == '(')
            {
                iCount++;
            }
            else if(ch == ')')
            {
                iCount--;
                if(iCount < 0)
                {
                    return false;
                }
            }
        }
        return iCount == 0;
    }
}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the expression : ");
        String str = sobj.nextLine();

        MyString obj = new MyString();
        boolean bRet = obj.Expression(str);

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