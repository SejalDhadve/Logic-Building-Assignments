/* Write a program which accepts one number and position from user and ON that bit.Return modified number.
  Input : 10   3
  Output : 14
*/ 

#include<iostream>
using namespace std;

typedef unsigned int UINT; 

UINT ONBit(UINT iNo,int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);
    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iLocation = 0,iRet = 0;

    cout<<"Enter the Number:";
    cin>>iValue;

    cout<<"Enter the Position:";
    cin>>iLocation;

    iRet = ONBit(iValue,iLocation);

    cout<<"Modified number is:"<<iRet<<"\n";

    return 0;
}