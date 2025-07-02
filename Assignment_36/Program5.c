/* Write a program which display largest digits of all elements from singly linear linked list.

Input linked list : |11|->|250|->|532|->|419|

Output : 1  5   5  9
*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void DisplayLarge(PNODE head)
{
    int iLarge = 0;
    int iDigit = 0;
    int iNo = 0;

    printf("Largest Digit of element is  :\n");

    while(head != NULL)
    {
      iLarge = 0;
      iNo = head->data;

      while(iNo != 0)
      {
        iDigit = iNo % 10;
        if(iDigit > iLarge)
        {
            iLarge = iDigit;
        }
        iNo = iNo / 10;
      }
      printf("%d",iLarge);
      head = head -> next;
    }
    printf("\n");
} 

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d | ->",head->data);
        head = head -> next;
    }
    printf("NULL\n");
}


int main()
{
    PNODE First = NULL;

    InsertFirst(&First,419);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,111);
   

    DisplayLarge(First);

    return 0;
} 