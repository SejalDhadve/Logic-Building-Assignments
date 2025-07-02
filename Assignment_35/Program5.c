/* Write a program which displays addition of digits of element from singly linear linked list.

Input linked list : |110|->|230|->|20|->|240|->|640|

Output : 2  5  2  6  10
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

void SumDigit(PNODE head)
{
    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;

    printf("Addition of Digits of Elements are: \n");

    while(head != NULL)
    {
        iSum = 0;

        iNo = head->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo /10;
        }
            printf("%d\t",iSum);
            head = head->next;
        }
    }
    
void Display(PNODE head)
{
    while(head != NULL)
     {
        printf("| %d | -> ", head->data);
        head = head -> next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    
    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    SumDigit(First);

    return 0;
} 