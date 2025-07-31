/*Write a program which accept matix from user and check whether the matrix is identity matrix or not.  
Input :  1  0  0  0
         0  1  0  0
         0  0  1  0
         0  0  0  1

Output : True
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

    public boolean ChkIdentity()
    {
         int i = 0, j = 0;
         
         if(Arr.length != Arr[0].length)
         {
            return false;
         }

         for(i = 0; i < Arr.length; i++)
         {
            for(j= 0; j < Arr.length; j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] != 1)
                    {
                        return false;
                    }
                }
                else
                {
                    if(Arr[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
         }
         return true;
    }
}

class Program4
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

        boolean bRet = false;

        bRet = mobj.ChkIdentity();

        if(bRet == true)
        {
            System.out.println("The matrix is identity matrix");
        }
        else
        {
            System.out.println("The matrix is not identity matrix");

        }
    }
}  