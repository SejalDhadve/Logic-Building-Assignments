/* Write a java program which accept matrix from user and trace and normal of given matrix.
   Here trace of the matrix is the sum of the elements of the main diagonal ie the diagonal from the upper 
   left to the lower right of matrix. Normal of the matrix is the sqaure root of the sum of all the elements.
 */

 import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A,int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0,j = 0;

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
        System.out.println("Elements of matrix : ");

        int i = 0,j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void TraceAndNormal()
    {
        int trace = 0;
        int sum = 0;
        int i = 0,j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[0].length; j++)
            {
                sum = sum + (Arr[i][j] * Arr[i][j]);
            }
        }

        i = 0;
        while(i < Arr.length && i < Arr[0].length) 
        {
            trace = trace + Arr[i][i];
            i++;
        }

        double normal = Math.sqrt(sum);

        System.out.println("Trace of the matrix: "+trace);
        System.out.println("Normal of the matrix: "+normal);
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

        mobj.TraceAndNormal();
    }
}