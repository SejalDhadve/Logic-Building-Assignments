//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Project     :  Generalized Data Structure Library (GDSL).
// File        :  GDSL.cpp
// Description :  This project is a C++ library of generic data structures that provides object
//                oriented implementations of both linear & non-linear data structures.
// Author      :  Sejal Vishal Dhadve
// Date        :  14/09/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

// ----------------------------------- Queue ------------------------------------------

///////////////////////////////////////////////////////////////////////////////////////
//
// Class       : QueueX
// Description : Generic implementation of Queue
// Author      : Sejal Vishal Dhadve
//
//////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct Queuenode
{
    T data;                                             // Data of generic type
    struct Queuenode<T> * next;                         // Pointer to the next node
};

template<class T>
class QueueX
{
    private:
    struct Queuenode<T> *first;                        // Pointer to the first node (front)
    int iCount;                                        // Stores number of elements in Queue

    public:
    QueueX();
    ~QueueX();
    void Enqueue(T);
    T Dequeue();
    void Display();
    int Count();
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	QueueX
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Constructor of class QueueX.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
QueueX<T> :: QueueX()
{
    first = NULL;
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~QueueX
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Destructor of class QueueX.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
QueueX<T> :: ~QueueX()
{
    struct Queuenode<T> * temp = NULL;

    while(first != NULL)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Enqueue
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Adds a new element at the rear (end) of the Queue.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void QueueX<T> :: Enqueue(T no)
{
    struct Queuenode<T> * temp = NULL;
    struct Queuenode<T> * newn = NULL;

    newn = new Queuenode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Dequeue
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Removes an element from the front of the Queue.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T QueueX<T> :: Dequeue()
{
    struct Queuenode<T> *temp = NULL;
    T value = 0;

    if(first == NULL)
    {
        cout<<"Unable to remove as Queue is empty\n";
        return T();
    }
    else 
    {
        temp = first;
        value = temp->data;

        first = first->next;
        delete temp;

        iCount--;

        return value;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all elements in the Queue.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void QueueX<T> :: Display()
{
    struct Queuenode<T> * temp = NULL;

    temp = first;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the total number of elements in the Queue.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int QueueX<T> :: Count()
{
    return iCount;
}

// ----------------------------------- Stack ------------------------------------------

///////////////////////////////////////////////////////////////////////////////////////
//
// Class       : StackX
// Description : Generic implementation of Stack
// Author      : Sejal Vishal Dhadve
//
///////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct Stacknode
{
    T data;                                                  // Data of generic type
    struct Stacknode<T> * next;                              // Pointer to the next node
};

template<class T>
class StackX
{
    private:
    struct Stacknode<T> *first;                              // Pointer to the first node (front)
    int iCount;                                              // Stores number of elements in Stack

    public:
    StackX();
    ~StackX();
    void Push(T);
    T Pop();
    void Display();
    int Count();
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	StackX
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Constructor of class StackX.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
StackX<T> :: StackX()
{
    first = NULL;
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~StackX
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Destructor of class StackX.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
StackX<T> :: ~StackX()
{
    struct Stacknode<T> * temp = NULL;

    while(first != NULL)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Push
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Inserts a new element onto the top of the Stack.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void StackX<T> :: Push(T no)
{
    struct Stacknode<T> * newn = NULL;

    newn = new Stacknode<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next = first;
    first = newn;

    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Pop
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Removes and returns the top element from the Stack.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T StackX<T> :: Pop()
{
    struct Stacknode<T> *temp = NULL;
    T value = 0;

    if(first == NULL)
    {
        cout<<"Unable to remove as Stack is empty\n";
        return T();
    }
    else 
    {
        temp = first;
        value = temp->data;

        first = first->next;
        delete temp;

        iCount--;

        return value;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all elements in the Stack.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void StackX<T> :: Display()
{
    struct Stacknode<T> * temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the total number of elements in the Stack.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int StackX<T> :: Count()
{
    return iCount;
}

// ------------------------- Singly Linear Linked List -------------------------------

///////////////////////////////////////////////////////////////////////////////////////
//
// Class :       SinglyLL
// Description : Generic Implementation of Singly Linear linked list.
// Author :      Sejal Vishal Dhadve
//
//////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct SinglyLLnode
{
    T data;                                                               // Stores value of the node
    struct SinglyLLnode<T> *next;                                         // Pointer to the next node
};

template<class T>
class SinglyLL
{
    private:
    struct SinglyLLnode<T> * first;                                      // Head pointer of linked list
    int iCount;                                                          // Count of total nodes

    public:
    // Constructor / Destructor
    SinglyLL();
    ~SinglyLL();

    // Generic linked list operations
    void Display();
    int Count();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    int SearchFirstOccurence(T);
    int SearchLastOccurence(T);
    int SearchAllOccurence(T);
    T Addition();
    T LargestElement();
    T SmallestElement();
    T SecMaximum();

    // Integer-only functions (Works only if T = int)
    void DisplayPerfect();
    void DisplayPrime();
    T AdditionEven();
    void SumDigit();
    void Reverse();
    void DisplayPalindrome();
    void DisplayProduct();
    void DisplaySmall();
    void DisplayLarge();
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SinglyLL
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Constructor of class Singly Linear Linked List.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
SinglyLL<T> :: SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~SinglyLL
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Destructor of class Singly Linear Linked List.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
SinglyLL<T> :: ~SinglyLL()
{
    struct SinglyLLnode<T>* temp = NULL;
    while (first != NULL)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
}

// ------------------------------- Generic Functions -------------------------------------

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Inserts a new node at the beginning of the Singly Linear 
//                              Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct SinglyLLnode<T> * newn = NULL;

    newn = new struct SinglyLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        newn->next = first;
        first = newn;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertLast
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Inserts a new node at the end of the Singly Linear 
//                              Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: InsertLast(T no)
{
    struct SinglyLLnode<T> * temp = NULL;
    struct SinglyLLnode<T> * newn = NULL;

    newn = new struct SinglyLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all elements of Singly Linear linked list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: Display()
{
    struct SinglyLLnode<T> * temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the number of nodes in the Singly Linear Linked
//                              List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyLL<T> :: Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Deletes the first node of the Singly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: DeleteFirst()
{
    struct SinglyLLnode<T> * temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;
        first = first->next;
        delete temp;
    }
    iCount--;
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteLast
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Deletes the last node of the Singly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: DeleteLast()
{
    struct SinglyLLnode<T> * temp = NULL;
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no,int pos
//	Description             :   Inserts a new node at the specified position in Singly 
//                              Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: InsertAtPos(T no,int pos)
{
    struct SinglyLLnode<T> * temp = NULL;
    struct SinglyLLnode<T> * newn = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > iCount+1)
    {
        cout<<"Invaid Position";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        temp = first;

        for(iCnt = 1;iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }

        newn = new struct SinglyLLnode<T>;

        newn->data = no;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   int pos
//	Description             :   Deletes a node from the specified position in Singly 
//                              Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: DeleteAtPos(int pos)
{
    struct SinglyLLnode<T> * temp = NULL;
    int iCnt = 0;
    struct SinglyLLnode<T> * target = NULL;

    if(pos < 1 || pos > iCount)
    {
        cout<<"Invaid Position";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(iCnt = 1;iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        delete target;

        iCount--;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchFirstOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Searches for the first occurrence of an element in the
//                              Singly Linear Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyLL<T> :: SearchFirstOccurence(T no)
{
    struct SinglyLLnode<T> * temp = NULL;

    int iPos = 1;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            return iPos;
        }
        iPos++;
        temp = temp -> next;
    }
    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchLastOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Searches for the last occurrence of an element in the 
//                              Singly Linear Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyLL<T> :: SearchLastOccurence(T no)
{
    struct SinglyLLnode<T> * temp = NULL;

    int iPos = 1;
    int iLastPos = -1;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            iLastPos = iPos;
        }
        iPos++;
        temp = temp -> next;
    }
    return iLastPos;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchAllOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Counts total occurrences of an element in the Singly
//                              Linear Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyLL<T> :: SearchAllOccurence(T no)
{
    struct SinglyLLnode<T> * temp = NULL;

    int iCountOcc = 0;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            iCountOcc++;
        }
        temp = temp->next;
    }
    return iCountOcc;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Addition
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates the sum of all elements present in the Singly
//                              Linear Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyLL<T> :: Addition()
{
    struct SinglyLLnode<T> * temp = NULL;

    T iSum = 0;
    temp = first;

    while(temp != NULL)
    {
        iSum = iSum + (temp->data);
        temp = temp->next;
    }
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	LargestElement
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the largest element from the Singly Linear
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyLL<T> :: LargestElement()
{
    struct SinglyLLnode<T> * temp = NULL;

    temp = first;
    T iLargest = temp->data;

    while(temp != NULL)
    {
        if((temp->data) > iLargest)
        {
            iLargest = temp->data;
        }
        temp = temp -> next;
    }
    return iLargest;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SmallestElement
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the smallest element from the Singly Linear
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyLL<T> :: SmallestElement()
{
    struct SinglyLLnode<T> * temp = NULL;

    temp = first;
    T iSmallest = temp->data;

    while(temp != NULL)
    {
        if((temp->data) < iSmallest)
        {
            iSmallest = temp->data;
        }
        temp = temp -> next;
    }
    return iSmallest;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SecMaximum
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the second Maximum element from the Singly Linear
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyLL<T> :: SecMaximum()
{
   struct SinglyLLnode<T> * temp = NULL;

   temp = first;
   T iMax1 = temp->data;
   T iMax2 = temp->data;

   while(temp != NULL)
   {
        if((temp->data) > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = temp->data;
        }
        else if(((temp->data) > iMax2) && ((temp->data) != iMax1))
        {
            iMax2 = temp->data;
        }
        temp = temp -> next;
   }
   return iMax2;
}

// -------------------------- Integer-Specific Functions ---------------------------------

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPerfect
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all perfect numbers from the singly linear 
//                              linked list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: DisplayPerfect()
{
    struct SinglyLLnode<T> * temp = NULL;

    int iCnt = 0;
    int iSum = 0;
    temp = first;
    
    cout<<"Perfect numbers in Linked List are:";

    while(temp != NULL)
    {
        iSum = 0;

        for(iCnt = 1;iCnt < temp->data;iCnt++)
        {
            if((temp->data % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPrime
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all prime numbers from the singly linear linked 
//                              list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: DisplayPrime()
{
    struct SinglyLLnode<T> * temp = NULL;

    int i = 0;
    int iPrime = 0;
    temp = first;

    cout<<"Prime numbers in Linked List are:";

    while(temp != NULL)
    {
        iPrime = 0;

        for(i = 1;i <= temp->data;i++)
        {
            if((temp->data % i) == 0)
            {
                iPrime++;
            }
        }
        if(iPrime == 2)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	AdditionEven
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates and returns the sum of all the even elements 
//                              present in the Singly Linear Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyLL<T> :: AdditionEven()
{
    struct SinglyLLnode<T> * temp = NULL;

    T iSum = 0;
    temp = first;

    while(temp != NULL)
    {
        if((temp->data) % 2 == 0)
        {
            iSum = iSum + (temp->data);
        }
        temp = temp->next;
    }
    return iSum;   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SumDigit
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates the sum of its digits for each integer element
//                              in Singly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: SumDigit()
{
    struct SinglyLLnode<T> * temp = NULL;

    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Addition of Digits of Element from linked list are:";

    while(temp != NULL)
    {
        iSum = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        cout<<iSum<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Reverse
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Reverses each integer element from Singly Linear Linked
//                              List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: Reverse()
{
    struct SinglyLLnode<T> * temp = NULL;

    int iRev = 0;
    temp = first;

    cout<<"Reversed each Element of linked list are:";

    while(temp != NULL)
    {
        iRev = 0;
        int iTemp = temp->data;

        while(iTemp != 0)
        {
            iRev = (iRev * 10) + (iTemp % 10);
            iTemp = iTemp / 10;
        }
        cout<<"|"<<iRev<<"| -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPalindrome
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays palindrome elements present in the Singly 
//                              Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: DisplayPalindrome()
{
    struct SinglyLLnode<T> * temp = NULL;

    int iDigit = 0;
    int iRev = 0;
    int iNo = 0;
    temp = first;

    cout<<"Palindrome elements from linked list are:";

    while(temp != NULL)
    {
        iRev = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev  = (iRev * 10) + iDigit;
            iNo = iNo / 10;

        }
        if(iRev == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayProduct
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays product of digits of each element in Singly Linear
//                              Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: DisplayProduct()
{
    struct SinglyLLnode<T> * temp = NULL;

    int iDigit = 0;
    int iProduct = 1;
    int iNo = 0;
    temp = first;

    cout<<"Product of digits of each element in Linked list:";

    while(temp != NULL)
    {
        iNo = temp->data;
        iProduct = 1;

        if(iNo == 0)
        {
            cout<<"1\t";
        }
        else
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit != 0)
                {
                    iProduct = iProduct * iDigit;
                }
                iNo = iNo / 10;
            }
            cout<<iProduct<<"\t";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplaySmall
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays the smallest digit from each integer element 
//                              of the Singly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: DisplaySmall()
{
    struct SinglyLLnode<T> * temp = NULL;

    int iSmall = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Smallest digits of all digits of all element from linked list:";

    while(temp != NULL)
    {
        iSmall = 9;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNo = iNo / 10;
        }
        cout<<iSmall<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayLarge
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays the largest digit from each integer element 
//                              of the Singly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyLL<T> :: DisplayLarge()
{
    struct SinglyLLnode<T> * temp = NULL;

    int iLarge = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Largest digits of all digits of all element from linked list:";

    while(temp != NULL)
    {
        iLarge = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iNo = iNo / 10;
        }
        cout<<iLarge<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}

// ------------------------- Singly Circular Linked List -------------------------------

///////////////////////////////////////////////////////////////////////////////////////
//
// Class :       SinglyCLL
// Description : Generic Implementation of Singly Circular linked list
// Author :      Sejal Vishal Dhadve
//
///////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct SinglyCLLnode
{
    T data;                                                        // Stores value of the node
    struct SinglyCLLnode<T> *next;                                 // Pointer to the next node
};

template<class T>
class SinglyCLL
{
    private:
    struct SinglyCLLnode<T> * first;                                // Head pointer of linked list
    struct SinglyCLLnode<T> * last;                                 // Tail pointer of linked list
    int iCount;                                                     // Count of total nodes

    public:
    // Constructor / Destructor
    SinglyCLL();
    ~SinglyCLL();

    // Generic linked list operations
    void Display();
    int Count();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    int SearchFirstOccurence(T);
    int SearchLastOccurence(T);
    int SearchAllOccurence(T);
    T Addition();
    T LargestElement();
    T SmallestElement();
    T SecMaximum();

    // Integer-only functions (Works only if T = int)
    void DisplayPerfect();
    void DisplayPrime();
    T AdditionEven();
    void SumDigit();
    void Reverse();
    void DisplayPalindrome();
    void DisplayProduct();
    void DisplaySmall();
    void DisplayLarge();
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SinglyCLL
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Constructor of class Singly Circular Linked List.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
SinglyCLL<T> :: SinglyCLL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~SinglyCLL
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Destructor of class Singly Circular Linked List.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
SinglyCLL<T> :: ~SinglyCLL()
{
    struct SinglyCLLnode<T>* temp = NULL;

    if (first != NULL)
    {
        last->next = NULL;

        while (first != NULL)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
    }
    first = NULL;
    last = NULL;
}

// ------------------------------- Generic Functions -------------------------------------

/////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Inserts a new node at the beginning of the Singly Circular 
//                              Linked List.
//	Returns					:   void
//
/////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: InsertFirst(T no)
{
    struct SinglyCLLnode<T> * newn = NULL;

    newn = new struct SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        newn->next = first;
        first = newn;
        last->next = first;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertLast
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Inserts a new node at the end of the Singly Circular 
//                              Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: InsertLast(T no)
{
    struct SinglyCLLnode<T> * newn = NULL;

    newn = new struct SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        last->next = newn;
        last = newn;
        last->next = first;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Deletes the first node of the Singly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last -> next;
        last -> next = first;
    }
    iCount--;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteLast
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Deletes the last node of the Singly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: DeleteLast()
{
    struct SinglyCLLnode<T> * temp = NULL;

    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while(temp->next != last)
        {
            temp = temp -> next;
        }
        delete last;
        last = temp;

        last->next = first;
    }   
    iCount--;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all elements of Singly Circular linked list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: Display()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }

    struct SinglyCLLnode<T> * temp = NULL;

    temp = first;

    do
    {
        cout<<"|"<<temp->data<<"| ->";
        temp = temp->next;
    } while(temp != first);
    
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the number of nodes in the Singly Circular Linked
//                              List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyCLL<T> :: Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   int pos
//	Description             :   Deletes a node from the specified position in Singly 
//                              Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: DeleteAtPos(int pos)
{
    struct SinglyCLLnode<T> * temp = NULL;
    struct SinglyCLLnode<T> * target = NULL;
    int i = 0;

    if((pos < 1) || (pos > iCount))
    {
        cout<<"Invalid Position";
        return;
    }
    
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1; i < pos-1;i++)
        {
            temp = temp-> next;
        }
        target = temp->next;
        temp->next = target -> next;
        delete target;
        iCount--;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no,int pos
//	Description             :   Inserts a new node at the specified position in Singly 
//                              Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: InsertAtPos(T no,int pos)
{
    struct SinglyCLLnode<T> * temp = NULL;
    struct SinglyCLLnode<T> * newn = NULL;
    int i = 0;

    if((pos < 1) || (pos > iCount+1))
    {
        cout<<"Invalid Position";
        return;
    }
    
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new struct SinglyCLLnode<T>;

        newn->data = no;
        newn->next = NULL;

        temp = first;

        for(i = 1;i < pos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchFirstOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Searches for the first occurrence of an element in the
//                              Singly Circular Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyCLL<T> :: SearchFirstOccurence(T no)
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iPos = 1;
    temp = first;

    do
    {
        if(temp->data == no)
        {
            return iPos;
        }
        temp = temp -> next;
        iPos++;
    }while(temp != first);

    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchLastOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Searches for the last occurrence of an element in the 
//                              Singly Circular Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyCLL<T> :: SearchLastOccurence(T no)
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iPos = 1;
    int iLastPos = -1;
    temp = first;

    do
    {
        if(temp->data == no)
        {
            iLastPos = iPos;
        }
        temp = temp -> next;
        iPos++;
    }while(temp != first);

    return iLastPos;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchAllOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Counts total occurrences of an element in the Singly
//                              Circular Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyCLL<T> :: SearchAllOccurence(T no)
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iCountOcc = 0;
    temp = first;

    do
    {
        if(temp->data == no)
        {
            iCountOcc++;
        }
        temp = temp->next;
    }while(temp != first);

    return iCountOcc;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Addition
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates the sum of all elements present in the Singly
//                              Circular Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyCLL<T> :: Addition()
{
    struct SinglyCLLnode<T> * temp = NULL;

    T iSum = 0;
    temp = first;

    do
    {
        iSum = iSum + (temp->data);
        temp = temp->next;
    }while(temp != first);

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	LargestElement
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the largest element from the Singly Circular
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyCLL<T> :: LargestElement()
{
    struct SinglyCLLnode<T> * temp = NULL;

    temp = first;
    T iLargest = temp->data;

    do
    {
        if((temp->data) > iLargest)
        {
            iLargest = temp->data;
        }
        temp = temp -> next;
    }while(temp != first);

    return iLargest;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SmallestElement
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the smallest element from the Singly Circular
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyCLL<T> :: SmallestElement()
{
    struct SinglyCLLnode<T> * temp = NULL;

    temp = first;
    T iSmallest = temp->data;

    do
    {
        if((temp->data) < iSmallest)
        {
            iSmallest = temp->data;
        }
        temp = temp -> next;
    }while(temp != first);

    return iSmallest;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SecMaximum
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the second Maximum element from the Singly Circular
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyCLL<T> :: SecMaximum()
{
   struct SinglyCLLnode<T> * temp = NULL;

   temp = first;
   T iMax1 = temp->data;
   T iMax2 = temp->data;

   do
   {
        if((temp->data) > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = temp->data;
        }
        else if(((temp->data) > iMax2) && ((temp->data) != iMax1))
        {
            iMax2 = temp->data;
        }
        temp = temp -> next;
   }while(temp != first);

   return iMax2;
}

// -------------------------- Integer-Specific Functions ---------------------------------

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPerfect
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all perfect numbers from the singly Circular 
//                              linked list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: DisplayPerfect()
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iCnt = 0;
    int iSum = 0;
    temp = first;
    
    cout<<"Perfect numbers in Linked List are:";

    do
    {
        iSum = 0;

        for(iCnt = 1;iCnt < temp->data;iCnt++)
        {
            if((temp->data % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPrime
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all prime numbers from the singly Circular linked 
//                              list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: DisplayPrime()
{
    struct SinglyCLLnode<T> * temp = NULL;

    int i = 0;
    int iPrime = 0;
    temp = first;

    cout<<"Prime numbers in Linked List are:";

    do
    {
        iPrime = 0;

        for(i = 1;i <= temp->data;i++)
        {
            if((temp->data % i) == 0)
            {
                iPrime++;
            }
        }
        if(iPrime == 2)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	AdditionEven
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates and returns the sum of all the even elements 
//                              present in the Singly Circular Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T SinglyCLL<T> :: AdditionEven()
{
    struct SinglyCLLnode<T> * temp = NULL;

    T iSum = 0;
    temp = first;

    do
    {
        if((temp->data) % 2 == 0)
        {
            iSum = iSum + (temp->data);
        }
        temp = temp->next;
    }while(temp != first);

    return iSum;   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SumDigit
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates the sum of its digits for each integer element
//                              in Singly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: SumDigit()
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Addition of Digits of Element from linked list are:";

    do
    {
        iSum = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        cout<<iSum<<"\t";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Reverse
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Reverses each integer element from Singly Circular Linked
//                              List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: Reverse()
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iRev = 0;
    temp = first;

    cout<<"Reversed each Element of linked list are:";

    do
    {
        iRev = 0;
        int iTemp = temp->data;

        while(iTemp != 0)
        {
            iRev = (iRev * 10) + (iTemp % 10);
            iTemp = iTemp / 10;
        }
        cout<<"|"<<iRev<<"| -> ";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPalindrome
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays palindrome elements present in the Singly 
//                              Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: DisplayPalindrome()
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iDigit = 0;
    int iRev = 0;
    int iNo = 0;
    temp = first;

    cout<<"Palindrome elements from linked list are:";

    do
    {
        iRev = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev  = (iRev * 10) + iDigit;
            iNo = iNo / 10;

        }
        if(iRev == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayProduct
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays product of digits of each element in Singly 
//                              Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: DisplayProduct()
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iDigit = 0;
    int iProduct = 1;
    int iNo = 0;
    temp = first;

    cout<<"Product of digits of each element in Linked list:";

    do
    {
        iNo = temp->data;
        iProduct = 1;

        if(iNo == 0)
        {
            cout<<"1\t";
        }
        else
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit != 0)
                {
                    iProduct = iProduct * iDigit;
                }
                iNo = iNo / 10;
            }
            cout<<iProduct<<"\t";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplaySmall
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays the smallest digit from each integer element 
//                              of the Singly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: DisplaySmall()
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iSmall = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Smallest digits of all digits of all element from linked list:";

    do
    {
        iSmall = 9;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNo = iNo / 10;
        }
        cout<<iSmall<<" ";
        temp = temp -> next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayLarge
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays the largest digit from each integer element 
//                              of the Singly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void SinglyCLL<T> :: DisplayLarge()
{
    struct SinglyCLLnode<T> * temp = NULL;

    int iLarge = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Largest digits of all digits of all element from linked list:";

    do
    {
        iLarge = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iNo = iNo / 10;
        }
        cout<<iLarge<<" ";
        temp = temp -> next;
    }while(temp != first);

    cout<<"\n";
}

// ------------------------- Doubly Linear Linked List -------------------------------

///////////////////////////////////////////////////////////////////////////////////////
//
// Class :       DoublyLL
// Description : Generic Implementation of Doubly linear linked list
// Author :      Sejal Vishal Dhadve
//
//////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct DoublyLLnode
{
    T data;                                                        // Stores value of the node
    struct DoublyLLnode<T> *next;                                  // Pointer to the next node
    struct DoublyLLnode<T> *prev;                                  // Pointer to the previous node
};

template<class T>
class DoublyLL
{
    private:
    struct DoublyLLnode<T> * first;                                // Head pointer of linked list
    int iCount;                                                    // Count of total nodes

    public:
    // Constructor / Destructor
    DoublyLL();
    ~DoublyLL();

    // Generic linked list operations
    void Display();
    int Count();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    int SearchFirstOccurence(T);
    int SearchLastOccurence(T);
    int SearchAllOccurence(T);
    T Addition();
    T LargestElement();
    T SmallestElement();
    T SecMaximum();

    // Integer-only functions (Works only if T = int)
    void DisplayPerfect();
    void DisplayPrime();
    T AdditionEven();
    void SumDigit();
    void Reverse();
    void DisplayPalindrome();
    void DisplayProduct();
    void DisplaySmall();
    void DisplayLarge();
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DoublyLL
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   NONE
//	Description             :   This is Constructor of class Doubly Linear Linked List.
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
DoublyLL<T> :: DoublyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~DoublyLL
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   NONE
//	Description             :   This is Destructor of class Doubly Linear Linked List.
//	Returns					:   NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
DoublyLL<T> :: ~DoublyLL()
{
    struct DoublyLLnode<T>* temp = NULL;
    while (first != NULL)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
}

// ------------------------------- Generic Functions -------------------------------------

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Inserts a new node at the beginning of the Doubly Linear 
//                              Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: InsertFirst(T no)
{
    struct DoublyLLnode<T> * newn = new struct DoublyLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertLast
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Inserts a new node at the end of the Doubly Linear 
//                              Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: InsertLast(T no)
{
    struct DoublyLLnode<T> * temp = NULL;
    struct DoublyLLnode<T> * newn = new struct DoublyLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all elements of Doubly Linear linked list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: Display()
{
    struct DoublyLLnode<T> * temp = NULL;

    temp = first;

    cout<<"NULL<->";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|<->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the number of nodes in the Doubly Linear Linked
//                              List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyLL<T> :: Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Deletes the first node of the Doubly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        first = first->next;
        first->prev = NULL;
    }
    iCount--;
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteLast
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Deletes the last node of the Doubly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: DeleteLast()
{
    struct DoublyLLnode<T> * temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else 
    {
        temp = first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
    }
    iCount--;
    cout<<"\n";   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no,int pos
//	Description             :   Inserts a new node at the specified position in Doubly 
//                              Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: InsertAtPos(T no,int pos)
{
    struct DoublyLLnode<T> * temp = NULL;
    int iCnt = 0;
    if(pos < 1 || pos > iCount+1)
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        struct DoublyLLnode<T> * newn = new struct DoublyLLnode<T>;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;
        for(iCnt = 1;iCnt < pos - 1;iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;
    }
    iCount++;
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   int pos
//	Description             :   Deletes a node from the specified position in Doubly 
//                              Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: DeleteAtPos(int pos)
{
    struct DoublyLLnode<T> * temp = NULL;
    int iCnt = 0;
    
    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else 
    {
        temp = first;
        for(iCnt = 1;iCnt < pos - 1;iCnt++)
        {
            temp = temp->next;
        }

        struct DoublyLLnode<T>* target = temp->next;
        temp->next = target->next;
        if(target->next != NULL)
        {
            target->next->prev = temp;
        }
        delete target;
    }
    iCount--;
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchFirstOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Searches for the first occurrence of an element in the
//                              Doubly Linear Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyLL<T> :: SearchFirstOccurence(T no)
{
    struct DoublyLLnode<T> * temp = NULL;

    int iPos = 1;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            return iPos;
        }
        iPos++;
        temp = temp -> next;
    }
    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchLastOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Searches for the last occurrence of an element in the 
//                              Doubly Linear Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyLL<T> :: SearchLastOccurence(T no)
{
    struct DoublyLLnode<T> * temp = NULL;

    int iPos = 1;
    int iLastPos = -1;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            iLastPos = iPos;
        }
        iPos++;
        temp = temp -> next;
    }
    return iLastPos;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchAllOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Counts total occurrences of an element in the Doubly
//                              Linear Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyLL<T> :: SearchAllOccurence(T no)
{
    struct DoublyLLnode<T> * temp = NULL;

    int iCountOcc = 0;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            iCountOcc++;
        }
        temp = temp->next;
    }
    return iCountOcc;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Addition
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates the sum of all elements present in the Doubly
//                              Linear Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyLL<T> :: Addition()
{
    struct DoublyLLnode<T> * temp = NULL;

    T iSum = 0;
    temp = first;

    while(temp != NULL)
    {
        iSum = iSum + (temp->data);
        temp = temp->next;
    }
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	LargestElement
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the largest element from the Doubly Linear
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyLL<T> :: LargestElement()
{
    struct DoublyLLnode<T> * temp = NULL;

    temp = first;
    T iLargest = temp->data;

    while(temp != NULL)
    {
        if((temp->data) > iLargest)
        {
            iLargest = temp->data;
        }
        temp = temp -> next;
    }
    return iLargest;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SmallestElement
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the smallest element from the Doubly Linear
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyLL<T> :: SmallestElement()
{
    struct DoublyLLnode<T> * temp = NULL;

    temp = first;
    T iSmallest = temp->data;

    while(temp != NULL)
    {
        if((temp->data) < iSmallest)
        {
            iSmallest = temp->data;
        }
        temp = temp -> next;
    }
    return iSmallest;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SecMaximum
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the second Maximum element from the Doubly Linear
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyLL<T> :: SecMaximum()
{
   struct DoublyLLnode<T> * temp = NULL;

   temp = first;
   T iMax1 = temp->data;
   T iMax2 = temp->data;

   while(temp != NULL)
   {
        if((temp->data) > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = temp->data;
        }
        else if(((temp->data) > iMax2) && ((temp->data) != iMax1))
        {
            iMax2 = temp->data;
        }
        temp = temp -> next;
   }
   return iMax2;
}

// -------------------------- Integer-Specific Functions ---------------------------------

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPerfect
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all perfect numbers from the Doubly linear 
//                              linked list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: DisplayPerfect()
{
    struct DoublyLLnode<T> * temp = NULL;

    int iCnt = 0;
    int iSum = 0;
    temp = first;
    
    cout<<"Perfect numbers in Linked List are:";

    while(temp != NULL)
    {
        iSum = 0;

        for(iCnt = 1;iCnt < temp->data;iCnt++)
        {
            if((temp->data % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPrime
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all prime numbers from the Doubly linear linked 
//                              list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: DisplayPrime()
{
    struct DoublyLLnode<T> * temp = NULL;

    int i = 0;
    int iPrime = 0;
    temp = first;

    cout<<"Prime numbers in Linked List are:";

    while(temp != NULL)
    {
        iPrime = 0;

        for(i = 1;i <= temp->data;i++)
        {
            if((temp->data % i) == 0)
            {
                iPrime++;
            }
        }
        if(iPrime == 2)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	AdditionEven
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates and returns the sum of all the even elements 
//                              present in the Doubly Linear Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyLL<T> :: AdditionEven()
{
    struct DoublyLLnode<T> * temp = NULL;

    T iSum = 0;
    temp = first;

    while(temp != NULL)
    {
        if((temp->data) % 2 == 0)
        {
            iSum = iSum + (temp->data);
        }
        temp = temp->next;
    }
    return iSum;   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SumDigit
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates the sum of its digits for each integer element
//                              in Doubly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: SumDigit()
{
    struct DoublyLLnode<T> * temp = NULL;

    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Addition of Digits of Element from linked list are:";

    while(temp != NULL)
    {
        iSum = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        cout<<iSum<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Reverse
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Reverses each integer element from Doubly Linear Linked
//                              List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: Reverse()
{
    struct DoublyLLnode<T> * temp = NULL;

    int iRev = 0;
    temp = first;

    cout<<"Reversed each Element of linked list are:";

    while(temp != NULL)
    {
        iRev = 0;
        int iTemp = temp->data;

        while(iTemp != 0)
        {
            iRev = (iRev * 10) + (iTemp % 10);
            iTemp = iTemp / 10;
        }
        cout<<"|"<<iRev<<"| -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPalindrome
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays palindrome elements present in the Doubly
//                              Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: DisplayPalindrome()
{
    struct DoublyLLnode<T> * temp = NULL;

    int iDigit = 0;
    int iRev = 0;
    int iNo = 0;
    temp = first;

    cout<<"Palindrome elements from linked list are:";

    while(temp != NULL)
    {
        iRev = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev  = (iRev * 10) + iDigit;
            iNo = iNo / 10;

        }
        if(iRev == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayProduct
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays product of digits of each element in Doubly Linear
//                              Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: DisplayProduct()
{
    struct DoublyLLnode<T> * temp = NULL;

    int iDigit = 0;
    int iProduct = 1;
    int iNo = 0;
    temp = first;

    cout<<"Product of digits of each element in Linked list:";

    while(temp != NULL)
    {
        iNo = temp->data;
        iProduct = 1;

        if(iNo == 0)
        {
            cout<<"1\t";
        }
        else
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit != 0)
                {
                    iProduct = iProduct * iDigit;
                }
                iNo = iNo / 10;
            }
            cout<<iProduct<<"\t";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplaySmall
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays the smallest digit from each integer element 
//                              of the Doubly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: DisplaySmall()
{
    struct DoublyLLnode<T> * temp = NULL;

    int iSmall = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Smallest digits of all digits of all element from linked list:";

    while(temp != NULL)
    {
        iSmall = 9;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNo = iNo / 10;
        }
        cout<<iSmall<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayLarge
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays the largest digit from each integer element 
//                              of the Doubly Linear Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLL<T> :: DisplayLarge()
{
    struct DoublyLLnode<T> * temp = NULL;

    int iLarge = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Largest digits of all digits of all element from linked list:";

    while(temp != NULL)
    {
        iLarge = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iNo = iNo / 10;
        }
        cout<<iLarge<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}

// ------------------------- Doubly Circular Linked List -------------------------------

///////////////////////////////////////////////////////////////////////////////////////
//
// Class :       DoublyCLL
// Description : Generic Implementation of Doubly Circular linked list
// Author :      Sejal Vishal Dhadve
//
//////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct DoublyCLLnode
{
    T data;                                                   // Stores value of the node
    struct DoublyCLLnode<T> *next;                            // Pointer to the next node
    struct DoublyCLLnode<T> *prev;                            // Pointer to the previous node
};

template<class T>
class DoublyCLL
{
    private:
    struct DoublyCLLnode<T> * first;                           // Head pointer of linked list
    struct DoublyCLLnode<T> * last;                            // Tail pointer of linked list
    int iCount;                                                // Count of total nodes

    public:
    // Constructor / Destructor
    DoublyCLL();
    ~DoublyCLL();

    // Generic linked list operations
    void Display();
    int Count();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    int SearchFirstOccurence(T);
    int SearchLastOccurence(T);
    int SearchAllOccurence(T);
    T Addition();
    T LargestElement();
    T SmallestElement();
    T SecMaximum();

    // Integer-only functions (Works only if T = int)
    void DisplayPerfect();
    void DisplayPrime();
    T AdditionEven();
    void SumDigit();
    void Reverse();
    void DisplayPalindrome();
    void DisplayProduct();
    void DisplaySmall();
    void DisplayLarge();
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DoublyCLL
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Constructor of class Doubly Circular Linked List.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
DoublyCLL<T> :: DoublyCLL()
{
    cout<<"Inside Constructors\n";
    
    first = NULL;
    last = NULL;
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~DoublyCLL
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Destructor of class Doubly Circular Linked List.
//	Returns					:   None
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
DoublyCLL<T> :: ~DoublyCLL()
{
    struct DoublyCLLnode<T>* temp = NULL;

    if (first != NULL)
    {
        last->next = NULL;

        while (first != NULL)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
    }
    first = NULL;
    last = NULL;
}

// ------------------------------- Generic Functions -------------------------------------

/////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Inserts a new node at the beginning of the Doubly Circular 
//                              Linked List.
//	Returns					:   void
//
/////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: InsertFirst(T no)
{
    struct DoublyCLLnode<T> * newn = NULL;

    newn = new struct DoublyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    last->next = first;
    first->prev = last;

    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertLast
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Inserts a new node at the end of the Doubly Circular 
//                              Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: InsertLast(T no)
{
    struct DoublyCLLnode<T> * newn = NULL;

    newn = new struct DoublyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)       
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;

    }
    last->next = first;
    first->prev = last;

    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all elements of Doubly Circular linked list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: Display()
{
    struct DoublyCLLnode<T> * temp = NULL;
    cout<<"Elements of the Linked list are : \n";

    temp = first;

    if(first == NULL && last == NULL)
    {
        cout<<"LL is empty";
        return;
    }

    do
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    } while(temp != first);
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the number of nodes in the Doubly Circular Linked
//                              List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyCLL<T> :: Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteFirst
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Deletes the first node of the Doubly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    { 
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete(first->prev);

        last->next = first;
        first->prev = last;
    }
    iCount--;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteLast
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Deletes the last node of the Doubly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    { 
        delete last;

        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete last->next;

        last->next = first;
        first->prev = last;
    }
    iCount--;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no,int pos
//	Description             :   Inserts a new node at the specified position in Doubly 
//                              Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: InsertAtPos(T no,int pos)
{
    struct DoublyCLLnode<T> * temp = NULL;
    int iCnt = 0;
    struct DoublyCLLnode<T> * newn = NULL;

    if(pos < 1 || pos > iCount+1)
    {
        cout<<"Invalid Position";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new struct DoublyCLLnode<T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        temp = first;

        for(iCnt = 1;iCnt < pos - 1;iCnt++)
        {
            temp = temp ->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DeleteAtPos
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   int pos
//	Description             :   Deletes a node from the specified position in Doubly 
//                              Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: DeleteAtPos(int pos)
{
    struct DoublyCLLnode<T> * temp = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid Position";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(iCnt = 1;iCnt < pos - 1;iCnt++)
        {
            temp = temp ->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchFirstOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Searches for the first occurrence of an element in the
//                              Doubly Circular Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyCLL<T> :: SearchFirstOccurence(T no)
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iPos = 1;
    temp = first;

    do
    {
        if(temp->data == no)
        {
            return iPos;
        }
        temp = temp -> next;
        iPos++;
    }while(temp != first);

    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchLastOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Searches for the last occurrence of an element in the 
//                              Doubly Circular Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyCLL<T> :: SearchLastOccurence(T no)
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iPos = 1;
    int iLastPos = -1;
    temp = first;

    do
    {
        if(temp->data == no)
        {
            iLastPos = iPos;
        }
        temp = temp -> next;
        iPos++;
    }while(temp != first);

    return iLastPos;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SearchAllOccurence
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Counts total occurrences of an element in the Doubly
//                              Circular Linked List.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyCLL<T> :: SearchAllOccurence(T no)
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iCountOcc = 0;
    temp = first;

    do
    {
        if(temp->data == no)
        {
            iCountOcc++;
        }
        temp = temp->next;
    }while(temp != first);

    return iCountOcc;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Addition
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates the sum of all elements present in the Doubly
//                              Circular Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyCLL<T> :: Addition()
{
    struct DoublyCLLnode<T> * temp = NULL;

    T iSum = 0;
    temp = first;

    do
    {
        iSum = iSum + (temp->data);
        temp = temp->next;
    }while(temp != first);

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	LargestElement
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the largest element from the Doubly Circular
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyCLL<T> :: LargestElement()
{
    struct DoublyCLLnode<T> * temp = NULL;

    temp = first;
    T iLargest = temp->data;

    do
    {
        if((temp->data) > iLargest)
        {
            iLargest = temp->data;
        }
        temp = temp -> next;
    }while(temp != first);

    return iLargest;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SmallestElement
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the smallest element from the Doubly Circular
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyCLL<T> :: SmallestElement()
{
    struct DoublyCLLnode<T> * temp = NULL;

    temp = first;
    T iSmallest = temp->data;

    do
    {
        if((temp->data) < iSmallest)
        {
            iSmallest = temp->data;
        }
        temp = temp -> next;
    }while(temp != first);

    return iSmallest;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SecMaximum
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Returns the second Maximum element from the Doubly Circular
//                              Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyCLL<T> :: SecMaximum()
{
   struct DoublyCLLnode<T> * temp = NULL;

   temp = first;
   T iMax1 = temp->data;
   T iMax2 = temp->data;

   do
   {
        if((temp->data) > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = temp->data;
        }
        else if(((temp->data) > iMax2) && ((temp->data) != iMax1))
        {
            iMax2 = temp->data;
        }
        temp = temp -> next;
   }while(temp != first);

   return iMax2;
}

// -------------------------- Integer-Specific Functions ---------------------------------

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPerfect
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all perfect numbers from the Doubly Circular 
//                              linked list.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: DisplayPerfect()
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iCnt = 0;
    int iSum = 0;
    temp = first;
    
    cout<<"Perfect numbers in Linked List are:";

    do
    {
        iSum = 0;

        for(iCnt = 1;iCnt < temp->data;iCnt++)
        {
            if((temp->data % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPrime
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all prime numbers from the Doubly Circular linked 
//                              list.
//	Returns					:   void
//
/////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: DisplayPrime()
{
    struct DoublyCLLnode<T> * temp = NULL;

    int i = 0;
    int iPrime = 0;
    temp = first;

    cout<<"Prime numbers in Linked List are:";

    do
    {
        iPrime = 0;

        for(i = 1;i <= temp->data;i++)
        {
            if((temp->data % i) == 0)
            {
                iPrime++;
            }
        }
        if(iPrime == 2)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	AdditionEven
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates and returns the sum of all the even elements 
//                              present in the Doubly Circular Linked List.
//	Returns					:   T
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T DoublyCLL<T> :: AdditionEven()
{
    struct DoublyCLLnode<T> * temp = NULL;

    T iSum = 0;
    temp = first;

    do
    {
        if((temp->data) % 2 == 0)
        {
            iSum = iSum + (temp->data);
        }
        temp = temp->next;
    }while(temp != first);

    return iSum;   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SumDigit
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Calculates the sum of its digits for each integer element
//                              in Doubly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: SumDigit()
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Addition of Digits of Element from linked list are:";

    do
    {
        iSum = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        cout<<iSum<<"\t";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Reverse
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Reverses each integer element from Doubly Circular Linked
//                              List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: Reverse()
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iRev = 0;
    temp = first;

    cout<<"Reversed each Element of linked list are:";

    do
    {
        iRev = 0;
        int iTemp = temp->data;

        while(iTemp != 0)
        {
            iRev = (iRev * 10) + (iTemp % 10);
            iTemp = iTemp / 10;
        }
        cout<<"|"<<iRev<<"| -> ";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayPalindrome
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays palindrome elements present in the Doubly 
//                              Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: DisplayPalindrome()
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iDigit = 0;
    int iRev = 0;
    int iNo = 0;
    temp = first;

    cout<<"Palindrome elements from linked list are:";

    do
    {
        iRev = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev  = (iRev * 10) + iDigit;
            iNo = iNo / 10;

        }
        if(iRev == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayProduct
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays product of digits of each element in Doubly
//                              Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: DisplayProduct()
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iDigit = 0;
    int iProduct = 1;
    int iNo = 0;
    temp = first;

    cout<<"Product of digits of each element in Linked list:";

    do
    {
        iNo = temp->data;
        iProduct = 1;

        if(iNo == 0)
        {
            cout<<"1\t";
        }
        else
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit != 0)
                {
                    iProduct = iProduct * iDigit;
                }
                iNo = iNo / 10;
            }
            cout<<iProduct<<"\t";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplaySmall
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays the smallest digit from each integer element 
//                              of the Doubly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: DisplaySmall()
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iSmall = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Smallest digits of all digits of all element from linked list:";

    do
    {
        iSmall = 9;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNo = iNo / 10;
        }
        cout<<iSmall<<" ";
        temp = temp -> next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	DisplayLarge
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays the largest digit from each integer element 
//                              of the Doubly Circular Linked List.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyCLL<T> :: DisplayLarge()
{
    struct DoublyCLLnode<T> * temp = NULL;

    int iLarge = 0;
    int iDigit = 0;
    int iNo = 0;
    temp = first;

    cout<<"Largest digits of all digits of all element from linked list:";

    do
    {
        iLarge = 0;
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iNo = iNo / 10;
        }
        cout<<iLarge<<" ";
        temp = temp -> next;
    }while(temp != first);

    cout<<"\n";
}

// ----------------------------- Binary Search Tree -----------------------------------

///////////////////////////////////////////////////////////////////////////////////////
//
// Class       : BST
// Description : Generic Implementation of Binary search tree
// Author      : Sejal Vishal Dhadve
//
//////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct BSTnode
{
    T data;                                        // Data of generic type
    struct BSTnode<T> * lchild;                    // Pointer to left child node
    struct BSTnode<T> * rchild;                    // Pointer to right child node
};

template<class T>
class BST
{
    private:
    struct BSTnode<T> * first;                     // Pointer to root node of BST

    // Recursive helper functions for traversals and counting
    void InorderX(BSTnode<T> *root);
    void PreorderX(BSTnode<T> *root);
    void PostorderX(BSTnode<T> *root);
    int CountX(BSTnode<T> *root);
    int CountLeafNodesX(BSTnode<T> *root);
    int CountParentNodesX(BSTnode<T> *root);

    public:
    // Constructor / Destructor
    BST();

    void Insert(T);
    void Inorder();
    void Preorder();
    void Postorder();
    bool Search(T);
    int Count();
    int CountLeafNodes();
    int CountParentNodes();
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BST
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is Constructor of class BST.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
BST<T> :: BST()
{
    first = NULL;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Insert
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   int no
//	Description             :   This function inserts a new node in the BST according 
//                              to BST rules.
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void BST<T> :: Insert(T no)
{
    struct BSTnode<T> * newn = new BSTnode<T>;
    struct BSTnode<T> * temp = NULL;

    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(1)
        {
            if(no == temp->data)
            {
                cout << "Duplicate element : Unable to insert node\n";
                delete newn;
                break;
            }
            else if(no > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Inorder
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays nodes in Inorder (Left, Root, Right).
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void BST<T> :: Inorder()
{
    InorderX(first);
}

template<class T>
void BST<T> :: InorderX(BSTnode<T> *root)
{
    if(root != NULL)
    {
        InorderX(root->lchild);
        cout << root->data << "\t";
        InorderX(root->rchild);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Preorder
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays nodes in Preorder (Root, Left, Right).
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void BST<T> :: Preorder()
{
    PreorderX(first);
}

template<class T>
void BST<T> :: PreorderX(BSTnode<T> *root)
{
    if(root != NULL)
    {
        cout<<root->data<<"\t";
        PreorderX(root->lchild);
        PreorderX(root->rchild);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Postorder
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays nodes in Postorder (Left, Right, Root).
//	Returns					:   void
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void BST<T> :: Postorder()
{
    PostorderX(first);
}

template<class T>
void BST<T> :: PostorderX(BSTnode<T> *root)
{
    if(root != NULL)
    {
        PostorderX(root->lchild);
        PostorderX(root->rchild);
        cout<<root->data<<"\t";
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Search
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   int no
//	Description             :   Searches an element in BST & displays its time complexity.
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
bool BST<T> :: Search(T no)
{
    bool bFlag = false;
    int TimeComplexity = 0;
    struct BSTnode<T> * temp = first;

    while(temp != NULL)
    {
        if(no == temp->data)
        {
            bFlag = true;
            break;
        }
        else if(no > temp->data)
        {
            temp = temp->rchild;
        }
        else
        {
            temp = temp->lchild;
        }
        TimeComplexity++;
    }

    cout << "TimeComplexity of search is : " << TimeComplexity << "\n";
    return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Counts total number of nodes in BST.
//	Returns					:   int
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int BST<T> :: Count()
{
    return CountX(first);
    cout<<"\n";
}

template<class T>
int BST<T> :: CountX(BSTnode<T> *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return 1 + CountX(root->lchild) + CountX(root->rchild);
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	CountLeafNodes
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Counts total number of leaf nodes in BST.
//	Returns					:   int
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int BST<T> :: CountLeafNodes()
{
    return CountLeafNodesX(first);
    cout<<"\n";
}

template<class T>
int BST<T> :: CountLeafNodesX(BSTnode<T> *root)
{
    if(root == NULL)
    {
        return 0;
    }

    if(root->lchild == NULL && root->rchild == NULL)
    {
        return 1;
    }

    return CountLeafNodesX(root->lchild) + CountLeafNodesX(root->rchild);
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	CountParentNodes
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Counts total number of parent nodes in BST.
//	Returns					:   int
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int BST<T> :: CountParentNodes()
{
    return CountParentNodesX(first);
    cout<<"\n";
}

template<class T>
int BST<T> :: CountParentNodesX(BSTnode<T> *root)
{
    if(root == NULL)
    {
        return 0;
    }

    if(root->lchild != NULL || root->rchild != NULL)
    {
        return 1 + CountParentNodesX(root->lchild) + CountParentNodesX(root->rchild);
    }
    return 0;
}

// ----------------------------- Sorting Algorithm -----------------------------------

///////////////////////////////////////////////////////////////////////////////////////
//
// Class       : Sorting (ArrayX)
// Description : Generic Implementation of Sorting algorithm.
// Author      : Sejal Vishal Dhadve
//
//////////////////////////////////////////////////////////////////////////////////////

template<class T>
class ArrayXX
{
    public:
        T *Arr;                                           // Array of elements 
        int iSize;                                        // Size of array 
        bool Sorted;                                      // Array sorted flag
    
        //Constructor / Destructor
        ArrayXX(int);
        ~ArrayXX();

        void Accept();
        void Display();
        void BubbleSort();
        void BubbleSortEfficient();
        void SelectionSort();
        void InsertionSort();
};

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	ArrayXX
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   int no
//	Description             :   This is the constructor of class ArrayXX.
//	Returns					:   None
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
ArrayXX<T> :: ArrayXX(int no)
{
    iSize = no;
    Arr = new T[iSize];
    Sorted = true;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~ArrayX
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is the destructor of class ArrayX.
//	Returns					:   None
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
ArrayXX<T> :: ~ArrayXX()
{
    delete []Arr;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Accept
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Accepts elements from user and checks if already sorted.
//	Returns					:   void
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void ArrayXX<T> :: Accept()
{
    cout<<"Enter "<<iSize<<" elements : \n";
    
    int i = 0;                         

    for(i = 0; i < iSize;i++)
    {
        cout<<"Enter the element no : "<<i+1<<"\n";
        cin>>Arr[i];

        if((i > 0) && (Sorted == true))
        {
            if(Arr[i] < Arr[i-1])
            {
                Sorted = false;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays array elements.
//	Returns					:   void
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void ArrayXX<T> :: Display()
{
    cout<<"Elements of the array are : \n";
    
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BubbleSort
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Sorts array using simple Bubble Sort.
//	Returns					:   void
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void ArrayXX<T> :: BubbleSort()
{
    int i = 0, j = 0;
    T temp;

    if(Sorted == true)
    {
        return;
    }
    
    for(i = 0; i < iSize ; i++)
    {
        for(j = 0; j < iSize - 1; j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }

        cout<<"Data after Pass : "<<i+1<<"\n";

        Display();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BubbleSortEfficient
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Optimized Bubble Sort using flag for early stopping.
//	Returns					:   void
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void ArrayXX<T> :: BubbleSortEfficient()
{
    int i = 0, j = 0;
    T temp;
    bool bFlag = true;

    if(Sorted == true)
    {
        return;
    }
    
    for(i = 0; (i < iSize && bFlag == true) ; i++)
    {
        bFlag = false;

        for(j = 0; j < iSize - 1 - i; j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;

                bFlag = true;
            }
        }

        cout<<"Data after Pass : "<<i+1<<"\n";

        Display();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	SelectionSort
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Sorts array using Selection Sort.
//	Returns					:   void
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void ArrayXX<T> :: SelectionSort()
{
    int i = 0, j = 0, min_index = 0;
    T temp;

    for(i = 0 ; i < iSize-1; i++)
    {
        min_index = i;

        for(j = i + 1; j < iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }

        if(i != min_index)
        {
            temp = Arr[i];
            Arr[i] = Arr[min_index];
            Arr[min_index] = temp;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	InsertionSort
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Sorts array using Insertion Sort.
//	Returns					:   void
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void ArrayXX<T> :: InsertionSort()
{
    int i = 0, j = 0;
    T selected;

    for(i = 1; i < iSize; i++)
    {
        for(j = i - 1, selected = Arr[i]; (j >= 0) && (Arr[j] > selected); j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j + 1] = selected;
    }
}

// ----------------------------- Searching Algorithm -----------------------------------

///////////////////////////////////////////////////////////////////////////////////////
//
// Class       : Searching (ArrayX)
// Description : Generic Implementation of Searching algorithm.
// Author      : Sejal Vishal Dhadve
//
//////////////////////////////////////////////////////////////////////////////////////

template<class T>
class ArrayX
{
    public:
        T *Arr;                                             // Array of elements
        int iSize;                                          // Size of array
        bool Sorted;                                        // Array sorted flag

        //Constructor / Destructor
        ArrayX(int no);
        ~ArrayX();

        void Accept();
        void Display();
        bool LinearSearch(T);
        bool BiDirectionalSearch(T);
        bool BinarySearchInc(T);
        bool BinarySearchDec(T);
        bool BinarySearchEfficientInc(T);
        bool BinarySearchEfficientDec(T);
        bool CheckSortedInc();
        bool CheckSortedDec();
};

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	ArrayX
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   int no
//	Description             :   This is the constructor of class ArrayX.
//	Returns					:   None
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
ArrayX<T> :: ArrayX(int no)
{
    iSize = no;
    Arr = new T[iSize];
    Sorted = true;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~ArrayX
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   This is the destructor of class ArrayX.
//	Returns					:   None
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
ArrayX<T> :: ~ArrayX()
{
    delete []Arr;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Accept
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Accepts array elements from the user.
//	Returns					:   void
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter "<<iSize<<" elements : \n";
    
    int i =0;                      

    for(i = 0; i < iSize;i++)
    {
        cout<<"Enter the element no : "<<i+1<<"\n";
        cin>>Arr[i];

        if((i > 0) && (Sorted == true))     
        {
            if(Arr[i] < Arr[i-1])
            {
                Sorted = false;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Displays all elements of the array.
//	Returns					:   void
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void ArrayX<T> :: Display()
{
    cout<<"Elements of the array are : \n";
    
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	LinearSearch
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Performs linear search on the array.
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
bool ArrayX<T> :: LinearSearch(T no)    
{
    int i = 0;
    bool bFlag = false;

    if(Sorted == true)                 
    {
        cout<<"Data is sorted\n";

        return BinarySearchEfficientInc(no);
    }

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == no)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BiDirectionalSearch
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Searches from both ends simultaneously.
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
bool ArrayX<T> :: BiDirectionalSearch(T no)
{
    int iStart = 0;
    int iEnd = 0;

    bool bFlag = false;

    for(iStart = 0, iEnd = iSize-1 ; iStart <= iEnd; iStart++, iEnd--)
    {
        if(Arr[iStart] == no || Arr[iEnd] == no)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BinarySearchInc
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Performs binary search assuming ascending order.
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
bool ArrayX<T> :: BinarySearchInc(T no)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool bFlag = false;


    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if(Arr[iMid] == no)
        {
            bFlag = true;
            break;
        }
        else if(no < Arr[iMid])
        {
            iEnd = iMid - 1;
        }
        else if(no > Arr[iMid])
        {
            iStart = iMid + 1;
        }
    } 

    return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BinarySearchDec
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Performs binary search assuming descending order.
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
bool ArrayX<T> :: BinarySearchDec(T no)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool bFlag = false;


    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if(Arr[iMid] == no)
        {
            bFlag = true;
            break;
        }
        else if(no > Arr[iMid])    
        {
            iEnd = iMid - 1;
        }
        else if(no < Arr[iMid])
        {
            iStart = iMid + 1;
        }
    }

    return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BinarySearchEfficientInc
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Performs optimized binary search for ascending array.
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
bool ArrayX<T> :: BinarySearchEfficientInc(T no)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool bFlag = false;

    if(Sorted == false)
    {
        cout<<"Data is not sorted\n";
        
        return LinearSearch(no);
    }

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if((Arr[iMid] == no) || (Arr[iStart] == no) || (Arr[iEnd] == no))
        {
            bFlag = true;
            break;
        }
        else if(no < Arr[iMid])
        {
            iEnd = iMid - 1;
        }
        else if(no > Arr[iMid])
        {
            iStart = iMid + 1;
        }
    }   

    return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	BinarySearchEfficientDec
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   T no
//	Description             :   Performs optimized binary search for descending array.
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
bool ArrayX<T> :: BinarySearchEfficientDec(T no)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool bFlag = false;


    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if((Arr[iMid] == no) || (Arr[iStart] == no) || (Arr[iEnd] == no))
        {
            bFlag = true;
            break;
        }
        else if(no > Arr[iMid])
        {
            iEnd = iMid - 1;
        }
        else if(no < Arr[iMid])
        {
            iStart = iMid + 1;
        }
    }

    return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	CheckSortedInc
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Checks whether the array is sorted in ascending order.
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
bool ArrayX<T> :: CheckSortedInc()
{
    bool bFlag = true;
    int i = 0;

    for(i = 0; i < iSize - 1; i++)
    {
        if(Arr[i] > Arr[i+1])
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	CheckSortedDec
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   None
//	Description             :   Checks whether the array is sorted in descending order.
//	Returns					:   bool
//
////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
bool ArrayX<T> :: CheckSortedDec()
{
    bool bFlag = true;
    int i = 0;

    for(i = 0; i < iSize - 1; i++)
    {
        if(Arr[i] < Arr[i+1])
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	main
//	Function Date			:	14/09/2025
//	Function Author			:	Sejal Vishal Dhadve
//	Parameters				:   NONE
//	Description             :   This is the entry point function of the program.
//	Returns					:   int
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    cout<<"------------------------- Queue Data Structure -------------------------------\n";

    // --------------------------- INT --------------------------------
    cout<<"--- Integer Queue ---\n";
    QueueX<int> intobj;
    int intnum;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter integer value to enqueue: ";
        cin>>intnum;
        intobj.Enqueue(intnum);
    }
    cout<<"Elements of Integer Queue:\n";
    intobj.Display();
    cout<<"Count of elements: "<<intobj.Count()<<"\n";
    cout<<"Removed element: "<<intobj.Dequeue()<<"\n";
    cout<<"Elements after Dequeue:\n";
    intobj.Display();
    cout<<"Count after Dequeue: "<<intobj.Count()<<"\n";
    cout<<"---------------------------------------------\n";

    // --------------------------- FLOAT --------------------------------
    cout<<"--- Float Queue ---\n";
    QueueX<float> floatobj;
    float floatnum;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter float value to enqueue: ";
        cin>>floatnum;
        floatobj.Enqueue(floatnum);
    }
    cout<<"Elements of Float Queue:\n";
    floatobj.Display();
    cout<<"Count of elements: "<<floatobj.Count()<<"\n";
    cout<<"Removed element: "<<floatobj.Dequeue()<<"\n";
    cout<<"Elements after Dequeue:\n";
    floatobj.Display();
    cout<<"Count after Dequeue: "<<floatobj.Count()<<"\n";
    cout<<"---------------------------------------------\n";

    // --------------------------- DOUBLE --------------------------------
    cout<<"--- Double Queue ---\n";
    QueueX<double> doubleobj;
    double doublenum;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter double value to enqueue: ";
        cin>>doublenum;
        doubleobj.Enqueue(doublenum);
    }
    cout<<"Elements of Double Queue:\n";
    doubleobj.Display();
    cout<<"Count of elements: "<<doubleobj.Count()<<"\n";
    cout<<"Removed element: "<<doubleobj.Dequeue()<<"\n";
    cout<<"Elements after Dequeue:\n";
    doubleobj.Display();
    cout<<"Count after Dequeue: "<<doubleobj.Count()<<"\n";
    cout<<"---------------------------------------------\n";

    // --------------------------- CHAR --------------------------------
    cout<<"--- Character Queue ---\n";
    QueueX<char> charobj;
    char charch;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter character to enqueue: ";
        cin>>charch;
        charobj.Enqueue(charch);
    }
    cout<<"Elements of Character Queue:\n";
    charobj.Display();
    cout<<"Count of elements: "<<charobj.Count()<<"\n";
    cout<<"Removed element: "<<charobj.Dequeue()<<"\n";
    cout<<"Elements after Dequeue:\n";
    charobj.Display();
    cout<<"Count after Dequeue: "<<charobj.Count()<<"\n";
    cout<<"---------------------------------------------\n";

    cout<<"------------------------- Stack Data Structure -------------------------------\n";

    // --------------------------- INT --------------------------------
    cout<<"--- Integer Stack ---\n";
    StackX<int> iobj;
    int inum;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter integer value to push: ";
        cin>>inum;
        iobj.Push(inum);
    }
    cout<<"Elements of Integer Stack:\n";
    iobj.Display();
    cout<<"Count of elements: "<<iobj.Count()<<"\n";
    cout<<"Popped element: "<<iobj.Pop()<<"\n";
    cout<<"Elements after Pop:\n";
    iobj.Display();
    cout<<"Count after Pop: "<<iobj.Count()<<"\n";
    cout<<"---------------------------------------------\n";

    // --------------------------- FLOAT --------------------------------
    cout<<"--- Float Stack ---\n";
    StackX<float> fobj;
    float fnum;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter float value to push: ";
        cin>>fnum;
        fobj.Push(fnum);
    }
    cout<<"Elements of Float Stack:\n";
    fobj.Display();
    cout<<"Count of elements: "<<fobj.Count()<<"\n";
    cout<<"Popped element: "<<fobj.Pop()<<"\n";
    cout<<"Elements after Pop:\n";
    fobj.Display();
    cout<<"Count after Pop: "<<fobj.Count()<<"\n";
    cout<<"---------------------------------------------\n";


    // --------------------------- DOUBLE --------------------------------
    cout<<"--- Double Stack ---\n";
    StackX<double> dobj;
    double dnum;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter double value to push: ";
        cin>>dnum;
        dobj.Push(dnum);
    }
    cout<<"Elements of Double Stack:\n";
    dobj.Display();
    cout<<"Count of elements: "<<dobj.Count()<<"\n";
    cout<<"Popped element: "<<dobj.Pop()<<"\n";
    cout<<"Elements after Pop:\n";
    dobj.Display();
    cout<<"Count after Pop: "<<dobj.Count()<<"\n";
    cout<<"---------------------------------------------\n";

    // --------------------------- CHAR --------------------------------
    cout<<"--- Character Stack ---\n";
    StackX<char> cobj;
    char ch;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter character to push: ";
        cin>>ch;
        cobj.Push(ch);
    }
    cout<<"Elements of Character Stack:\n";
    cobj.Display();
    cout<<"Count of elements: "<<cobj.Count()<<"\n";
    cout<<"Popped element: "<<cobj.Pop()<<"\n";
    cout<<"Elements after Pop:\n";
    cobj.Display();
    cout<<"Count after Pop: "<<cobj.Count()<<"\n";
    cout<<"---------------------------------------------\n";

    cout<<"------------------------- Singly Linear Linked List -------------------------------\n\n";

    // --------------------------- INT --------------------------------
    cout<<"--- Integer Linked List ---\n";
    SinglyLL<int> Intobj;
    int Intnum, no;
    cout<<"How many integers to insert at first? ";
    cin>>no;
    for(int i = 0; i < no; i++)
    {
        cout<<"Enter integer to insert at first: ";
        cin>>Intnum;
        Intobj.InsertFirst(Intnum);
    }
    cout<<"How many integers to insert at last? ";
    cin>>no;
    for(int i = 0; i < no; i++)
    {
        cout<<"Enter integer to insert at last: ";
        cin>>inum;
        Intobj.InsertLast(Intnum);
    }
    iobj.Display();
    cout<< "Count: "<<Intobj.Count()<<"\n";
    cout<< "Sum: "<<Intobj.Addition()<<"\n";
    cout<< "Largest: "<<Intobj.LargestElement()<<"\n";
    cout<< "Smallest: "<<Intobj.SmallestElement()<<"\n";
    cout<< "Second Max: "<<Intobj.SecMaximum()<<"\n";
    cout<< "Even Sum: "<<Intobj.AdditionEven()<<"\n";
    Intobj.DisplayPrime();
    cout<<"\n";
    Intobj.DisplayPerfect();
    cout<<"\n";
    Intobj.SumDigit();
    cout<<"\n";
    Intobj.DisplayPalindrome();
    cout<<"\n";
    Intobj.DisplayProduct();
    cout<<"\n";
    Intobj.DisplaySmall();
    cout<<"\n";
    Intobj.DisplayLarge();
    cout<<"\n";
    cout << "---------------------------------------------\n\n";

    // --------------------------- FLOAT --------------------------------
    cout<<"--- Float Linked List ---\n";
    SinglyLL<float> Floatobj;
    float Floatnum, ns;
    cout<<"How many floats to insert at first? ";
    cin>>ns;
    for(int i = 0; i < ns; i++)
    {
        cout<<"Enter float to insert at first: ";
        cin>>Floatnum;
        Floatobj.InsertFirst(Floatnum);
    }
    cout<<"How many floats to insert at last? ";
    cin>>ns;
    for(int i = 0; i < ns; i++)
    {
        cout<<"Enter float to insert at last: ";
        cin>>Floatnum;
        Floatobj.InsertLast(Floatnum);
    }
    fobj.Display();
    cout<<"Count: "<<Floatobj.Count()<<"\n";
    cout<<"Sum: "<<Floatobj.Addition()<<"\n";
    cout<<"Largest: "<<Floatobj.LargestElement()<<"\n";
    cout<<"Smallest: "<<Floatobj.SmallestElement()<<"\n";
    cout<<"Second Max: "<<Floatobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- DOUBLE --------------------------------
    cout<<"--- Double Linked List ---\n";
    SinglyLL<double> Doubleobj;
    double Doublenum, nl;
    cout<<"How many doubles to insert at first? ";
    cin>>nl;
    for(int i = 0; i < nl; i++)
    {
        cout<<"Enter double to insert at first: ";
        cin>>Doublenum;
        Doubleobj.InsertFirst(Doublenum);
    }
    cout<<"How many doubles to insert at last? ";
    cin>>nl;
    for(int i = 0; i < nl; i++)
    {
        cout<<"Enter double to insert at last: ";
        cin>>dnum;
        Doubleobj.InsertLast(Doublenum);
    }
    dobj.Display();
    cout<<"Count: "<<Doubleobj.Count()<<"\n";
    cout<<"Sum: "<<Doubleobj.Addition()<<"\n";
    cout<<"Largest: "<<Doubleobj.LargestElement()<<"\n";
    cout<<"Smallest: "<<Doubleobj.SmallestElement()<<"\n";
    cout<<"Second Max: "<<Doubleobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- CHAR --------------------------------
    cout<<"--- Character Linked List ---\n";
    SinglyLL<char> Charobj;
    char Charch, nk;
    cout<<"How many chars to insert at first? ";
    cin>>nk;
    for(int i = 0; i < nk; i++)
    {
        cout<<"Enter char to insert at first: ";
        cin>>Charch;
        Charobj.InsertFirst(Charch);
    }
    cout<<"How many chars to insert at last? ";
    cin>>nk;
    for(int i = 0; i < nk; i++)
    {
        cout<<"Enter char to insert at last: ";
        cin>>Charch;
        Charobj.InsertLast(Charch);
    }
    cobj.Display();
    cout<<"Count: " <<Charobj.Count()<<"\n";
    cout<<"Largest char: "<<Charobj.LargestElement()<<"\n";
    cout<<"Smallest char: "<<Charobj.SmallestElement()<<"\n";
    cout<<"Second Max char: "<<Charobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n";

    cout<<"------------------------- Singly Circular Linked List -------------------------------\n\n";

    // --------------------------- INT --------------------------------
    cout<<"--- Integer Linked List ---\n";
    SinglyCLL<int> INTobj;
    int INTnum, ni;
    cout<<"How many integers to insert at first? ";
    cin>>ni;
    for(int i = 0; i < ni; i++)
    {
        cout<<"Enter integer to insert at first: ";
        cin>>INTnum;
        INTobj.InsertFirst(INTnum);
    }
    cout<<"How many integers to insert at last? ";
    cin>>ni;
    for(int i = 0; i < ni; i++)
    {
        cout<<"Enter integer to insert at last: ";
        cin>>INTnum;
        INTobj.InsertLast(INTnum);
    }
    iobj.Display();
    cout<< "Count: "<<INTobj.Count()<<"\n";
    cout<< "Sum: "<<INTobj.Addition()<<"\n";
    cout<< "Largest: "<<INTobj.LargestElement()<<"\n";
    cout<< "Smallest: "<<INTobj.SmallestElement()<<"\n";
    cout<< "Second Max: "<<INTobj.SecMaximum()<<"\n";
    cout<< "Even Sum: "<<INTobj.AdditionEven()<<"\n";
    INTobj.DisplayPrime();
    cout<<"\n";
    INTobj.DisplayPerfect();
    cout<<"\n";
    INTobj.SumDigit();
    cout<<"\n";
    INTobj.DisplayPalindrome();
    cout<<"\n";
    INTobj.DisplayProduct();
    cout<<"\n";
    INTobj.DisplaySmall();
    cout<<"\n";
    INTobj.DisplayLarge();
    cout<<"\n";
    cout << "---------------------------------------------\n\n";

    // --------------------------- FLOAT --------------------------------
    cout<<"--- Float Linked List ---\n";
    SinglyCLL<float> FLOATobj;
    float FLOATnum, nd;
    cout<<"How many floats to insert at first? ";
    cin>>nd;
    for(int i = 0; i < nd; i++)
    {
        cout<<"Enter float to insert at first: ";
        cin>>FLOATnum;
        FLOATobj.InsertFirst(FLOATnum);
    }
    cout<<"How many floats to insert at last? ";
    cin>>nd;
    for(int i = 0; i < nd; i++)
    {
        cout<<"Enter float to insert at last: ";
        cin>>FLOATnum;
        FLOATobj.InsertLast(FLOATnum);
    }
    fobj.Display();
    cout<<"Count: "<<FLOATobj.Count()<<"\n";
    cout<<"Sum: "<<FLOATobj.Addition()<<"\n";
    cout<<"Largest: "<<FLOATobj.LargestElement()<<"\n";
    cout<<"Smallest: "<<FLOATobj.SmallestElement()<<"\n";
    cout<<"Second Max: "<<FLOATobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- DOUBLE --------------------------------
    cout<<"--- Double Linked List ---\n";
    SinglyCLL<double> DOUBLEobj;
    double DOUBLEnum, nq;
    cout<<"How many doubles to insert at first? ";
    cin>>nq;
    for(int i = 0; i < nq; i++)
    {
        cout<<"Enter double to insert at first: ";
        cin>>DOUBLEnum;
        DOUBLEobj.InsertFirst(DOUBLEnum);
    }
    cout<<"How many doubles to insert at last? ";
    cin>>nq;
    for(int i = 0; i < nq; i++)
    {
        cout<<"Enter double to insert at last: ";
        cin>>DOUBLEnum;
        DOUBLEobj.InsertLast(DOUBLEnum);
    }
    dobj.Display();
    cout<<"Count: "<<DOUBLEobj.Count()<<"\n";
    cout<<"Sum: "<<DOUBLEobj.Addition()<<"\n";
    cout<<"Largest: "<<DOUBLEobj.LargestElement()<<"\n";
    cout<<"Smallest: "<<DOUBLEobj.SmallestElement()<<"\n";
    cout<<"Second Max: "<<DOUBLEobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- CHAR --------------------------------
    cout<<"--- Character Linked List ---\n";
    SinglyCLL<char> CHARobj;
    char CHARch, nb;
    cout<<"How many chars to insert at first? ";
    cin>>nb;
    for(int i = 0; i < nb; i++)
    {
        cout<<"Enter char to insert at first: ";
        cin>>CHARch;
        CHARobj.InsertFirst(CHARch);
    }
    cout<<"How many chars to insert at last? ";
    cin>>nb;
    for(int i = 0; i < nb; i++)
    {
        cout<<"Enter char to insert at last: ";
        cin>>CHARch;
        CHARobj.InsertLast(CHARch);
    }
    cobj.Display();
    cout<<"Count: " <<CHARobj.Count()<<"\n";
    cout<<"Largest char: "<<CHARobj.LargestElement()<<"\n";
    cout<<"Smallest char: "<<CHARobj.SmallestElement()<<"\n";
    cout<<"Second Max char: "<<CHARobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n";

    cout<<"------------------------- Doubly Linear Linked List -------------------------------\n\n";

    // --------------------------- INT --------------------------------
    cout<<"--- Integer Linked List ---\n";
    DoublyLL<int> inobj;
    int innum, nm;
    cout<<"How many integers to insert at first? ";
    cin>>nm;
    for(int i = 0; i < nm; i++)
    {
        cout<<"Enter integer to insert at first: ";
        cin>>innum;
        inobj.InsertFirst(innum);
    }
    cout<<"How many integers to insert at last? ";
    cin>>nm;
    for(int i = 0; i < nm; i++)
    {
        cout<<"Enter integer to insert at last: ";
        cin>>inum;
        inobj.InsertLast(inum);
    }
    iobj.Display();
    cout<< "Count: "<<inobj.Count()<<"\n";
    cout<< "Sum: "<<inobj.Addition()<<"\n";
    cout<< "Largest: "<<inobj.LargestElement()<<"\n";
    cout<< "Smallest: "<<inobj.SmallestElement()<<"\n";
    cout<< "Second Max: "<<inobj.SecMaximum()<<"\n";
    cout<< "Even Sum: "<<inobj.AdditionEven()<<"\n";
    inobj.DisplayPrime();
    cout<<"\n";
    inobj.DisplayPerfect();
    cout<<"\n";
    inobj.SumDigit();
    cout<<"\n";
    inobj.DisplayPalindrome();
    cout<<"\n";
    inobj.DisplayProduct();
    cout<<"\n";
    inobj.DisplaySmall();
    cout<<"\n";
    inobj.DisplayLarge();
    cout<<"\n";
    cout << "---------------------------------------------\n\n";

    // --------------------------- FLOAT --------------------------------
    cout<<"--- Float Linked List ---\n";
    DoublyLL<float> flobj;
    float flnum, ng;
    cout<<"How many floats to insert at first? ";
    cin>>ng;
    for(int i = 0; i < ng; i++)
    {
        cout<<"Enter float to insert at first: ";
        cin>>flnum;
        flobj.InsertFirst(flnum);
    }
    cout<<"How many floats to insert at last? ";
    cin>>ng;
    for(int i = 0; i < ng; i++)
    {
        cout<<"Enter float to insert at last: ";
        cin>>flnum;
        flobj.InsertLast(flnum);
    }
    fobj.Display();
    cout<<"Count: "<<flobj.Count()<<"\n";
    cout<<"Sum: "<<flobj.Addition()<<"\n";
    cout<<"Largest: "<<flobj.LargestElement()<<"\n";
    cout<<"Smallest: "<<flobj.SmallestElement()<<"\n";
    cout<<"Second Max: "<<flobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- DOUBLE --------------------------------
    cout<<"--- Double Linked List ---\n";
    DoublyLL<double> doobj;
    double donum, na;
    cout<<"How many doubles to insert at first? ";
    cin>>na;
    for(int i = 0; i < na; i++)
    {
        cout<<"Enter double to insert at first: ";
        cin>>donum;
        doobj.InsertFirst(donum);
    }
    cout<<"How many doubles to insert at last? ";
    cin>>na;
    for(int i = 0; i < na; i++)
    {
        cout<<"Enter double to insert at last: ";
        cin>>donum;
        doobj.InsertLast(donum);
    }
    dobj.Display();
    cout<<"Count: "<<doobj.Count()<<"\n";
    cout<<"Sum: "<<doobj.Addition()<<"\n";
    cout<<"Largest: "<<doobj.LargestElement()<<"\n";
    cout<<"Smallest: "<<doobj.SmallestElement()<<"\n";
    cout<<"Second Max: "<<doobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- CHAR --------------------------------
    cout<<"--- Character Linked List ---\n";
    DoublyLL<char> chobj;
    char chch, nc;
    cout<<"How many chars to insert at first? ";
    cin>>nc;
    for(int i = 0; i < nc; i++)
    {
        cout<<"Enter char to insert at first: ";
        cin>>chch;
        chobj.InsertFirst(chch);
    }
    cout<<"How many chars to insert at last? ";
    cin>>nc;
    for(int i = 0; i < nc; i++)
    {
        cout<<"Enter char to insert at last: ";
        cin>>chch;
        chobj.InsertLast(chch);
    }
    cobj.Display();
    cout<<"Count: " <<chobj.Count()<<"\n";
    cout<<"Largest char: "<<chobj.LargestElement()<<"\n";
    cout<<"Smallest char: "<<chobj.SmallestElement()<<"\n";
    cout<<"Second Max char: "<<chobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n";

    cout<<"------------------------- Doubly Circular Linked List -------------------------------\n\n";

    // --------------------------- INT --------------------------------
    cout<< "--- Integer Linked List ---\n";
    DoublyCLL<int> iiobj;
    int iinum, nv;
    cout<<"How many integers to insert at first? ";
    cin>>nv;
    for(int i = 0; i < nv; i++)
    {
        cout<<"Enter integer to insert at first: ";
        cin>>iinum;
        iiobj.InsertFirst(iinum);
    }
    cout<<"How many integers to insert at last? ";
    cin>>nv;
    for(int i = 0; i < nv; i++)
    {
        cout<<"Enter integer to insert at last: ";
        cin>>iinum;
        iiobj.InsertLast(iinum);
    }
    iobj.Display();
    cout<< "Count: "<<iiobj.Count()<<"\n";
    cout<< "Sum: "<<iiobj.Addition()<<"\n";
    cout<< "Largest: "<<iiobj.LargestElement()<<"\n";
    cout<< "Smallest: "<<iiobj.SmallestElement()<<"\n";
    cout<< "Second Max: "<<iiobj.SecMaximum()<<"\n";
    cout<< "Even Sum: "<<iiobj.AdditionEven()<<"\n";
    iiobj.DisplayPrime();
    cout<<"\n";
    iiobj.DisplayPerfect();
    cout<<"\n";
    iiobj.SumDigit();
    cout<<"\n";
    iiobj.DisplayPalindrome();
    cout<<"\n";
    iiobj.DisplayProduct();
    cout<<"\n";
    iiobj.DisplaySmall();
    cout<<"\n";
    iiobj.DisplayLarge();
    cout<<"\n";
    cout << "---------------------------------------------\n\n";

    // --------------------------- FLOAT --------------------------------
    cout<< "--- Float Linked List ---\n";
    DoublyCLL<float> ffobj;
    float ffnum, nz;
    cout<<"How many floats to insert at first? ";
    cin>>nz;
    for(int i = 0; i < nz; i++)
    {
        cout<<"Enter float to insert at first: ";
        cin>>ffnum;
        ffobj.InsertFirst(ffnum);
    }
    cout<<"How many floats to insert at last? ";
    cin>>nz;
    for(int i = 0; i < nz; i++)
    {
        cout<<"Enter float to insert at last: ";
        cin>>ffnum;
        ffobj.InsertLast(ffnum);
    }
    ffobj.Display();
    cout<<"Count: "<<ffobj.Count()<<"\n";
    cout<<"Sum: "<<ffobj.Addition()<<"\n";
    cout<<"Largest: "<<ffobj.LargestElement()<<"\n";
    cout<<"Smallest: "<<ffobj.SmallestElement()<<"\n";
    cout<<"Second Max: "<<ffobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- DOUBLE --------------------------------
    cout<< "--- Double Linked List ---\n";
    DoublyCLL<double> ddobj;
    double ddnum, nj;
    cout<<"How many doubles to insert at first? ";
    cin>>nj;
    for(int i = 0; i < nj; i++)
    {
        cout<<"Enter double to insert at first: ";
        cin>>ddnum;
        ddobj.InsertFirst(ddnum);
    }
    cout<<"How many doubles to insert at last? ";
    cin>>nj;
    for(int i = 0; i < nj; i++)
    {
        cout<<"Enter double to insert at last: ";
        cin>>ddnum;
        ddobj.InsertLast(ddnum);
    }
    dobj.Display();
    cout<<"Count: "<<ddobj.Count()<<"\n";
    cout<<"Sum: "<<ddobj.Addition()<<"\n";
    cout<<"Largest: "<<ddobj.LargestElement()<<"\n";
    cout<<"Smallest: "<<ddobj.SmallestElement()<<"\n";
    cout<<"Second Max: "<<ddobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- CHAR --------------------------------
    cout<<"--- Character Linked List ---\n";
    DoublyCLL<char> ccobj;
    char ccch, nu;
    cout<<"How many chars to insert at first? ";
    cin>>nu;
    for(int i = 0; i < nu; i++)
    {
        cout<<"Enter char to insert at first: ";
        cin>>ccch;
        ccobj.InsertFirst(ccch);
    } 
    cout<<"How many chars to insert at last? ";
    cin>>nu;
    for(int i = 0; i < nu; i++)
    {
        cout<<"Enter char to insert at last: ";
        cin>>ccch;
        ccobj.InsertLast(ccch);
    }
    cobj.Display();
    cout<<"Count: " <<ccobj.Count()<<"\n";
    cout<<"Largest char: "<<ccobj.LargestElement()<<"\n";
    cout<<"Smallest char: "<<ccobj.SmallestElement()<<"\n";
    cout<<"Second Max char: "<<ccobj.SecMaximum()<<"\n";
    cout<<"---------------------------------------------\n";

    cout<<"----------------------------- Binary Search Tree -----------------------------------\n\n";

    // --------------------------- INT --------------------------------
    BST<int> Inobj;
    cout<<"--- Insertion Operation (int) ---\n";
    int Innum, nx;
    cout<<"How many integers to insert? ";
    cin>>nx;
    for(int i = 0; i < nx; i++)
    {
        cout<<"Enter integer to insert: ";
        cin>>Innum;
        Inobj.Insert(Innum);
    }
    cout << "Elements inserted successfully...\n";
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Traversal Operation (int) ---\n";
    cout<<"Inorder Traversal (LNR)   : ";
    Inobj.Inorder();
    cout<<"\n";
    cout<<"Preorder Traversal (NLR)  : ";
    Inobj.Preorder();
    cout<<"\n";
    cout<<"Postorder Traversal (LRN) : ";
    Inobj.Postorder();
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Searching Operation (int) ---\n";
    cout<<"Enter integer to search: ";
    cin>>Innum;
    bool bRet = Inobj.Search(Innum);
    if(bRet)
    {
        cout<<Innum<<" is present in BST.\n";
    }
    else
    {
        cout<<Innum<<"is not present in BST.\n";
    }
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Counting Operation (int) ---\n";
    cout<<"Total number of nodes         : "<<Inobj.Count()<<"\n";
    cout<<"Total number of leaf nodes    : "<<Inobj.CountLeafNodes()<<"\n";
    cout<<"Total number of parent nodes  : "<<Inobj.CountParentNodes()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- FLOAT --------------------------------
    BST<float> Flobj;
    cout<<"--- Insertion Operation (float) ---\n";
    float Flnum, ne;
    cout<<"How many floats to insert? ";
    cin>>ne;
    for(int i = 0; i < ne; i++)
    {
        cout<<"Enter float to insert: ";
        cin>>Flnum;
        Flobj.Insert(Flnum);
    }
    cout<<"Elements inserted successfully...\n";
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Traversal Operation (float) ---\n";
    cout<<"Inorder Traversal (LNR)   : ";
    Flobj.Inorder();
    cout<<"\n";
    cout<<"Preorder Traversal (NLR)  : ";
    Flobj.Preorder();
    cout<<"\n";
    cout<<"Postorder Traversal (LRN) : ";
    Flobj.Postorder();
    cout<<"\n";
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Searching Operation (float) ---\n";
    cout<<"Enter float to search: ";
    cin>>Flnum;
    bRet = Flobj.Search(Flnum);
    if(bRet)
    {
        cout<<Flnum<<" is present in BST.\n";
    }
    else
    {
        cout<<Flnum<<" is not present in BST.\n";
    }
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Counting Operation (float) ---\n";
    cout<<"Total number of nodes         : "<<Flobj.Count()<<"\n";
    cout<<"Total number of leaf nodes    : "<<Flobj.CountLeafNodes()<<"\n";
    cout<<"Total number of parent nodes  : "<<Flobj.CountParentNodes()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- DOUBLE --------------------------------
    BST<double> Doobj;
    cout<<"--- Insertion Operation (double) ---\n";
    double Donum, nt;
    cout<<"How many doubles to insert? ";
    cin>>nt;
    for(int i = 0; i < nt; i++)
    {
        cout<<"Enter double to insert: ";
        cin>>Donum;
        Doobj.Insert(Donum);
    }
    cout<<"Elements inserted successfully...\n";
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Traversal Operation (double) ---\n";
    cout<<"Inorder Traversal (LNR)   : ";
    Doobj.Inorder();
    cout<<"\n";
    cout<<"Preorder Traversal (NLR)  : ";
    Doobj.Preorder();
    cout<<"\n";
    cout<<"Postorder Traversal (LRN) : ";
    Doobj.Postorder();
    cout<<"\n";
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Searching Operation (double) ---\n";
    cout<<"Enter double to search: ";
    cin>>Donum;
    bRet = Doobj.Search(Donum);
    if(bRet)
    {
        cout<<Donum<<" is present in BST.\n";
    }
    else
    {
        cout<<Donum<<" is not present in BST.\n";
    }
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Counting Operation (double) ---\n";
    cout<<"Total number of nodes         : "<<Doobj.Count()<<"\n";
    cout<<"Total number of leaf nodes    : "<<Doobj.CountLeafNodes()<<"\n";
    cout<<"Total number of parent nodes  : "<<Doobj.CountParentNodes()<<"\n";
    cout<<"---------------------------------------------\n\n";

    // --------------------------- CHAR --------------------------------
    BST<char> Chobj;
    cout<<"--- Insertion Operation (char) ---\n";
    char Chch, nf;
    cout<<"How many chars to insert? ";
    cin>>nf;
    for(int i = 0; i < nf; i++)
    {
        cout<<"Enter char to insert: ";
        cin>>Chch;
        Chobj.Insert(Chch);
    }
    cout<<"Elements inserted successfully...\n";
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Traversal Operation (char) ---\n";
    cout<<"Inorder Traversal (LNR)   : ";
    Chobj.Inorder();
    cout<<"\n";
    cout<<"Preorder Traversal (NLR)  : ";
    Chobj.Preorder();
    cout<<"\n";
    cout<<"Postorder Traversal (LRN) : ";
    Chobj.Postorder();
    cout<<"\n";
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Searching Operation (char) ---\n";
    cout<<"Enter char to search: ";
    cin>>Chch;
    bRet = Chobj.Search(Chch);
    if(bRet)
    {
        cout<<Chch<<" is present in BST.\n";
    }
    else
    {
        cout<<Chch<<" is not present in BST.\n";
    }
    cout<<"---------------------------------------------\n\n";

    cout<<"--- Counting Operation (char) ---\n";
    cout<<"Total number of nodes         : "<<Chobj.Count()<<"\n";
    cout<<"Total number of leaf nodes    : "<<Chobj.CountLeafNodes()<<"\n";
    cout<<"Total number of parent nodes  : "<<Chobj.CountParentNodes()<<"\n";
    cout<<"---------------------------------------------\n\n";

    cout<<"----------------------------- Sorting Algorithm -----------------------------------\n\n";

    // --------------------------- INT ---------------------------------
    cout<<"--- Integer Sorting ---\n";
    int nw;
    cout<<"Enter number of integers: ";
    cin>>nw;
    ArrayXX<int> Iobj(nw);
    Iobj.Accept();
    Iobj.Display();
    Iobj.BubbleSortEfficient();
    Iobj.Display();
    cout<<"---------------------------------------------\n\n";

    // --------------------------- FLOAT -------------------------------
    cout<<"--- Float Sorting ---\n";
    cout<<"Enter number of floats: ";
    cin>>nm;
    ArrayXX<float> Fobj(nm);
    Fobj.Accept();
    Fobj.Display();
    Fobj.SelectionSort();
    Fobj.Display();
    cout<<"---------------------------------------------\n\n";

    // --------------------------- DOUBLE -------------------------------
    cout<<"--- Double Sorting ---\n";
    cout<<"Enter number of doubles: ";
    cin>>nx;
    ArrayX<double> Diobj(nx);
    Diobj.Accept();
    Diobj.Display();
    Diobj.Display();
    cout<<"---------------------------------------------\n\n";

    // --------------------------- CHAR -------------------------------
    cout<<"--- Character Sorting ---\n";
    cout<<"Enter number of characters: ";
    cin>>nf;
    ArrayX<char> Ciobj(nf);
    Ciobj.Accept();
    Ciobj.Display();
    Ciobj.Display();
    cout<<"---------------------------------------------\n\n";

    cout<<"----------------------------- Searching Algorithm -----------------------------------\n\n";

    // --------------------------- INT ---------------------------------
    cout<<"--- Integer Searching ---\n";
    int n;
    cout<<"Enter number of integers: ";
    cin>>nw;
    ArrayX<int> isobj(nw);
    isobj.Accept();
    isobj.Display();
    int isnum;
    cout<<"Enter integer to search: ";
    cin>>isnum;
    if(isobj.LinearSearch(isnum))
    {
        cout<<isnum<<" is Found in the array.\n";
    }
    else
    {
        cout<<isnum<<" is Not Found in the array.\n";
    }
    cout<<"---------------------------------------------\n\n";

    // --------------------------- FLOAT ---------------------------------
    cout<<"--- Float Searching ---\n";
    cout<<"Enter number of floats: ";
    cin>>n;
    ArrayX<float> fsobj(n);
    fsobj.Accept();
    fsobj.Display();
    float fsnum;
    cout<<"Enter float to search: ";
    cin>>fnum;
    if(fsobj.LinearSearch(fsnum))
    {
        cout<<fsnum<<" is Found in the array.\n";
    }
    else
    {
        cout<<fsnum<<" is Not Found in the array.\n";
    }
    cout<<"---------------------------------------------\n\n";

    // --------------------------- DOUBLE ---------------------------------
    cout<<"--- Double Searching ---\n";
    cout<<"Enter number of doubles: ";
    cin>>n;
    ArrayX<double> dsobj(n);
    dsobj.Accept();
    dsobj.Display();
    double dsnum;
    cout<<"Enter double to search: ";
    cin>>dsnum;
    if(dsobj.LinearSearch(dsnum))
    {
        cout<<dsnum<<" is Found in the array.\n";
    }
    else
    {
        cout<<dsnum<<" is Not Found in the array.\n";
    }
    cout<<"---------------------------------------------\n\n";

    // --------------------------- CHAR ---------------------------------
    cout<<"--- Character Searching ---\n";
    cout<<"Enter number of characters: ";
    cin>>n;
    ArrayX<char> caobj(n);
    dsobj.Accept();
    dsobj.Display();
    char cach;
    cout<<"Enter character to search: ";
    cin>>cach;
    if(dsobj.LinearSearch(cach))
    {
        cout<<cach<<" is Found in the array.\n";
    }
    else
    {
        cout<<cach<<" is Not Found in the array.\n";
    }
    cout<<"---------------------------------------------\n\n";

    return 0;
}