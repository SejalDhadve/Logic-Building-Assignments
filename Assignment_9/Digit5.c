//Write a Program which accept number from user and count frequency of such a digit which are less than 6.

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount; 
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}