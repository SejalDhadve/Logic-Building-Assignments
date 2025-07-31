/*Write a program which accept matix from user and display transpose of the matix.  
Input :  3  2  5  9
         4  3  2  2
         8  4  1  5
         3  9  7  5

Output : 3  4  8  3
         2  3  4  9
         5  2  1  7
         9  2  5  5
 */

import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix : ");

        Scanner sobj = new Scanner(System.in);

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void Transpose()
    {
       int i = 0, j = 0;

       System.out.println("Transposed matrix is : ");

       for(j = 0; j < Arr[0].length; j++)
       {
          for(i = 0; i < Arr.length; i++)
          {
               System.out.print(Arr[i][j] +"\t");
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

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

        mobj.Transpose();
    }
}  