/* Write a program which displays all elements which are perfect from singly linear linked list.

Input linked list : |11|->|28|->|17|->|41|->|6|->|89|

Output : 6  28
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

void DisplayPerfect(PNODE head)
{
    int iCnt = 0;
    int iSum = 0;

    while(head != NULL)
    {
        iSum = 0;

       for(iCnt = 1; iCnt < head->data; iCnt++)
       {
        if((head->data % iCnt) == 0)
        {
           iSum = iSum + iCnt;
        }
       }
        if(iSum == head->data)
       {
        printf("%d\t",head->data);
       }
       head = head->next;
    }
    printf("\n");
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

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    printf("Perfect numbers are: \n");

    DisplayPerfect(First);

    return 0;
} 