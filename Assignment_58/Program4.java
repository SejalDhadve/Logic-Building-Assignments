// Java program to read and add two distances using class.

import java.util.*;

class Program4
{
    public static void main(String A[])
    {
        int feet1 = 0,inches1 = 0;
        int feet2 = 0,inches2 = 0;
        int totalFeet = 0,totalInches = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first distance:");

        System.out.print("Enter feet: ");
        feet1 = sobj.nextInt();

        System.out.print("Enter inches: ");
        inches1 = sobj.nextInt();

        System.out.println("Enter second distance:");

        System.out.print("Enter feet: ");
        feet2 = sobj.nextInt();

        System.out.print("Enter inches: ");
        inches2 = sobj.nextInt();

        totalFeet = feet1 + feet2;
        totalInches = inches1 + inches2;

        if (totalInches >= 12)
        {
            totalFeet = totalFeet + (totalInches / 12);
            totalInches = totalInches % 12;
        }

        System.out.println("Total distance is: ");

        System.out.println("Feet: "+totalFeet);
        
        System.out.println("Inches: "+totalInches);

        sobj.close();
    }
}