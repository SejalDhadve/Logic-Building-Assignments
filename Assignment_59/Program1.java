//Write a java program which Add two Matrices.

import java.util.*;

public class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0,j = 0;

        System.out.print("Enter number of rows: ");
        int rows = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int cols = sobj.nextInt();

        int[][] matrix1 = new int[rows][cols];
        int[][] matrix2 = new int[rows][cols];
        int[][] sum = new int[rows][cols];

        System.out.println("Enter elements of first matrix:");
        for (i = 0; i < rows; i++) 
        {
            for (j = 0; j < cols; j++)
            {
                matrix1[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Enter elements of second matrix:");
        for (i = 0; i < rows; i++) 
        {
            for (j = 0; j < cols; j++) 
            {
                matrix2[i][j] = sobj.nextInt();
            }
        }

        for(i = 0; i < rows; i++) 
        {
            for (j = 0; j < cols; j++) 
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        System.out.println("Sum of the matrices:");
        for(i = 0; i < rows; i++) 
        {
            for(j = 0;j < cols;j++) 
            {
                System.out.print(sum[i][j]+"\t");
            }
            System.out.println();
        }
        sobj.close();   
    }
}