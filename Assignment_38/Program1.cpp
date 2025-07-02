//Write generic program to multiply two numbers

#include <iostream>
using namespace std; 

template <class T>

T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<"Integer Multiplication is : "<<iRet<<"\n";

    float fRet = Multiply(10.0f,20.0f);
    cout<<"Float Multiplication is : "<<fRet<<"\n";

    return 0;
} 