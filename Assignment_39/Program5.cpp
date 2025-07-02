/*Write generic program to accept N values and reverse the contents.

Input : 10  20  30  10  30  40  10  40  10

Output : 10  40  10  40  30  10  30  20  10
*/

#include <iostream>
using namespace std;

template <class T>

void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    T Rev;

    while(iStart < iEnd)
    {
        Rev = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = Rev;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    cout<<"Input : ";
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";              //10  20  30  10  30  40  10  40  10
    }
    cout<<"\n";

    Reverse(arr,9);
    
    cout<<"Output : ";
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";            //10  40  10  40  30  10  30  20  10
    }
    cout<<"\n";
    
    return 0;
}