// Write Java program to Transpose a Matrix.

import java.util.*;

public class Program5
{
    public static void main(String A[])
    {
        int row = 0,col = 0;
        int i = 0,j = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Input number of rows:");
        row = sobj.nextInt();

        System.out.print("Input number of cols:");
        col = sobj.nextInt();

        int a[][] = new int[row][col];

        System.out.println("Enter elements of matrix a:");
        for(i = 0;i < row;i++)
        {
            for(j = 0;j < col;j++)
            {
                System.out.print("Element ["+(i+1)+","+(j+1)+"]?");
                a[i][j]=sobj.nextInt();
            }
        }

        System.out.println("Matrix a:");
        for(i = 0;i < row;i++)
        {
            for(j = 0;j < col;j++)
            {
                System.out.print(a[i][j] +"\t");
            }
            System.out.print("\n");
        }
        System.out.println(":::Transpose Matrix:::");
        
        int transpose[][] = new int[col][row];

        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                transpose[j][i] = a[i][j];
            }
        }

        for(i = 0; i < col; i++)
        {
            for(j = 0; j < row; j++)
            {
                System.out.print(transpose[i][j]+"\t");
            }
            System.out.println();
        }
        sobj.close();
    }
}