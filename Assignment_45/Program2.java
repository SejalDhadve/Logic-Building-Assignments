/*Write a program which accept matix from user and reverse the contents of each row.  
Input :  3  2  5  9
         4  3  2  2
         8  4  1  9
         3  9  7  5

Output : 9  5  2  3
         2  3  3  4
         9  1  4  8
         5  7  9  3
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

    public void ReverseRow()
    {
       int i = 0, j = 0;
       int temp = 0;


       for(i = 0; i < Arr.length; i++)
       {
          for(j = 0; j < Arr[i].length/2; j++)
          {
              temp = Arr[i][j];
              Arr[i][j] = Arr[i][Arr[i].length - 1 - j];
              Arr[i][Arr[i].length - 1 - j] = temp;     
          }
       }
          System.out.println("Matrix after reversing is : ");
          Display();  
    }
}

class Program2
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

        mobj.ReverseRow();
    }
}  