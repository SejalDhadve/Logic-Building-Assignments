/* Write Java Program which accept number of rows and number of columns from user and display below pattern.

Input :  iRow = 4      iCol = 5
Output:  1   2   3   4 
         5   6   7   8
         9  10  11  12
*/

import java.util.*;

class Pattern
{
    public void Pattern(int iRow,int iCol)
    {
        int i = 0, j = 0;
        int no = 1;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(no+"\t");
                no++;
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

        System.out.println("Enter the number of Rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1,iValue2);
    }
}