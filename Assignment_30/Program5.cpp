//Write a program which checks whether first and last bit is ON or OFF First bit means bit number 1 and last bit means bit number 32

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define true 1
#define false 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 2147483648;
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
        cout<<"First and Last bit is ON";
    }
    else
    {
        cout<<"Either First or Last bit is OFF";
    }

    return 0;
}