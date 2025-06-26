//Write a program which checks whether 15th bit is ON or OFF.

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define true 1
#define false 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 16384;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return(iResult == iMask);
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = false;

    cout<<"Enter the number:";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"15th bit is ON";
    }
    else
    {
        cout<<"15th bit is OFF";
    }

    return 0;
}