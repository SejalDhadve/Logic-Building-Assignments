/* Write a program which accepts one number from user and toggle contents of First and last nibble of
the number.Return modified number.(Nibble is a group of four bits) */

#include<iostream>
using namespace std;

typedef unsigned int UINT; 

UINT ToggleBit(UINT iNo)
{
    UINT iMaskFirstNibble = 15 << 28;
    UINT iMaskLastNibble = 15;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = iMaskFirstNibble | iMaskLastNibble;
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iRet = 0;

    cout<<"Enter the Number:";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Modified number is:"<<iRet<<"\n";

    return 0;
}