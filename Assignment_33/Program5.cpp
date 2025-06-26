/*Write a program which accepts one number from user and range of positions from user.Toggle all bits from that range
  Input : 897   9   13
  Toggle all bits from position 9 to 13 of input number i.e 897
*/ 

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = (iMask1 << iEnd) - 1;
    iMask2 = (iMask2 << (iStart - 1)) - 1;

    iMask = iMask1 ^ iMask2;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iStartLocation1 = 0,iEndLocation2 = 0,iRet = 0;

    cout<<"Enter the Number:";
    cin>>iValue;

    cout<<"Enter the StartRange:";
    cin>>iStartLocation1;

    cout<<"Enter the EndRange:";
    cin>>iEndLocation2;

    iRet = ToggleBitRange(iValue,iStartLocation1,iEndLocation2);

    cout<<"Modified number is:"<<iRet;

    return 0;
}