/* Write a java program to print below pattern.
**********
****  ****
***   ***
**    **
*     *
*/

import java.util.*;

public class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0,j = 0;

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        for (i = iRow; i >= 1; i--) 
        {
            for(j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }

            int spaceCount = (iRow - i);

            for(j = 1; j <= spaceCount; j++) 
            {
                System.out.print(" ");
            }

            for(j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }
            System.out.println();
        }
        sobj.close();
    }
}