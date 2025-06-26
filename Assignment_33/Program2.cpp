/*Write a program which accepts two number from user and display position of common ON bits from that two numbers.
  Input : 10    15
  Output : 2     4
*/ 

#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
    UINT iPos = 1;
    UINT iCommon = 0;

    iCommon = iNo1 & iNo2;

    cout<<"Common ON bit positions are:";

    while(iCommon != 0)
    {
        if(iCommon & 1)
        {
            cout<<iPos<<" ";
        }
        iPos++;
        iCommon = iCommon >> 1;
    }
}

int main()
{
    UINT iValue1 = 0,iValue2 = 0;

    cout<<"Enter the First Number:";
    cin>>iValue1;

    cout<<"Enter the Second Number:";
    cin>>iValue2;

    CommonBits(iValue1,iValue2);    

    return 0;
}