/*   Java program to print pyramid of characters using class
Enter Number : 5
            A
          A B A
        A B C B A
      A B C D C B A
    A B C D E D C B A
*/

import java.util.Scanner;

class Program1
{
    private int num;
    
    public void setNum(int num)
    {
        this.num = num;
    }

    public int getNum()
    {
        return this.num;
    }

    public void printAnswer()
    {
        int i = 0, j = 0;
        char ch = '\0';

        for(i = 1; i <= num; i++)
        {
            for(j = 1; j <= num - i; j++)
            {
                System.out.print("  ");
            }

            for(j = 1,ch = 'A'; j <= i; j++,ch++)
            {
                System.out.print(ch+" ");
            }

            for(j = i - 1,ch = (char)('A' + i - 2); j >= 1; j--,ch--)
            {
                System.out.print(ch+" ");
            }
            System.out.println();
        }
    }

    public void inputNum()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number :");
        int num = sc.nextInt();
        setNum(num);
    }
    public static void main(String A[])
    {
        Pattern2 ob = new Pattern2();
        ob.inputNum();
        ob.printAnswer();
    }
}