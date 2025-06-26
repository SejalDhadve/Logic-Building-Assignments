/*Write a program which accepts one number and position from user and check whether bit at that position is ON or OFF
If bit is one return TRUE otherwise return FALSE
Input : 10   2
Output : True */

#include<iostream>
using namespace std;

typedef unsigned int UINT; 

bool ChkBit(UINT iNo,int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);
    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    UINT iValue = 0,iLocation = 0;
    bool bRet = false;

    cout<<"Enter the Number:";
    cin>>iValue;

    cout<<"Enter the Position:";
    cin>>iLocation;

    bRet = ChkBit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON";
    }
    else
    {
        cout<<"Bit is OFF";
    }
    return 0;
}