//Write a program which checks whether 7th & 8th & 9th bit is ON or OFF.

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define true 1
#define false 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 64;
    UINT iMask2 = 128;
    UINT iMask3 = 256;
    UINT iMask = 0;

    UINT iResult = 0;

    iMask = iMask1 | iMask2 | iMask3;
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
        cout<<"7th,8th,9th bit is ON";
    }
    else
    {
        cout<<"Either 7th,8th,9th bit is OFF";
    }

    return 0;
}