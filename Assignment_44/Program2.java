//Write a program which accept matrix and one number from user and return frequency of that number.

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
            System.out.println();
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

    public int Frequency(int iNo)
    {
       int iCount = 0;
        
       int i = 0, j = 0;

       for(i = 0; i < Arr.length; i++)
       {
           for(j = 0; j < Arr.length; j++)
           {
                if(Arr[i][j] == iNo)
                {
                    iCount++;
                }
           }
       }

       return iCount;
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

        System.out.println("Enter required number : ");
        int iNo = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

        int iRet = 0;

        iRet = mobj.Frequency(iNo);

        System.out.println("Frequency of elements is : "+iRet);

    }
}