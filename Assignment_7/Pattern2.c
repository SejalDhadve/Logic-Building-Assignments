#include <stdio.h>

int DollarToINR(int iNo)
{
     int iINR = 0;

     iINR = iNo * 70;

     return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n",iRet);

    return 0;

}