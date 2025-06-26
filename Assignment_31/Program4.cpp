/*Write a program which accept one number from user and toggle 7th & 10th bit of that number.Return modified number
  Input :  137
  Output : 713
*/ 

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 64;
    UINT iMask2 = 512;
    UINT iResult = 0;

    iResult = iNo ^ (iMask1 | iMask2);
    
    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the number:";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Modified Number is:"<<iRet<<"\n";

    return 0;
}