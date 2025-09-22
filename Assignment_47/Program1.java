/* Write Java Program which accept number of rows and number of columns from user and display below pattern.

Input :  iRow = 4    iCol = 4
Output:  *  *  *
         *  *  *
         *  *  *
         *  *  *
*/

import java.util.*;

class Pattern
{
    public void Pattern(int iRow,int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1,iValue2);
    }
}