/*Write a program which accept one number from user and ON its First four bits.Return modified number
  Input : 73
  Output : 79
*/ 

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ONBit(UINT iNo)
{
    UINT iMask = 15;
    UINT iResult = 0;

    iResult = iNo | iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the number:";
    cin>>iValue;

    iRet = ONBit(iValue);

    cout<<"Modified Number is:"<<iRet<<"\n";

    return 0;
}