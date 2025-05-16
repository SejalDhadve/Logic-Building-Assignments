//Write a program which accepts and print first 5 Multiples of N

#include <stdio.h>

void MultipleDisplay(int iNo)
{

    for(int iCnt = 1; iCnt <= 5; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d",iNo * iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}