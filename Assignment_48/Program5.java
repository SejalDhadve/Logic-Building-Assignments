/* Write Java Program which accept number of rows and number of columns from user and display below pattern.

Input :  Hello
Output:  H  
         H  e  
         H  e  l  
         H  e  l  l  
         H  e  l  l  o
         H  e  l  l  o
         H  e  l  l  
         H  e  l  
         H  e  
         H  
        
*/

import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int i = 0, j = 0;

        for(i = 0; i < str.length(); i++)
        {
            for(j = 0; j <= i; j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }
            System.out.println();
        }

        for(i = str.length() - 2; i >= 0; i--)
        {
            for(j = 0; j <= i; j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }
            System.out.println();
        }
    }
}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);
    }
}