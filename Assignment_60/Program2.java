// Write a java program to multiply two Matrices.

import java.util.*;

public class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0,j = 0;

        System.out.print("Enter number of rows of first matrix: ");
        int iRow1 = sobj.nextInt();

        System.out.print("Enter number of columns of first matrix (and rows of second matrix): ");
        int iCol1 = sobj.nextInt();

        System.out.print("Enter number of rows of second matrix: ");
        int iCol2 = sobj.nextInt();

        int[][] matrix1 = new int[iRow1][iCol1];
        int[][] matrix2 = new int[iCol1][iCol2];
        int[][] result = new int[iRow1][iCol2];

        System.out.println("Enter elements of first matrix:");
        for(i = 0; i < iRow1; i++) 
        {
            for(j = 0; j < iCol1; j++) 
            {
                matrix1[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Enter elements of second matrix:");
        for(i = 0; i < iCol1; i++) 
        {
            for(j = 0; j < iCol2; j++) 
            {
                matrix2[i][j] = sobj.nextInt();
            }
        }

        for(i = 0; i < iRow1; i++) 
        {
            for(j = 0; j < iCol2; j++) 
            {
                result[i][j] = 0;
                for (int k = 0; k < iCol1; k++) 
                {
                    result[i][j] = result[i][j] + (matrix1[i][k] * matrix2[k][j]);
                }
            }
        }

        System.out.println("Multiplication of the matrices:");
        for(i = 0; i < iRow1; i++) 
        {
            for(j = 0; j < iCol2; j++) 
            {
                System.out.print(result[i][j]+"\t");
            }
            System.out.println();
        }
        sobj.close();   
    }
}