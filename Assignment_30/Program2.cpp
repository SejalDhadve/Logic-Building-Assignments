//Write a program which checks whether 5th & 18th bit is ON or OFF.

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define true 1
#define false 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 16;
    UINT iMask2 = 131072;
    UINT iMask = 0;

    UINT iResult = 0;

    iMask = iMask1 | iMask2;
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
        cout<<"5th and 18th bit is ON";
    }
    else
    {
        cout<<"Either 5th or 18th bit is OFF";
    }

    return 0;
}