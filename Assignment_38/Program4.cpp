//Write generic program to accept N values from user and return largest value.

#include<iostream>
using namespace std;

template <class T>
T Max(T * arr, int iSize)
{
    T max = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] > max)
        {
        max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    int iRet = Max(arr, 5); 
    cout<<"Largest value is : "<<iRet<<"\n";

    float fRet = Max(brr, 4); 
    cout<<"Largest value is : "<<fRet<<"\n";

    return 0;
}