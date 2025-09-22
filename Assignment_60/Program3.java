// Write a java program which prints fibonacci series.

import java.util.*;

public class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;

        System.out.print("Enter number of terms: ");
        int n = sobj.nextInt();

        int first = 0, second = 1;

        System.out.println("Fibonacci series up to "+ n +" terms:");

        for(i = 1; i <= n; i++) 
        {
            System.out.print(first+" ");

            int next = first + second;
            first = second;
            second = next;
        }
        sobj.close();
    }
}