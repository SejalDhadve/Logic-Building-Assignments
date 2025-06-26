/* Write a program which accept one number from user and OFF 7th bit of that number if it is ON.Return modified number
 Input : 79
 Output : 15
 */

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OFFBit(UINT iNo)
{
    UINT iMask = 64;
    UINT iResult = 0;
    
    iMask = ~iMask;
    iResult = iNo & iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the number:";
    cin>>iValue;

    iRet = OFFBit(iValue);

    cout<<"Modified Number is:"<<iRet<<"\n";

    return 0;
}