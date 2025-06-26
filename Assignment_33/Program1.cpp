/*Write a program which accepts one number from user and count number of ON (1) bits in it without using % and /
operator
Input : 11
Output : 3
*/

#include<iostream>
using namespace std;

int CheckOne(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo & 1;
        iCount = iCount + iDigit;
        iNo = iNo >> 1;
    }
    return iCount;
}

int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter the Number:";
    cin>>iValue;

    iRet = CheckOne(iValue);

    cout<<"Number of ON bits are:"<<iRet<<"\n";

    return 0;
}