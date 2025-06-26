/*Write a program which accepts one number,two positions from user and check whether bit at First or bit at second
position is ON or OFF
Input : 10  3  7
Output : false
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo,int iPos1,int iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iLocation1 = 0,iLocation2 = 0;
    bool bRet = false;

    cout<<"Enter the Number:";
    cin>>iValue;

    cout<<"Enter the Position:";
    cin>>iLocation1;

    cout<<"Enter the Position:";
    cin>>iLocation2;

    bRet = ChkBit(iValue,iLocation1,iLocation2);

    if(bRet == true)
    {
        cout<<"Either "<<iLocation1<<"th or"<<iLocation2<<"th Bit is ON";
    }
    else
    {
        cout<<"Both "<<iLocation1<<"th and "<<iLocation2<<"th Bits are OFF";
    }

    return 0;
}