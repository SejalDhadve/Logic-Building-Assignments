//Write generic program to find  largest number from three numbers

#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2,T no3)
{
    T Max = no1;

    if(no2 > Max)
    {
        Max = no2;
    }
    if(no3 > Max)
    {
        Max = no3;
    }
    return Max;
}

int main()
{
    int iMax = Max(10,30,20); 
    cout<<"Max int is : "<<iMax<<"\n";

    float fMax = Max(10.5f,3.7f,8.9f); 
    cout<<"Max float is : "<<fMax<<"\n";

    return 0;
}