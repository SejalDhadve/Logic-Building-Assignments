//Write a program which accepts N from user and print all odd numbers up to N

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 1;

    for(iCnt = 1; iCnt < iNo; iCnt += 2)
    {
        printf("%d",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}