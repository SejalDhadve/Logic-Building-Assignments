/* Write a program which accepts one number from user and check whether 9th or 12th bit is ON or OFF.
  Input :257
  Output : true
*/ 

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 256;
    UINT iMask2 = 2048;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = iMask1 | iMask2;
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the Number:";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"Either 9th or 12th Bit is ON";
    }
    else
    {
        cout<<"Both 9th and 12th Bit is OFF";
    }

    return 0;
}