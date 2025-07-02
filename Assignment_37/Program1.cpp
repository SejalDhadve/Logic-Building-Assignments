/*Complete below code snippet of below functions
1.SearchLast()
2.EvenCount()
3.OddCount()
4.SumAll()
*/

#include <iostream>
using namespace std;

class Array
{
protected:
    int *Arr;
    int size;

public:
    Array(int value = 10) 
    {
        cout << "Inside Constructor\n";
        this->size = value;
        this->Arr = new int[size];
    }

    Array(Array &ref) 
    {
        cout << "Inside copy constructor\n";
        this->size = ref.size;
        this->Arr = new int[this->size];

        for (int i = 0; i < size; i++) 
        {
            this->Arr[i] = ref.Arr[i];
        }
    }

    ~Array() 
    {
        cout << "Inside Destructor\n";
        delete[] Arr;
    }

    inline void Accept();
    inline void Display();
};
    void Array :: Accept()
    {
        cout<<"Please enter the values\n";

        for (int i = 0; i < this->size; i++) 
        {
            cin>>Arr[i];
        }
    }

    void Array :: Display()
    {
        cout<<"Elements are\n";

        for (int i = 0; i < this->size; i++) 
        {
            cout<<Arr[i]<<" ";
        }
        cout<<"\n";
    }

    class ArrSearch : public Array 
{
    public:
    ArrSearch(int no = 10) : Array(no)
    {}

    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};

int ArrSearch::SearchFirst(int value) 
{
    int i = 0;
    for (i = 0; i < size; i++) 
    {
        if (Arr[i] == value) 
        {
            break;
        }
    }
    if (i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::Frequency(int value) 
{
    int icnt = 0;
    for (int i = 0; i < size; i++) 
    {
        if (Arr[i] == value) 
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch::SearchLast(int value) 
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (Arr[i] == value) 
        {
            return i + 1;
        }
    }
    return -1;
}

int ArrSearch::EvenCount() 
{
    int icnt = 0;
    for (int i = 0; i < size; i++)
     {
        if (Arr[i] % 2 == 0)
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch::OddCount() 
{
    int icnt = 0;
    for (int i = 0; i < size; i++) 
    {
        if (Arr[i] % 2 != 0) 
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch::SumAll() 
{
    int i = 0;
    int iSum = 0;
    for (i = 0; i < size; i++) 
    {
        iSum =  iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    cout << "Inside main\n";

    ArrSearch sobj(5);
    sobj.Accept();
    sobj.Display();

    int iRet = sobj.Frequency(11);
    cout << "Frequency is: " << iRet << "\n";

    iRet = sobj.SearchFirst(11);
    cout << "First occurrence is: " << iRet << "\n";

    iRet = sobj.SearchLast(11);
    cout << "Last occurrence is: " << iRet << "\n";

    iRet = sobj.EvenCount();
    cout << "Even Count is: " << iRet << "\n";

    iRet = sobj.OddCount();
    cout << "Odd count is: " << iRet << "\n";

    iRet = sobj.SumAll();
    cout << "Sum of all elements is: " << iRet << "\n";

    return 0;
}