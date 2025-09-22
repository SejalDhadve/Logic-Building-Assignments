// Java program to input a string from user and reverse each word of given string.

import java.util.Scanner;

class Program3
{
    String reverseWord(String inputString)
    {
        int i = 0,j = 0;

        String words[] = inputString.split(" ");
        String result = "";

        for (i = 0; i < words.length; i++)
        {
            String word = words[i];
            String rev = "";

            for (j = word.length() - 1; j >= 0; j--)
            {
                rev = rev + word.charAt(j);
            }
            result = result + rev;

            if (i < words.length - 1)
            {
                result = result + " ";
            }
        }
        return result;
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Input String :");
        String str = sobj.nextLine();

        ReverseEachWord robj = new ReverseEachWord();
        String reversedStr = robj.reverseWord(str);

        System.out.println("String with Reverese : "+reversedStr);
    }
}