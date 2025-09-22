/* Write a java program which accepts number of rows and number of columns from user and display below pattern

Input :   iRow = 6       iCol = 6
Output:   1  2  3  4  5
          1  2        5
          1     3     5
          1        4  5
          1  2  3  4  5
 */

 import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow + 1; i++)
        {
            for(j = 1; j <= iCol + 1; j++)
            {
                if(i == 1 || i == iRow+1 || j == 1 || j == iCol+1 || i == j)
                {
                    System.out.print(j+"\t");
                }
                else
                {
                    System.out.print("\t");
                }
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