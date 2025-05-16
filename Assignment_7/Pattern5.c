#include <stdio.h>

int OddFactorial(int);
int EvenFactorial(int);

int FactorialDiff(int iNo)
{
     int iEven = 0;
     int iOdd =0;

    iEven = EvenFactorial(iNo);
    iOdd =  OddFactorial(iNo);

    return iEven - iOdd;
}

    int EvenFactorial(int iNo)
{
     int iCnt = 0;
     int iFact =1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
       iFact = iFact * iCnt;
    }
    return iFact;
}

int OddFactorial(int iNo)
{
     int iCnt = 0;
     int iFact =1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
       iFact = iFact * iCnt;
    }
    return iFact;
}  


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf(" Factorial difference of number is %d\n",iRet);

    return 0;

}