/* Write a java program to print below pattern.
    * * * * * 
     * * * *
      * * *
       * *
        *  
*/

import java.util.*;

public class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0,j = 0,k = 0;

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        for (i = iRow; i >= 1; i--) 
        {
            for (j = iRow; j > i; j--) 
            {
                System.out.print(" ");
            }

            for (k = 1; k <= i; k++) 
            {
                System.out.print("* ");
            }
            System.out.println();
        }
        sobj.close();
    }
}